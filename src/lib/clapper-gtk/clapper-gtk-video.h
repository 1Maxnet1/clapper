/* Clapper GTK Integration Library
 * Copyright (C) 2024 Rafał Dzięgiel <rafostar.github@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#pragma once

#if !defined(__CLAPPER_GTK_INSIDE__) && !defined(CLAPPER_GTK_COMPILATION)
#error "Only <clapper-gtk/clapper-gtk.h> can be included directly."
#endif

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <clapper/clapper.h>

G_BEGIN_DECLS

#define CLAPPER_GTK_TYPE_VIDEO (clapper_gtk_video_get_type())
#define CLAPPER_GTK_VIDEO_CAST(obj) ((ClapperGtkVideo *)(obj))

G_DECLARE_FINAL_TYPE (ClapperGtkVideo, clapper_gtk_video, CLAPPER_GTK, VIDEO, GtkWidget)

GtkWidget * clapper_gtk_video_new (void);

void clapper_gtk_video_add_overlay (ClapperGtkVideo *video, GtkWidget *widget);

void clapper_gtk_video_add_fading_overlay (ClapperGtkVideo *video, GtkWidget *widget);

ClapperPlayer * clapper_gtk_video_get_player (ClapperGtkVideo *video);

void clapper_gtk_video_set_fade_delay (ClapperGtkVideo *video, guint delay);

guint clapper_gtk_video_get_fade_delay (ClapperGtkVideo *video);

void clapper_gtk_video_set_touch_fade_delay (ClapperGtkVideo *video, guint delay);

guint clapper_gtk_video_get_touch_fade_delay (ClapperGtkVideo *video);

void clapper_gtk_video_set_auto_inhibit (ClapperGtkVideo *video, gboolean inhibit);

gboolean clapper_gtk_video_get_auto_inhibit (ClapperGtkVideo *video);

gboolean clapper_gtk_video_get_inhibited (ClapperGtkVideo *video);

G_END_DECLS
