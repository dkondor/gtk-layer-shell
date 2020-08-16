/* This entire file is licensed under MIT
 *
 * Copyright 2020 Daniel Kondor
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "gtk-layer-demo.h"
#include "gdk-move-to-rect-hack.h"

static void window_realize_cb(GtkWidget* widget, G_GNUC_UNUSED gpointer data) {
	GdkWindow* gdk_window = gtk_widget_get_window(widget);
	if(!gdk_window) {
		fprintf(stderr,"Error: no gdk window!\n");
	}
	else {
		GdkRectangle rect = {10,10,20,20};
		gdk_window_move_to_rect(gdk_window, &rect, GDK_GRAVITY_WEST,
			GDK_GRAVITY_EAST, GDK_ANCHOR_SLIDE, 0, 0);
	}
}

static void close_cb(G_GNUC_UNUSED GtkWidget* widget, gpointer data) {
	GtkWindow* window = (GtkWindow*)data;
	gtk_window_close(window);
}

void show_popup_window(GtkWindow* parent) {
	GtkWidget* window = gtk_window_new(GTK_WINDOW_POPUP);
	gtk_window_set_title(GTK_WINDOW(window), "Demo popup window");
	gtk_window_set_transient_for(GTK_WINDOW(window), parent);
	/* this does not work!
	 * calling this makes it impossible to position the window relative
	 * to the parent
	gtk_layer_init_for_window (GTK_WINDOW(window));
	 */
	
	GtkWidget* box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 12);
	
	GtkWidget* label = gtk_label_new("Demo popup window");
	gtk_box_pack_start(GTK_BOX(box), label, TRUE, FALSE, 0);
	GtkWidget* button = gtk_button_new_with_label("Close");
	g_signal_connect(button, "clicked", G_CALLBACK(close_cb), window);
	gtk_box_pack_start(GTK_BOX(box), button, TRUE, FALSE, 0);
	gtk_container_add(GTK_CONTAINER(window), box);
	
	g_signal_connect(window, "realize", G_CALLBACK(window_realize_cb), NULL);
	
	/* calling gdk_window_move_to_rect() here is impossible since we
	 * don't have a GdkWindow yet */
	
	gtk_widget_show_all(window);
	
	/* calling gdk_window_move_to_rect() here does not work, since in
	 * that case, the window is already created as a normal toplevel
	 * surface and not a layer-shell surface, so positioning it relative
	 * to the layer-shell parent will not work either */
}

