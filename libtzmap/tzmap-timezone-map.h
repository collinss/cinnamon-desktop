/*
 * Copyright (C) 2010 Intel, Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street - Suite 500, Boston, MA 02110-1335, USA.
 *
 * Author: Thomas Wood <thomas.wood@intel.com>
 *
 */


#ifndef _TZMAP_TIMEZONE_MAP_H
#define _TZMAP_TIMEZONE_MAP_H

#include <gtk/gtk.h>
#include "tz.h"

G_BEGIN_DECLS

#define TZMAP_TYPE_TIMEZONE_MAP tzmap_timezone_map_get_type()

#define TZMAP_TIMEZONE_MAP(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj), \
  TZMAP_TYPE_TIMEZONE_MAP, TzmapTimezoneMap))

#define TZMAP_TIMEZONE_MAP_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST ((klass), \
  TZMAP_TYPE_TIMEZONE_MAP, TzmapTimezoneMapClass))

#define TZMAP_IS_TIMEZONE_MAP(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
  TZMAP_TYPE_TIMEZONE_MAP))

#define TZMAP_IS_TIMEZONE_MAP_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE ((klass), \
  TZMAP_TYPE_TIMEZONE_MAP))

#define TZMAP_TIMEZONE_MAP_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), \
  TZMAP_TYPE_TIMEZONE_MAP, TzmapTimezoneMapClass))

typedef struct _TzmapTimezoneMap TzmapTimezoneMap;
typedef struct _TzmapTimezoneMapClass TzmapTimezoneMapClass;
typedef struct _TzmapTimezoneMapPrivate TzmapTimezoneMapPrivate;

/**
 * _TzmapTimezoneMap:
 *
 * The contents of this structure is private and should only be accessed using
 * the provided API.
 */
struct _TzmapTimezoneMap
{
  GtkWidget parent;

  TzmapTimezoneMapPrivate *priv;
};

struct _TzmapTimezoneMapClass
{
  GtkWidgetClass parent_class;
};

GType tzmap_timezone_map_get_type (void) G_GNUC_CONST;

TzmapTimezoneMap *tzmap_timezone_map_new (void);

gboolean tzmap_timezone_map_set_timezone (TzmapTimezoneMap *map,
                                       const gchar   *timezone);
TzLocation * tzmap_timezone_map_get_location (TzmapTimezoneMap *map);

G_END_DECLS

#endif /* _TZMAP_TIMEZONE_MAP_H */
