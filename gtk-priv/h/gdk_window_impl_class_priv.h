/* This file is part of gtk-layer-shell
 *
 * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
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

#ifndef GDK_WINDOW_IMPL_CLASS_PRIV_H
#define GDK_WINDOW_IMPL_CLASS_PRIV_H

typedef struct _GdkWindowImplClass GdkWindowImplClass;

// Version ID 0
// Valid for GTK v3.22.0 - v3.24.24 (unreleased)
struct _GdkWindowImplClass_v3_22_0
{
  GObjectClass parent_class;
  cairo_surface_t * (* ref_cairo_surface) (GdkWindow *window);
  cairo_surface_t * (* create_similar_image_surface) (GdkWindow *window, cairo_format_t format, int width, int height);
  void (* show) (GdkWindow *window, gboolean already_mapped);
  void (* hide) (GdkWindow *window);
  void (* withdraw) (GdkWindow *window);
  void (* raise) (GdkWindow *window);
  void (* lower) (GdkWindow *window);
  void (* restack_under) (GdkWindow *window, GList *native_siblings);
  void (* restack_toplevel) (GdkWindow *window, GdkWindow *sibling, gboolean above);
  void (* move_resize) (GdkWindow *window, gboolean with_move, gint x, gint y, gint width, gint height);
  void (* move_to_rect) (GdkWindow *window, const GdkRectangle *rect, GdkGravity rect_anchor, GdkGravity window_anchor, GdkAnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy);
  void (* set_background) (GdkWindow *window, cairo_pattern_t *pattern);
  GdkEventMask (* get_events) (GdkWindow *window);
  void (* set_events) (GdkWindow *window, GdkEventMask event_mask);
  gboolean (* reparent) (GdkWindow *window, GdkWindow *new_parent, gint x, gint y);
  void (* set_device_cursor) (GdkWindow *window, GdkDevice *device, GdkCursor *cursor);
  void (* get_geometry) (GdkWindow *window, gint *x, gint *y, gint *width, gint *height);
  void (* get_root_coords) (GdkWindow *window, gint x, gint y, gint *root_x, gint *root_y);
  gboolean (* get_device_state) (GdkWindow *window, GdkDevice *device, gdouble *x, gdouble *y, GdkModifierType *mask);
  gboolean (* begin_paint) (GdkWindow *window);
  void (* end_paint) (GdkWindow *window);
  cairo_region_t * (* get_shape) (GdkWindow *window);
  cairo_region_t * (* get_input_shape) (GdkWindow *window);
  void (* shape_combine_region) (GdkWindow *window, const cairo_region_t *shape_region, gint offset_x, gint offset_y);
  void (* input_shape_combine_region) (GdkWindow *window, const cairo_region_t *shape_region, gint offset_x, gint offset_y);
  void (* queue_antiexpose) (GdkWindow *window, cairo_region_t *update_area);
  void (* destroy) (GdkWindow *window, gboolean recursing, gboolean foreign_destroy);
  void (* destroy_foreign) (GdkWindow *window);
  gboolean (* beep) (GdkWindow *window);
  void (* focus) (GdkWindow *window, guint32 timestamp);
  void (* set_type_hint) (GdkWindow *window, GdkWindowTypeHint hint);
  GdkWindowTypeHint (* get_type_hint) (GdkWindow *window);
  void (* set_modal_hint) (GdkWindow *window, gboolean modal);
  void (* set_skip_taskbar_hint) (GdkWindow *window, gboolean skips_taskbar);
  void (* set_skip_pager_hint) (GdkWindow *window, gboolean skips_pager);
  void (* set_urgency_hint) (GdkWindow *window, gboolean urgent);
  void (* set_geometry_hints) (GdkWindow *window, const GdkGeometry *geometry, GdkWindowHints geom_mask);
  void (* set_title) (GdkWindow *window, const gchar *title);
  void (* set_role) (GdkWindow *window, const gchar *role);
  void (* set_startup_id) (GdkWindow *window, const gchar *startup_id);
  void (* set_transient_for) (GdkWindow *window, GdkWindow *parent);
  void (* get_frame_extents) (GdkWindow *window, GdkRectangle *rect);
  void (* set_override_redirect) (GdkWindow *window, gboolean override_redirect);
  void (* set_accept_focus) (GdkWindow *window, gboolean accept_focus);
  void (* set_focus_on_map) (GdkWindow *window, gboolean focus_on_map);
  void (* set_icon_list) (GdkWindow *window, GList *pixbufs);
  void (* set_icon_name) (GdkWindow *window, const gchar *name);
  void (* iconify) (GdkWindow *window);
  void (* deiconify) (GdkWindow *window);
  void (* stick) (GdkWindow *window);
  void (* unstick) (GdkWindow *window);
  void (* maximize) (GdkWindow *window);
  void (* unmaximize) (GdkWindow *window);
  void (* fullscreen) (GdkWindow *window);
  void (* fullscreen_on_monitor) (GdkWindow *window, gint monitor);
  void (* apply_fullscreen_mode) (GdkWindow *window);
  void (* unfullscreen) (GdkWindow *window);
  void (* set_keep_above) (GdkWindow *window, gboolean setting);
  void (* set_keep_below) (GdkWindow *window, gboolean setting);
  GdkWindow * (* get_group) (GdkWindow *window);
  void (* set_group) (GdkWindow *window, GdkWindow *leader);
  void (* set_decorations) (GdkWindow *window, GdkWMDecoration decorations);
  gboolean (* get_decorations) (GdkWindow *window, GdkWMDecoration *decorations);
  void (* set_functions) (GdkWindow *window, GdkWMFunction functions);
  void (* begin_resize_drag) (GdkWindow *window, GdkWindowEdge edge, GdkDevice *device, gint button, gint root_x, gint root_y, guint32 timestamp);
  void (* begin_move_drag) (GdkWindow *window, GdkDevice *device, gint button, gint root_x, gint root_y, guint32 timestamp);
  void (* enable_synchronized_configure) (GdkWindow *window);
  void (* configure_finished) (GdkWindow *window);
  void (* set_opacity) (GdkWindow *window, gdouble opacity);
  void (* set_composited) (GdkWindow *window, gboolean composited);
  void (* destroy_notify) (GdkWindow *window);
  GdkDragProtocol (* get_drag_protocol) (GdkWindow *window, GdkWindow **target);
  void (* register_dnd) (GdkWindow *window);
  GdkDragContext * (* drag_begin) (GdkWindow *window, GdkDevice *device, GList *targets, gint x_root, gint y_root);
  void (* process_updates_recurse) (GdkWindow *window, cairo_region_t *region);
  void (* sync_rendering) (GdkWindow *window);
  gboolean (* simulate_key) (GdkWindow *window, gint x, gint y, guint keyval, GdkModifierType modifiers, GdkEventType event_type);
  gboolean (* simulate_button) (GdkWindow *window, gint x, gint y, guint button, GdkModifierType modifiers, GdkEventType event_type);
  gboolean (* get_property) (GdkWindow *window, GdkAtom property, GdkAtom type, gulong offset, gulong length, gint pdelete, GdkAtom *actual_type, gint *actual_format, gint *actual_length, guchar **data);
  void (* change_property) (GdkWindow *window, GdkAtom property, GdkAtom type, gint format, GdkPropMode mode, const guchar *data, gint n_elements);
  void (* delete_property) (GdkWindow *window, GdkAtom property);
  gint (* get_scale_factor) (GdkWindow *window);
  void (* get_unscaled_size) (GdkWindow *window, int *unscaled_width, int *unscaled_height);
  void (* set_opaque_region) (GdkWindow *window, cairo_region_t *region);
  void (* set_shadow_width) (GdkWindow *window, gint left, gint right, gint top, gint bottom);
  gboolean (* show_window_menu) (GdkWindow *window, GdkEvent *event);
  GdkGLContext * (* create_gl_context) (GdkWindow *window, gboolean attached, GdkGLContext *share, GError **error);
  gboolean (* realize_gl_context) (GdkWindow *window, GdkGLContext *context, GError **error);
  void (* invalidate_for_new_frame) (GdkWindow *window, cairo_region_t *update_area);
  GdkDrawingContext * (* create_draw_context) (GdkWindow *window, const cairo_region_t *region);
  void (* destroy_draw_context) (GdkWindow *window, GdkDrawingContext *context);
};

// For internal use only
int gdk_window_impl_class_priv_get_version_id() {
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

// GdkWindowImplClass::parent_class

GObjectClass * gdk_window_impl_class_priv_get_parent_class_ptr(GdkWindowImplClass * self) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return (GObjectClass *)&((struct _GdkWindowImplClass_v3_22_0*)self)->parent_class;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::ref_cairo_surface

cairo_surface_t * (* gdk_window_impl_class_priv_get_ref_cairo_surface(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->ref_cairo_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_ref_cairo_surface(GdkWindowImplClass * self, cairo_surface_t * (* ref_cairo_surface) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->ref_cairo_surface = ref_cairo_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::create_similar_image_surface

cairo_surface_t * (* gdk_window_impl_class_priv_get_create_similar_image_surface(GdkWindowImplClass * self)) (GdkWindow *window, cairo_format_t format, int width, int height) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->create_similar_image_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_create_similar_image_surface(GdkWindowImplClass * self, cairo_surface_t * (* create_similar_image_surface) (GdkWindow *window, cairo_format_t format, int width, int height)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->create_similar_image_surface = create_similar_image_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::show

void (* gdk_window_impl_class_priv_get_show(GdkWindowImplClass * self)) (GdkWindow *window, gboolean already_mapped) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->show;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_show(GdkWindowImplClass * self, void (* show) (GdkWindow *window, gboolean already_mapped)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->show = show; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::hide

void (* gdk_window_impl_class_priv_get_hide(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->hide;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_hide(GdkWindowImplClass * self, void (* hide) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->hide = hide; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::withdraw

void (* gdk_window_impl_class_priv_get_withdraw(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->withdraw;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_withdraw(GdkWindowImplClass * self, void (* withdraw) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->withdraw = withdraw; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::raise

void (* gdk_window_impl_class_priv_get_raise(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->raise;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_raise(GdkWindowImplClass * self, void (* raise) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->raise = raise; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::lower

void (* gdk_window_impl_class_priv_get_lower(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->lower;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_lower(GdkWindowImplClass * self, void (* lower) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->lower = lower; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::restack_under

void (* gdk_window_impl_class_priv_get_restack_under(GdkWindowImplClass * self)) (GdkWindow *window, GList *native_siblings) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->restack_under;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_restack_under(GdkWindowImplClass * self, void (* restack_under) (GdkWindow *window, GList *native_siblings)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->restack_under = restack_under; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::restack_toplevel

void (* gdk_window_impl_class_priv_get_restack_toplevel(GdkWindowImplClass * self)) (GdkWindow *window, GdkWindow *sibling, gboolean above) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->restack_toplevel;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_restack_toplevel(GdkWindowImplClass * self, void (* restack_toplevel) (GdkWindow *window, GdkWindow *sibling, gboolean above)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->restack_toplevel = restack_toplevel; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::move_resize

void (* gdk_window_impl_class_priv_get_move_resize(GdkWindowImplClass * self)) (GdkWindow *window, gboolean with_move, gint x, gint y, gint width, gint height) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->move_resize;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_move_resize(GdkWindowImplClass * self, void (* move_resize) (GdkWindow *window, gboolean with_move, gint x, gint y, gint width, gint height)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->move_resize = move_resize; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::move_to_rect

void (* gdk_window_impl_class_priv_get_move_to_rect(GdkWindowImplClass * self)) (GdkWindow *window, const GdkRectangle *rect, GdkGravity rect_anchor, GdkGravity window_anchor, GdkAnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->move_to_rect;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_move_to_rect(GdkWindowImplClass * self, void (* move_to_rect) (GdkWindow *window, const GdkRectangle *rect, GdkGravity rect_anchor, GdkGravity window_anchor, GdkAnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->move_to_rect = move_to_rect; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_background

void (* gdk_window_impl_class_priv_get_set_background(GdkWindowImplClass * self)) (GdkWindow *window, cairo_pattern_t *pattern) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_background;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_background(GdkWindowImplClass * self, void (* set_background) (GdkWindow *window, cairo_pattern_t *pattern)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_background = set_background; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_events

GdkEventMask (* gdk_window_impl_class_priv_get_get_events(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_events;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_events(GdkWindowImplClass * self, GdkEventMask (* get_events) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_events = get_events; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_events

void (* gdk_window_impl_class_priv_get_set_events(GdkWindowImplClass * self)) (GdkWindow *window, GdkEventMask event_mask) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_events;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_events(GdkWindowImplClass * self, void (* set_events) (GdkWindow *window, GdkEventMask event_mask)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_events = set_events; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::reparent

gboolean (* gdk_window_impl_class_priv_get_reparent(GdkWindowImplClass * self)) (GdkWindow *window, GdkWindow *new_parent, gint x, gint y) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->reparent;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_reparent(GdkWindowImplClass * self, gboolean (* reparent) (GdkWindow *window, GdkWindow *new_parent, gint x, gint y)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->reparent = reparent; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_device_cursor

void (* gdk_window_impl_class_priv_get_set_device_cursor(GdkWindowImplClass * self)) (GdkWindow *window, GdkDevice *device, GdkCursor *cursor) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_device_cursor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_device_cursor(GdkWindowImplClass * self, void (* set_device_cursor) (GdkWindow *window, GdkDevice *device, GdkCursor *cursor)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_device_cursor = set_device_cursor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_geometry

void (* gdk_window_impl_class_priv_get_get_geometry(GdkWindowImplClass * self)) (GdkWindow *window, gint *x, gint *y, gint *width, gint *height) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_geometry;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_geometry(GdkWindowImplClass * self, void (* get_geometry) (GdkWindow *window, gint *x, gint *y, gint *width, gint *height)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_geometry = get_geometry; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_root_coords

void (* gdk_window_impl_class_priv_get_get_root_coords(GdkWindowImplClass * self)) (GdkWindow *window, gint x, gint y, gint *root_x, gint *root_y) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_root_coords;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_root_coords(GdkWindowImplClass * self, void (* get_root_coords) (GdkWindow *window, gint x, gint y, gint *root_x, gint *root_y)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_root_coords = get_root_coords; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_device_state

gboolean (* gdk_window_impl_class_priv_get_get_device_state(GdkWindowImplClass * self)) (GdkWindow *window, GdkDevice *device, gdouble *x, gdouble *y, GdkModifierType *mask) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_device_state;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_device_state(GdkWindowImplClass * self, gboolean (* get_device_state) (GdkWindow *window, GdkDevice *device, gdouble *x, gdouble *y, GdkModifierType *mask)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_device_state = get_device_state; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::begin_paint

gboolean (* gdk_window_impl_class_priv_get_begin_paint(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->begin_paint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_begin_paint(GdkWindowImplClass * self, gboolean (* begin_paint) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->begin_paint = begin_paint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::end_paint

void (* gdk_window_impl_class_priv_get_end_paint(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->end_paint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_end_paint(GdkWindowImplClass * self, void (* end_paint) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->end_paint = end_paint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_shape

cairo_region_t * (* gdk_window_impl_class_priv_get_get_shape(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_shape;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_shape(GdkWindowImplClass * self, cairo_region_t * (* get_shape) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_shape = get_shape; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_input_shape

cairo_region_t * (* gdk_window_impl_class_priv_get_get_input_shape(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_input_shape;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_input_shape(GdkWindowImplClass * self, cairo_region_t * (* get_input_shape) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_input_shape = get_input_shape; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::shape_combine_region

void (* gdk_window_impl_class_priv_get_shape_combine_region(GdkWindowImplClass * self)) (GdkWindow *window, const cairo_region_t *shape_region, gint offset_x, gint offset_y) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->shape_combine_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_shape_combine_region(GdkWindowImplClass * self, void (* shape_combine_region) (GdkWindow *window, const cairo_region_t *shape_region, gint offset_x, gint offset_y)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->shape_combine_region = shape_combine_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::input_shape_combine_region

void (* gdk_window_impl_class_priv_get_input_shape_combine_region(GdkWindowImplClass * self)) (GdkWindow *window, const cairo_region_t *shape_region, gint offset_x, gint offset_y) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->input_shape_combine_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_input_shape_combine_region(GdkWindowImplClass * self, void (* input_shape_combine_region) (GdkWindow *window, const cairo_region_t *shape_region, gint offset_x, gint offset_y)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->input_shape_combine_region = input_shape_combine_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::queue_antiexpose

void (* gdk_window_impl_class_priv_get_queue_antiexpose(GdkWindowImplClass * self)) (GdkWindow *window, cairo_region_t *update_area) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->queue_antiexpose;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_queue_antiexpose(GdkWindowImplClass * self, void (* queue_antiexpose) (GdkWindow *window, cairo_region_t *update_area)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->queue_antiexpose = queue_antiexpose; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::destroy

void (* gdk_window_impl_class_priv_get_destroy(GdkWindowImplClass * self)) (GdkWindow *window, gboolean recursing, gboolean foreign_destroy) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->destroy;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_destroy(GdkWindowImplClass * self, void (* destroy) (GdkWindow *window, gboolean recursing, gboolean foreign_destroy)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->destroy = destroy; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::destroy_foreign

void (* gdk_window_impl_class_priv_get_destroy_foreign(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->destroy_foreign;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_destroy_foreign(GdkWindowImplClass * self, void (* destroy_foreign) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->destroy_foreign = destroy_foreign; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::beep

gboolean (* gdk_window_impl_class_priv_get_beep(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->beep;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_beep(GdkWindowImplClass * self, gboolean (* beep) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->beep = beep; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::focus

void (* gdk_window_impl_class_priv_get_focus(GdkWindowImplClass * self)) (GdkWindow *window, guint32 timestamp) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->focus;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_focus(GdkWindowImplClass * self, void (* focus) (GdkWindow *window, guint32 timestamp)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->focus = focus; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_type_hint

void (* gdk_window_impl_class_priv_get_set_type_hint(GdkWindowImplClass * self)) (GdkWindow *window, GdkWindowTypeHint hint) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_type_hint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_type_hint(GdkWindowImplClass * self, void (* set_type_hint) (GdkWindow *window, GdkWindowTypeHint hint)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_type_hint = set_type_hint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_type_hint

GdkWindowTypeHint (* gdk_window_impl_class_priv_get_get_type_hint(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_type_hint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_type_hint(GdkWindowImplClass * self, GdkWindowTypeHint (* get_type_hint) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_type_hint = get_type_hint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_modal_hint

void (* gdk_window_impl_class_priv_get_set_modal_hint(GdkWindowImplClass * self)) (GdkWindow *window, gboolean modal) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_modal_hint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_modal_hint(GdkWindowImplClass * self, void (* set_modal_hint) (GdkWindow *window, gboolean modal)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_modal_hint = set_modal_hint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_skip_taskbar_hint

void (* gdk_window_impl_class_priv_get_set_skip_taskbar_hint(GdkWindowImplClass * self)) (GdkWindow *window, gboolean skips_taskbar) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_skip_taskbar_hint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_skip_taskbar_hint(GdkWindowImplClass * self, void (* set_skip_taskbar_hint) (GdkWindow *window, gboolean skips_taskbar)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_skip_taskbar_hint = set_skip_taskbar_hint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_skip_pager_hint

void (* gdk_window_impl_class_priv_get_set_skip_pager_hint(GdkWindowImplClass * self)) (GdkWindow *window, gboolean skips_pager) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_skip_pager_hint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_skip_pager_hint(GdkWindowImplClass * self, void (* set_skip_pager_hint) (GdkWindow *window, gboolean skips_pager)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_skip_pager_hint = set_skip_pager_hint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_urgency_hint

void (* gdk_window_impl_class_priv_get_set_urgency_hint(GdkWindowImplClass * self)) (GdkWindow *window, gboolean urgent) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_urgency_hint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_urgency_hint(GdkWindowImplClass * self, void (* set_urgency_hint) (GdkWindow *window, gboolean urgent)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_urgency_hint = set_urgency_hint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_geometry_hints

void (* gdk_window_impl_class_priv_get_set_geometry_hints(GdkWindowImplClass * self)) (GdkWindow *window, const GdkGeometry *geometry, GdkWindowHints geom_mask) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_geometry_hints;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_geometry_hints(GdkWindowImplClass * self, void (* set_geometry_hints) (GdkWindow *window, const GdkGeometry *geometry, GdkWindowHints geom_mask)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_geometry_hints = set_geometry_hints; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_title

void (* gdk_window_impl_class_priv_get_set_title(GdkWindowImplClass * self)) (GdkWindow *window, const gchar *title) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_title;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_title(GdkWindowImplClass * self, void (* set_title) (GdkWindow *window, const gchar *title)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_title = set_title; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_role

void (* gdk_window_impl_class_priv_get_set_role(GdkWindowImplClass * self)) (GdkWindow *window, const gchar *role) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_role;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_role(GdkWindowImplClass * self, void (* set_role) (GdkWindow *window, const gchar *role)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_role = set_role; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_startup_id

void (* gdk_window_impl_class_priv_get_set_startup_id(GdkWindowImplClass * self)) (GdkWindow *window, const gchar *startup_id) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_startup_id;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_startup_id(GdkWindowImplClass * self, void (* set_startup_id) (GdkWindow *window, const gchar *startup_id)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_startup_id = set_startup_id; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_transient_for

void (* gdk_window_impl_class_priv_get_set_transient_for(GdkWindowImplClass * self)) (GdkWindow *window, GdkWindow *parent) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_transient_for;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_transient_for(GdkWindowImplClass * self, void (* set_transient_for) (GdkWindow *window, GdkWindow *parent)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_transient_for = set_transient_for; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_frame_extents

void (* gdk_window_impl_class_priv_get_get_frame_extents(GdkWindowImplClass * self)) (GdkWindow *window, GdkRectangle *rect) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_frame_extents;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_frame_extents(GdkWindowImplClass * self, void (* get_frame_extents) (GdkWindow *window, GdkRectangle *rect)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_frame_extents = get_frame_extents; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_override_redirect

void (* gdk_window_impl_class_priv_get_set_override_redirect(GdkWindowImplClass * self)) (GdkWindow *window, gboolean override_redirect) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_override_redirect;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_override_redirect(GdkWindowImplClass * self, void (* set_override_redirect) (GdkWindow *window, gboolean override_redirect)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_override_redirect = set_override_redirect; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_accept_focus

void (* gdk_window_impl_class_priv_get_set_accept_focus(GdkWindowImplClass * self)) (GdkWindow *window, gboolean accept_focus) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_accept_focus;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_accept_focus(GdkWindowImplClass * self, void (* set_accept_focus) (GdkWindow *window, gboolean accept_focus)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_accept_focus = set_accept_focus; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_focus_on_map

void (* gdk_window_impl_class_priv_get_set_focus_on_map(GdkWindowImplClass * self)) (GdkWindow *window, gboolean focus_on_map) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_focus_on_map;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_focus_on_map(GdkWindowImplClass * self, void (* set_focus_on_map) (GdkWindow *window, gboolean focus_on_map)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_focus_on_map = set_focus_on_map; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_icon_list

void (* gdk_window_impl_class_priv_get_set_icon_list(GdkWindowImplClass * self)) (GdkWindow *window, GList *pixbufs) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_icon_list;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_icon_list(GdkWindowImplClass * self, void (* set_icon_list) (GdkWindow *window, GList *pixbufs)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_icon_list = set_icon_list; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_icon_name

void (* gdk_window_impl_class_priv_get_set_icon_name(GdkWindowImplClass * self)) (GdkWindow *window, const gchar *name) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_icon_name;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_icon_name(GdkWindowImplClass * self, void (* set_icon_name) (GdkWindow *window, const gchar *name)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_icon_name = set_icon_name; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::iconify

void (* gdk_window_impl_class_priv_get_iconify(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->iconify;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_iconify(GdkWindowImplClass * self, void (* iconify) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->iconify = iconify; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::deiconify

void (* gdk_window_impl_class_priv_get_deiconify(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->deiconify;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_deiconify(GdkWindowImplClass * self, void (* deiconify) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->deiconify = deiconify; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::stick

void (* gdk_window_impl_class_priv_get_stick(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->stick;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_stick(GdkWindowImplClass * self, void (* stick) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->stick = stick; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::unstick

void (* gdk_window_impl_class_priv_get_unstick(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->unstick;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_unstick(GdkWindowImplClass * self, void (* unstick) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->unstick = unstick; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::maximize

void (* gdk_window_impl_class_priv_get_maximize(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->maximize;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_maximize(GdkWindowImplClass * self, void (* maximize) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->maximize = maximize; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::unmaximize

void (* gdk_window_impl_class_priv_get_unmaximize(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->unmaximize;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_unmaximize(GdkWindowImplClass * self, void (* unmaximize) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->unmaximize = unmaximize; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::fullscreen

void (* gdk_window_impl_class_priv_get_fullscreen(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->fullscreen;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_fullscreen(GdkWindowImplClass * self, void (* fullscreen) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->fullscreen = fullscreen; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::fullscreen_on_monitor

void (* gdk_window_impl_class_priv_get_fullscreen_on_monitor(GdkWindowImplClass * self)) (GdkWindow *window, gint monitor) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->fullscreen_on_monitor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_fullscreen_on_monitor(GdkWindowImplClass * self, void (* fullscreen_on_monitor) (GdkWindow *window, gint monitor)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->fullscreen_on_monitor = fullscreen_on_monitor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::apply_fullscreen_mode

void (* gdk_window_impl_class_priv_get_apply_fullscreen_mode(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->apply_fullscreen_mode;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_apply_fullscreen_mode(GdkWindowImplClass * self, void (* apply_fullscreen_mode) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->apply_fullscreen_mode = apply_fullscreen_mode; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::unfullscreen

void (* gdk_window_impl_class_priv_get_unfullscreen(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->unfullscreen;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_unfullscreen(GdkWindowImplClass * self, void (* unfullscreen) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->unfullscreen = unfullscreen; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_keep_above

void (* gdk_window_impl_class_priv_get_set_keep_above(GdkWindowImplClass * self)) (GdkWindow *window, gboolean setting) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_keep_above;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_keep_above(GdkWindowImplClass * self, void (* set_keep_above) (GdkWindow *window, gboolean setting)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_keep_above = set_keep_above; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_keep_below

void (* gdk_window_impl_class_priv_get_set_keep_below(GdkWindowImplClass * self)) (GdkWindow *window, gboolean setting) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_keep_below;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_keep_below(GdkWindowImplClass * self, void (* set_keep_below) (GdkWindow *window, gboolean setting)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_keep_below = set_keep_below; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_group

GdkWindow * (* gdk_window_impl_class_priv_get_get_group(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_group;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_group(GdkWindowImplClass * self, GdkWindow * (* get_group) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_group = get_group; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_group

void (* gdk_window_impl_class_priv_get_set_group(GdkWindowImplClass * self)) (GdkWindow *window, GdkWindow *leader) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_group;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_group(GdkWindowImplClass * self, void (* set_group) (GdkWindow *window, GdkWindow *leader)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_group = set_group; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_decorations

void (* gdk_window_impl_class_priv_get_set_decorations(GdkWindowImplClass * self)) (GdkWindow *window, GdkWMDecoration decorations) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_decorations;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_decorations(GdkWindowImplClass * self, void (* set_decorations) (GdkWindow *window, GdkWMDecoration decorations)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_decorations = set_decorations; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_decorations

gboolean (* gdk_window_impl_class_priv_get_get_decorations(GdkWindowImplClass * self)) (GdkWindow *window, GdkWMDecoration *decorations) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_decorations;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_decorations(GdkWindowImplClass * self, gboolean (* get_decorations) (GdkWindow *window, GdkWMDecoration *decorations)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_decorations = get_decorations; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_functions

void (* gdk_window_impl_class_priv_get_set_functions(GdkWindowImplClass * self)) (GdkWindow *window, GdkWMFunction functions) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_functions;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_functions(GdkWindowImplClass * self, void (* set_functions) (GdkWindow *window, GdkWMFunction functions)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_functions = set_functions; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::begin_resize_drag

void (* gdk_window_impl_class_priv_get_begin_resize_drag(GdkWindowImplClass * self)) (GdkWindow *window, GdkWindowEdge edge, GdkDevice *device, gint button, gint root_x, gint root_y, guint32 timestamp) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->begin_resize_drag;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_begin_resize_drag(GdkWindowImplClass * self, void (* begin_resize_drag) (GdkWindow *window, GdkWindowEdge edge, GdkDevice *device, gint button, gint root_x, gint root_y, guint32 timestamp)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->begin_resize_drag = begin_resize_drag; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::begin_move_drag

void (* gdk_window_impl_class_priv_get_begin_move_drag(GdkWindowImplClass * self)) (GdkWindow *window, GdkDevice *device, gint button, gint root_x, gint root_y, guint32 timestamp) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->begin_move_drag;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_begin_move_drag(GdkWindowImplClass * self, void (* begin_move_drag) (GdkWindow *window, GdkDevice *device, gint button, gint root_x, gint root_y, guint32 timestamp)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->begin_move_drag = begin_move_drag; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::enable_synchronized_configure

void (* gdk_window_impl_class_priv_get_enable_synchronized_configure(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->enable_synchronized_configure;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_enable_synchronized_configure(GdkWindowImplClass * self, void (* enable_synchronized_configure) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->enable_synchronized_configure = enable_synchronized_configure; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::configure_finished

void (* gdk_window_impl_class_priv_get_configure_finished(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->configure_finished;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_configure_finished(GdkWindowImplClass * self, void (* configure_finished) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->configure_finished = configure_finished; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_opacity

void (* gdk_window_impl_class_priv_get_set_opacity(GdkWindowImplClass * self)) (GdkWindow *window, gdouble opacity) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_opacity;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_opacity(GdkWindowImplClass * self, void (* set_opacity) (GdkWindow *window, gdouble opacity)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_opacity = set_opacity; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_composited

void (* gdk_window_impl_class_priv_get_set_composited(GdkWindowImplClass * self)) (GdkWindow *window, gboolean composited) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_composited;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_composited(GdkWindowImplClass * self, void (* set_composited) (GdkWindow *window, gboolean composited)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_composited = set_composited; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::destroy_notify

void (* gdk_window_impl_class_priv_get_destroy_notify(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->destroy_notify;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_destroy_notify(GdkWindowImplClass * self, void (* destroy_notify) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->destroy_notify = destroy_notify; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_drag_protocol

GdkDragProtocol (* gdk_window_impl_class_priv_get_get_drag_protocol(GdkWindowImplClass * self)) (GdkWindow *window, GdkWindow **target) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_drag_protocol;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_drag_protocol(GdkWindowImplClass * self, GdkDragProtocol (* get_drag_protocol) (GdkWindow *window, GdkWindow **target)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_drag_protocol = get_drag_protocol; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::register_dnd

void (* gdk_window_impl_class_priv_get_register_dnd(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->register_dnd;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_register_dnd(GdkWindowImplClass * self, void (* register_dnd) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->register_dnd = register_dnd; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::drag_begin

GdkDragContext * (* gdk_window_impl_class_priv_get_drag_begin(GdkWindowImplClass * self)) (GdkWindow *window, GdkDevice *device, GList *targets, gint x_root, gint y_root) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->drag_begin;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_drag_begin(GdkWindowImplClass * self, GdkDragContext * (* drag_begin) (GdkWindow *window, GdkDevice *device, GList *targets, gint x_root, gint y_root)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->drag_begin = drag_begin; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::process_updates_recurse

void (* gdk_window_impl_class_priv_get_process_updates_recurse(GdkWindowImplClass * self)) (GdkWindow *window, cairo_region_t *region) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->process_updates_recurse;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_process_updates_recurse(GdkWindowImplClass * self, void (* process_updates_recurse) (GdkWindow *window, cairo_region_t *region)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->process_updates_recurse = process_updates_recurse; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::sync_rendering

void (* gdk_window_impl_class_priv_get_sync_rendering(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->sync_rendering;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_sync_rendering(GdkWindowImplClass * self, void (* sync_rendering) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->sync_rendering = sync_rendering; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::simulate_key

gboolean (* gdk_window_impl_class_priv_get_simulate_key(GdkWindowImplClass * self)) (GdkWindow *window, gint x, gint y, guint keyval, GdkModifierType modifiers, GdkEventType event_type) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->simulate_key;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_simulate_key(GdkWindowImplClass * self, gboolean (* simulate_key) (GdkWindow *window, gint x, gint y, guint keyval, GdkModifierType modifiers, GdkEventType event_type)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->simulate_key = simulate_key; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::simulate_button

gboolean (* gdk_window_impl_class_priv_get_simulate_button(GdkWindowImplClass * self)) (GdkWindow *window, gint x, gint y, guint button, GdkModifierType modifiers, GdkEventType event_type) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->simulate_button;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_simulate_button(GdkWindowImplClass * self, gboolean (* simulate_button) (GdkWindow *window, gint x, gint y, guint button, GdkModifierType modifiers, GdkEventType event_type)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->simulate_button = simulate_button; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_property

gboolean (* gdk_window_impl_class_priv_get_get_property(GdkWindowImplClass * self)) (GdkWindow *window, GdkAtom property, GdkAtom type, gulong offset, gulong length, gint pdelete, GdkAtom *actual_type, gint *actual_format, gint *actual_length, guchar **data) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_property;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_property(GdkWindowImplClass * self, gboolean (* get_property) (GdkWindow *window, GdkAtom property, GdkAtom type, gulong offset, gulong length, gint pdelete, GdkAtom *actual_type, gint *actual_format, gint *actual_length, guchar **data)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_property = get_property; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::change_property

void (* gdk_window_impl_class_priv_get_change_property(GdkWindowImplClass * self)) (GdkWindow *window, GdkAtom property, GdkAtom type, gint format, GdkPropMode mode, const guchar *data, gint n_elements) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->change_property;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_change_property(GdkWindowImplClass * self, void (* change_property) (GdkWindow *window, GdkAtom property, GdkAtom type, gint format, GdkPropMode mode, const guchar *data, gint n_elements)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->change_property = change_property; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::delete_property

void (* gdk_window_impl_class_priv_get_delete_property(GdkWindowImplClass * self)) (GdkWindow *window, GdkAtom property) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->delete_property;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_delete_property(GdkWindowImplClass * self, void (* delete_property) (GdkWindow *window, GdkAtom property)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->delete_property = delete_property; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_scale_factor

gint (* gdk_window_impl_class_priv_get_get_scale_factor(GdkWindowImplClass * self)) (GdkWindow *window) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_scale_factor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_scale_factor(GdkWindowImplClass * self, gint (* get_scale_factor) (GdkWindow *window)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_scale_factor = get_scale_factor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::get_unscaled_size

void (* gdk_window_impl_class_priv_get_get_unscaled_size(GdkWindowImplClass * self)) (GdkWindow *window, int *unscaled_width, int *unscaled_height) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->get_unscaled_size;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_get_unscaled_size(GdkWindowImplClass * self, void (* get_unscaled_size) (GdkWindow *window, int *unscaled_width, int *unscaled_height)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->get_unscaled_size = get_unscaled_size; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_opaque_region

void (* gdk_window_impl_class_priv_get_set_opaque_region(GdkWindowImplClass * self)) (GdkWindow *window, cairo_region_t *region) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_opaque_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_opaque_region(GdkWindowImplClass * self, void (* set_opaque_region) (GdkWindow *window, cairo_region_t *region)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_opaque_region = set_opaque_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::set_shadow_width

void (* gdk_window_impl_class_priv_get_set_shadow_width(GdkWindowImplClass * self)) (GdkWindow *window, gint left, gint right, gint top, gint bottom) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->set_shadow_width;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_set_shadow_width(GdkWindowImplClass * self, void (* set_shadow_width) (GdkWindow *window, gint left, gint right, gint top, gint bottom)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->set_shadow_width = set_shadow_width; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::show_window_menu

gboolean (* gdk_window_impl_class_priv_get_show_window_menu(GdkWindowImplClass * self)) (GdkWindow *window, GdkEvent *event) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->show_window_menu;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_show_window_menu(GdkWindowImplClass * self, gboolean (* show_window_menu) (GdkWindow *window, GdkEvent *event)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->show_window_menu = show_window_menu; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::create_gl_context

GdkGLContext * (* gdk_window_impl_class_priv_get_create_gl_context(GdkWindowImplClass * self)) (GdkWindow *window, gboolean attached, GdkGLContext *share, GError **error) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->create_gl_context;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_create_gl_context(GdkWindowImplClass * self, GdkGLContext * (* create_gl_context) (GdkWindow *window, gboolean attached, GdkGLContext *share, GError **error)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->create_gl_context = create_gl_context; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::realize_gl_context

gboolean (* gdk_window_impl_class_priv_get_realize_gl_context(GdkWindowImplClass * self)) (GdkWindow *window, GdkGLContext *context, GError **error) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->realize_gl_context;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_realize_gl_context(GdkWindowImplClass * self, gboolean (* realize_gl_context) (GdkWindow *window, GdkGLContext *context, GError **error)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->realize_gl_context = realize_gl_context; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::invalidate_for_new_frame

void (* gdk_window_impl_class_priv_get_invalidate_for_new_frame(GdkWindowImplClass * self)) (GdkWindow *window, cairo_region_t *update_area) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->invalidate_for_new_frame;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_invalidate_for_new_frame(GdkWindowImplClass * self, void (* invalidate_for_new_frame) (GdkWindow *window, cairo_region_t *update_area)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->invalidate_for_new_frame = invalidate_for_new_frame; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::create_draw_context

GdkDrawingContext * (* gdk_window_impl_class_priv_get_create_draw_context(GdkWindowImplClass * self)) (GdkWindow *window, const cairo_region_t *region) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->create_draw_context;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_create_draw_context(GdkWindowImplClass * self, GdkDrawingContext * (* create_draw_context) (GdkWindow *window, const cairo_region_t *region)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->create_draw_context = create_draw_context; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplClass::destroy_draw_context

void (* gdk_window_impl_class_priv_get_destroy_draw_context(GdkWindowImplClass * self)) (GdkWindow *window, GdkDrawingContext *context) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplClass_v3_22_0*)self)->destroy_draw_context;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_class_priv_set_destroy_draw_context(GdkWindowImplClass * self, void (* destroy_draw_context) (GdkWindow *window, GdkDrawingContext *context)) {
  switch (gdk_window_impl_class_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplClass_v3_22_0*)self)->destroy_draw_context = destroy_draw_context; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

#endif // GDK_WINDOW_IMPL_CLASS_PRIV_H
