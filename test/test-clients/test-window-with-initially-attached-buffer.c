/* This entire file is licensed under MIT
 *
 * Copyright 2020 William Wold
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "test-client-common.h"

static GtkWindow* window;

static void on_realize(GtkWidget *widget, gpointer _data)
{
    (void)_data;
    GdkWindow *gdk_window = gtk_widget_get_window(widget);
    // This forces GTK to create a cairo surface for the window, which results in in being attached before our custom
    // surface role objects are created/configured, which causes an error unless we clear the attached buffer
    cairo_surface_t *cr = gdk_window_create_similar_surface (gdk_window, CAIRO_CONTENT_COLOR_ALPHA, 100, 100);
    cairo_surface_destroy(cr);
}

static void callback_0()
{
    window = create_default_window();
    g_signal_connect(G_OBJECT(window), "realize", G_CALLBACK(on_realize), NULL);
    gtk_layer_init_for_window(window);
    gtk_widget_show_all(GTK_WIDGET(window));
}
TEST_CALLBACKS(
    callback_0,
)