/*  Copyright 2006 P.F. Chimento
 *  This file is part of GNOME Inform 7.
 * 
 *  GNOME Inform 7 is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  GNOME Inform 7 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNOME Inform 7; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
 
#ifndef CONFIG_FILE_H
#define CONFIG_FILE_H

#include <gnome.h>

void check_config_file();
void config_file_set_string(const gchar *path, const gchar *key,
                            const gchar *value);
gchar *config_file_get_string(const gchar *path, const gchar *key);
void config_file_set_int(const gchar *path, const gchar *key, const gint value);
gint config_file_get_int(const gchar *path, const gchar *key);
void config_file_set_bool(const gchar *path, const gchar *key,
                          const gboolean value);
gboolean config_file_get_bool(const gchar *path, const gchar *key);

#endif
