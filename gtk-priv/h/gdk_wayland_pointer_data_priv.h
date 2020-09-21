/* This file is part of gtk-layer-shell
 *
 * Copyright (C) 2009 Carlos Garnacho <carlosg@gnome.org>
 * Copyright © 2020 gtk-priv/scripts/code.py
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef GDK_WAYLAND_POINTER_DATA_PRIV_H
#define GDK_WAYLAND_POINTER_DATA_PRIV_H

typedef struct _GdkWaylandPointerData GdkWaylandPointerData;

// Version ID 0
// Valid for GTK v3.22.0 - v3.24.24 (unreleased)
struct _GdkWaylandPointerData_v3_22_0
{
  GdkWindow *focus;
  double surface_x;
  double surface_y;;
  GdkModifierType button_modifiers;
  uint32_t time;
  uint32_t enter_serial;
  uint32_t press_serial;
  GdkWindow *grab_window;
  uint32_t grab_time;
  struct wl_surface *pointer_surface;
  GdkCursor *cursor;
  guint cursor_timeout_id;
  guint cursor_image_index;
  guint cursor_image_delay;
  guint current_output_scale;
  GSList *pointer_surface_outputs;
  struct _GdkWaylandPointerFrameData_v3_22_0 frame;
};

// For internal use only
int gdk_wayland_pointer_data_priv_get_version_id() {
  static int version_id = -1;
  
  if (version_id == -1) {
    if (gtk_get_major_version() != 3) {
      g_error("gtk-layer-shell only supports GTK3");
      g_abort();
    }
  
    int combo = gtk_get_minor_version() * 1000 + gtk_get_micro_version();
  
    switch (combo) {
      case 22000:
      case 22001:
      case 22002:
      case 22003:
      case 22004:
      case 22005:
      case 22006:
      case 22007:
      case 22008:
      case 22009:
      case 22010:
      case 22011:
      case 22012:
      case 22013:
      case 22014:
      case 22015:
      case 22016:
      case 22017:
      case 22018:
      case 22019:
      case 22020:
      case 22021:
      case 22022:
      case 22023:
      case 22024:
      case 22025:
      case 22026:
      case 22027:
      case 22028:
      case 22029:
      case 22030:
      case 23000:
      case 23001:
      case 23002:
      case 23003:
      case 24000:
      case 24001:
      case 24002:
      case 24003:
      case 24004:
      case 24005:
      case 24006:
      case 24007:
      case 24008:
      case 24009:
      case 24010:
      case 24011:
      case 24012:
      case 24013:
      case 24014:
      case 24015:
      case 24016:
      case 24017:
      case 24018:
      case 24020:
      case 24021:
      case 24022:
      case 24023:
        break;
  
      default:
        g_warning(
          "gtk-layer-shell was not compiled with support for GTK v%d.%d.%d, program may crash",
          gtk_get_major_version(),
          gtk_get_minor_version(),
          gtk_get_micro_version());
    }
  
    {
      version_id = 0;
    }
  }
  
  return version_id;
}

// GdkWaylandPointerData::focus

GdkWindow * gdk_wayland_pointer_data_priv_get_focus(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->focus;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_focus(GdkWaylandPointerData * self, GdkWindow * focus) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->focus = focus; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::surface_x

double gdk_wayland_pointer_data_priv_get_surface_x(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->surface_x;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_surface_x(GdkWaylandPointerData * self, double surface_x) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->surface_x = surface_x; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::surface_y

double gdk_wayland_pointer_data_priv_get_surface_y(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->surface_y;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_surface_y(GdkWaylandPointerData * self, double surface_y) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->surface_y = surface_y; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::button_modifiers

GdkModifierType * gdk_wayland_pointer_data_priv_get_button_modifiers_ptr(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return (GdkModifierType *)&((struct _GdkWaylandPointerData_v3_22_0*)self)->button_modifiers;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::time

uint32_t gdk_wayland_pointer_data_priv_get_time(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->time;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_time(GdkWaylandPointerData * self, uint32_t time) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->time = time; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::enter_serial

uint32_t gdk_wayland_pointer_data_priv_get_enter_serial(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->enter_serial;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_enter_serial(GdkWaylandPointerData * self, uint32_t enter_serial) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->enter_serial = enter_serial; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::press_serial

uint32_t gdk_wayland_pointer_data_priv_get_press_serial(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->press_serial;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_press_serial(GdkWaylandPointerData * self, uint32_t press_serial) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->press_serial = press_serial; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::grab_window

GdkWindow * gdk_wayland_pointer_data_priv_get_grab_window(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->grab_window;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_grab_window(GdkWaylandPointerData * self, GdkWindow * grab_window) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->grab_window = grab_window; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::grab_time

uint32_t gdk_wayland_pointer_data_priv_get_grab_time(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->grab_time;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_grab_time(GdkWaylandPointerData * self, uint32_t grab_time) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->grab_time = grab_time; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::pointer_surface

struct wl_surface * gdk_wayland_pointer_data_priv_get_pointer_surface(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->pointer_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_pointer_surface(GdkWaylandPointerData * self, struct wl_surface * pointer_surface) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->pointer_surface = pointer_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::cursor

GdkCursor * gdk_wayland_pointer_data_priv_get_cursor(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->cursor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_cursor(GdkWaylandPointerData * self, GdkCursor * cursor) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->cursor = cursor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::cursor_timeout_id

guint gdk_wayland_pointer_data_priv_get_cursor_timeout_id(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->cursor_timeout_id;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_cursor_timeout_id(GdkWaylandPointerData * self, guint cursor_timeout_id) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->cursor_timeout_id = cursor_timeout_id; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::cursor_image_index

guint gdk_wayland_pointer_data_priv_get_cursor_image_index(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->cursor_image_index;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_cursor_image_index(GdkWaylandPointerData * self, guint cursor_image_index) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->cursor_image_index = cursor_image_index; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::cursor_image_delay

guint gdk_wayland_pointer_data_priv_get_cursor_image_delay(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->cursor_image_delay;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_cursor_image_delay(GdkWaylandPointerData * self, guint cursor_image_delay) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->cursor_image_delay = cursor_image_delay; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::current_output_scale

guint gdk_wayland_pointer_data_priv_get_current_output_scale(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->current_output_scale;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_current_output_scale(GdkWaylandPointerData * self, guint current_output_scale) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->current_output_scale = current_output_scale; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::pointer_surface_outputs

GSList * gdk_wayland_pointer_data_priv_get_pointer_surface_outputs(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandPointerData_v3_22_0*)self)->pointer_surface_outputs;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_pointer_data_priv_set_pointer_surface_outputs(GdkWaylandPointerData * self, GSList * pointer_surface_outputs) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandPointerData_v3_22_0*)self)->pointer_surface_outputs = pointer_surface_outputs; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandPointerData::frame

GdkWaylandPointerFrameData * gdk_wayland_pointer_data_priv_get_frame_ptr(GdkWaylandPointerData * self) {
  switch (gdk_wayland_pointer_data_priv_get_version_id()) {
    case 0: return (GdkWaylandPointerFrameData *)&((struct _GdkWaylandPointerData_v3_22_0*)self)->frame;
    default: g_error("Invalid version ID"); g_abort();
  }
}

#endif // GDK_WAYLAND_POINTER_DATA_PRIV_H
