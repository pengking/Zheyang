/*
 * Copyright (C) 2004 Nathan Lutchansky <lutchann@litech.org>
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
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef _INPUTS_H_
#define _INPUTS_H_

#define VIDEO_HEIGHT    1
#define VIDEO_WIDTH     2
#define VIDEO_FINCR     3
#define VIDEO_FBASE     4

void dc1394_init(void);
void v4l_init(void);
void v4l2_init(void);
void vdig_init(void);
int input_rtsp_init(void);
void video_init(void);
void audio_init(void);

#endif

