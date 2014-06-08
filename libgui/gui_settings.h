/*
*  gui_settings.h
*  Source code file for G-Code generation, simulation, and visualization
*  library. This software is Copyright (C) 2006 by Justin Shumaker
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _GUI_SETTINGS_H
#define _GUI_SETTINGS_H

#include "gcode.h"

typedef struct gui_settings_s
{
  int voxel_resolution;
} gui_settings_t;


void gui_settings_init (gui_settings_t *settings);
void gui_settings_free (gui_settings_t *settings);
int gui_settings_read (gui_settings_t *settings);

#endif
