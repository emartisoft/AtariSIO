/*
   DosBootCode - various DOS boot sector data, to be included by Dos2xUtils.cpp

   Copyright (C) 2009 Matthias Reichl <hias@horus.com>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include "MyPicoDosCode.h"

static uint8_t BootSectorsDos20[] = {
  0x00, 0x03, 0x00, 0x07, 0x40, 0x15, 0x4c, 0x14, 0x07, 0x07, 0x03, 0x00,
  0x7c, 0x1a, 0x01, 0x04, 0x00, 0x7d, 0xcb, 0x07, 0xac, 0x0e, 0x07, 0xf0,
  0x36, 0xad, 0x12, 0x07, 0x85, 0x43, 0x8d, 0x04, 0x03, 0xad, 0x13, 0x07,
  0x85, 0x44, 0x8d, 0x05, 0x03, 0xad, 0x10, 0x07, 0xac, 0x0f, 0x07, 0x18,
  0xae, 0x0e, 0x07, 0x20, 0x6c, 0x07, 0x30, 0x17, 0xac, 0x11, 0x07, 0xb1,
  0x43, 0x29, 0x03, 0x48, 0xc8, 0x11, 0x43, 0xf0, 0x0e, 0xb1, 0x43, 0xa8,
  0x20, 0x57, 0x07, 0x68, 0x4c, 0x2f, 0x07, 0xa9, 0xc0, 0xd0, 0x01, 0x68,
  0x0a, 0xa8, 0x60, 0x18, 0xa5, 0x43, 0x6d, 0x11, 0x07, 0x8d, 0x04, 0x03,
  0x85, 0x43, 0xa5, 0x44, 0x69, 0x00, 0x8d, 0x05, 0x03, 0x85, 0x44, 0x60,
  0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa9, 0x52, 0xa0, 0x40, 0x90, 0x04,
  0xa9, 0x57, 0xa0, 0x80, 0x8d, 0x02, 0x03, 0x8c, 0x03, 0x03, 0xa9, 0x31,
  0xa0, 0x0f, 0x8d, 0x00, 0x03, 0x8c, 0x06, 0x03, 0xa9, 0x03, 0x8d, 0xff,
  0x12, 0xa9, 0x00, 0xa0, 0x80, 0xca, 0xf0, 0x04, 0xa9, 0x01, 0xa0, 0x00,
  0x8d, 0x09, 0x03, 0x8c, 0x08, 0x03, 0x20, 0x59, 0xe4, 0x10, 0x1d, 0xce,
  0xff, 0x12, 0x30, 0x18, 0xa2, 0x40, 0xa9, 0x52, 0xcd, 0x02, 0x03, 0xf0,
  0x09, 0xa9, 0x21, 0xcd, 0x02, 0x03, 0xf0, 0x02, 0xa2, 0x80, 0x8e, 0x03,
  0x03, 0x4c, 0xa2, 0x07, 0xae, 0x01, 0x13, 0xad, 0x03, 0x03, 0x60, 0xaa,
  0x08, 0x14, 0x0b, 0xbe, 0x0a, 0xcb, 0x09, 0x00, 0x0b, 0xa6, 0x0b, 0x07,
  0x85, 0x44, 0xad, 0x0a, 0x07, 0x8d, 0xd6, 0x12, 0xad, 0x0c, 0x07, 0x85,
  0x43, 0xad, 0x0d, 0x07, 0x85, 0x44, 0xad, 0x0a, 0x07, 0x8d, 0x0c, 0x13,
  0xa2, 0x07, 0x8e, 0x0d, 0x13, 0x0e, 0x0c, 0x13, 0xb0, 0x0d, 0xa9, 0x00,
  0x9d, 0x11, 0x13, 0x9d, 0x29, 0x13, 0x9d, 0x31, 0x13, 0xf0, 0x36, 0xa0,
  0x05, 0xa9, 0x00, 0x91, 0x43, 0xe8, 0x8e, 0x01, 0x03, 0xa9, 0x53, 0x8d,
  0x02, 0x03, 0x20, 0x53, 0xe4, 0xa0, 0x02, 0xad, 0xea, 0x02, 0x29, 0x20,
  0xd0, 0x01, 0x88, 0x98, 0xae, 0x0d, 0x13, 0x9d, 0x11, 0x13, 0xa5, 0x43,
  0x9d, 0x29, 0x13, 0xa5, 0x44, 0x9d, 0x31, 0x13, 0x20, 0x70, 0x08, 0x88,
  0xf0, 0x03, 0x20, 0x70, 0x08, 0xca, 0x10, 0xb2, 0xac, 0x09, 0x07, 0xa2,
  0x00, 0xa9, 0x00, 0x88, 0x10, 0x01, 0x98, 0x9d, 0x19, 0x13, 0x98, 0x30,
  0x0d, 0xa5, 0x43, 0x9d, 0x39, 0x13, 0xa5, 0x44, 0x9d, 0x49, 0x13, 0x20,
  0x70, 0x08, 0xe8, 0xe0, 0x10, 0xd0, 0xe2, 0xa5, 0x43, 0x8d, 0xe7, 0x02,
  0xa5, 0x44, 0x8d, 0xe8, 0x02, 0x4c, 0x7e, 0x08, 0x18, 0xa5, 0x43, 0x69,
  0x80, 0x85, 0x43, 0xa5, 0x44, 0x69, 0x00, 0x85, 0x44, 0x60, 0xa0, 0x7f
};

static uint8_t BootSectorsDos25[] = {
  0x00, 0x03, 0x00, 0x07, 0x40, 0x15, 0x4c, 0x14, 0x07, 0x03, 0x07, 0x00,
  0xcc, 0x19, 0x01, 0x04, 0x00, 0x7d, 0xcb, 0x07, 0xac, 0x0e, 0x07, 0xf0,
  0x35, 0x20, 0x5f, 0x07, 0xad, 0x10, 0x07, 0xac, 0x0f, 0x07, 0xa6, 0x24,
  0x8e, 0x04, 0x03, 0xa6, 0x25, 0x8e, 0x05, 0x03, 0x18, 0x20, 0x6c, 0x07,
  0x30, 0x1c, 0xac, 0x11, 0x07, 0xb1, 0x24, 0x29, 0x03, 0xaa, 0xc8, 0x11,
  0x24, 0xf0, 0x11, 0xb1, 0x24, 0x48, 0xc8, 0xb1, 0x24, 0x20, 0x55, 0x07,
  0x68, 0xa8, 0x8a, 0x4c, 0x22, 0x07, 0xa9, 0xc0, 0x0a, 0xa8, 0x60, 0xa9,
  0x80, 0x18, 0x65, 0x24, 0x85, 0x24, 0x90, 0x02, 0xe6, 0x25, 0x60, 0xad,
  0x12, 0x07, 0x85, 0x24, 0xad, 0x13, 0x07, 0x85, 0x25, 0x60, 0x00, 0x00,
  0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa9, 0x52, 0xa0, 0x40, 0x90, 0x04,
  0xa9, 0x50, 0xa0, 0x80, 0x08, 0xa6, 0x21, 0xe0, 0x08, 0xd0, 0x07, 0x28,
  0x20, 0x81, 0x14, 0x4c, 0xb9, 0x07, 0x28, 0x8d, 0x02, 0x03, 0xa9, 0x0f,
  0x8d, 0x06, 0x03, 0x8c, 0x17, 0x13, 0xa9, 0x31, 0x8d, 0x00, 0x03, 0xa9,
  0x03, 0x8d, 0x09, 0x13, 0xa9, 0x80, 0x8d, 0x08, 0x03, 0x0a, 0x8d, 0x09,
  0x03, 0xad, 0x17, 0x13, 0x8d, 0x03, 0x03, 0x20, 0x59, 0xe4, 0x10, 0x05,
  0xce, 0x09, 0x13, 0x10, 0xf0, 0xa6, 0x49, 0x98, 0x60, 0x20, 0xad, 0x11,
  0x20, 0x64, 0x0f, 0x20, 0x04, 0x0d, 0x4c, 0xc7, 0x12, 0x00, 0x00, 0x64,
  0x08, 0x8f, 0x0a, 0x4d, 0x0a, 0x8f, 0x09, 0xbc, 0x07, 0x2a, 0x0b, 0x80,
  0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0xff, 0xad, 0x0c, 0x07, 0x85,
  0x24, 0xad, 0x0d, 0x07, 0x85, 0x25, 0xad, 0x0a, 0x07, 0x85, 0x43, 0xa2,
  0x07, 0xa9, 0x00, 0x06, 0x43, 0x90, 0x15, 0xa0, 0x05, 0x91, 0x24, 0xa5,
  0x24, 0x9d, 0x29, 0x13, 0xa5, 0x25, 0x9d, 0x31, 0x13, 0xa9, 0x90, 0x20,
  0x55, 0x07, 0xa9, 0x64, 0x9d, 0x19, 0x13, 0xca, 0x10, 0xdf, 0xa5, 0x24,
  0x8d, 0x39, 0x13, 0xa5, 0x25, 0x8d, 0x3a, 0x13, 0xac, 0x09, 0x07, 0xa2,
  0x00, 0x88, 0x98, 0x9d, 0x21, 0x13, 0x30, 0x03, 0x20, 0x53, 0x07, 0xe8,
  0xe0, 0x08, 0xd0, 0xf1, 0xa5, 0x24, 0x8d, 0xe7, 0x02, 0xa5, 0x25, 0x8d,
  0xe8, 0x02, 0xa9, 0x00, 0xa8, 0x99, 0x81, 0x13, 0xc8, 0x10, 0xfa, 0xa8,
  0xb9, 0x1a, 0x03, 0xf0, 0x0c, 0xc9, 0x44, 0xf0, 0x08, 0xc8, 0xc8, 0xc8,
  0xc0, 0x1e, 0xd0, 0xf0, 0x00, 0xa9, 0x44, 0x99, 0x1a, 0x03, 0xa9, 0xcb,
  0x99, 0x1b, 0x03, 0xa9, 0x07, 0x99, 0x1c, 0x03, 0x60, 0x20, 0xad, 0x11,
  0x20, 0x7d, 0x0e, 0xbd, 0x4a, 0x03, 0x9d, 0x82, 0x13, 0x29, 0x02, 0xf0,
  0x03, 0x4c, 0x72, 0x0d, 0x20, 0xec, 0x0e, 0x08, 0xbd, 0x82, 0x13, 0xc9
};

static uint8_t BootSectorsMyDos4533[384] = {
  0x4d, 0x03, 0x00, 0x07, 0xe0, 0x07, 0x4c, 0x14, 0x07, 0x04, 0x09, 0x01,
  0xf3, 0x1b, 0x01, 0x04, 0x00, 0x7d, 0x0a, 0x0b, 0xac, 0x12, 0x07, 0xad,
  0x13, 0x07, 0x20, 0x58, 0x07, 0xad, 0x10, 0x07, 0xac, 0x0f, 0x07, 0x18,
  0xae, 0x0e, 0x07, 0xf0, 0x1d, 0x20, 0x63, 0x07, 0x30, 0x18, 0xac, 0x11,
  0x07, 0xb1, 0x43, 0x29, 0xff, 0x48, 0xc8, 0x11, 0x43, 0xf0, 0x0e, 0xb1,
  0x43, 0x48, 0x20, 0x4d, 0x07, 0x68, 0xa8, 0x68, 0x90, 0xdd, 0xa9, 0xc0,
  0xa0, 0x68, 0x0a, 0xa8, 0x60, 0xad, 0x11, 0x07, 0x18, 0x65, 0x43, 0xa8,
  0xa5, 0x44, 0x69, 0x00, 0x84, 0x43, 0x85, 0x44, 0x8c, 0x04, 0x03, 0x8d,
  0x05, 0x03, 0x60, 0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa0, 0x03, 0xa9,
  0x52, 0x90, 0x02, 0xa9, 0x50, 0x84, 0x48, 0x8d, 0x02, 0x03, 0x18, 0x8c,
  0x06, 0x03, 0xa9, 0x80, 0xca, 0xf0, 0x0d, 0xae, 0x0b, 0x03, 0xd0, 0x07,
  0xae, 0x0a, 0x03, 0xe0, 0x04, 0x90, 0x01, 0x0a, 0x8d, 0x08, 0x03, 0x2a,
  0x8d, 0x09, 0x03, 0xa0, 0x31, 0x8c, 0x00, 0x03, 0xc6, 0x48, 0x30, 0x16,
  0xae, 0x02, 0x03, 0xe8, 0x8a, 0xa2, 0x40, 0x29, 0x06, 0xd0, 0x02, 0xa2,
  0x80, 0x8e, 0x03, 0x03, 0x20, 0x59, 0xe4, 0x88, 0x30, 0xe6, 0xa6, 0x2e,
  0xc8, 0x98, 0x60, 0x10, 0x69, 0x01, 0x00, 0x80, 0xf6, 0x00, 0x00, 0x00,
  0x23, 0x28, 0x50, 0x4d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x52, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0x5c, 0x0c, 0x5c, 0x0e,
  0x62, 0x0d, 0xc6, 0x0d, 0x50, 0x0e, 0x67, 0x10, 0xa9, 0x69, 0x8d, 0xb8,
  0x07, 0xa9, 0x01, 0x8d, 0xb9, 0x07, 0xa2, 0x08, 0x8e, 0x01, 0x03, 0x20,
  0xb6, 0x0b, 0xbd, 0xcb, 0x07, 0x30, 0x12, 0x20, 0x9a, 0x0b, 0xf0, 0x0d,
  0xbd, 0xcb, 0x07, 0xc9, 0x40, 0xb0, 0x06, 0xbc, 0xc3, 0x07, 0x20, 0x24,
  0x0b, 0xca, 0xd0, 0xe0, 0xa0, 0xae, 0x8a, 0x99, 0x55, 0x08, 0x88, 0xd0,
  0xfa, 0xee, 0x59, 0x08, 0xad, 0x0c, 0x07, 0x8d, 0xe7, 0x02, 0xac, 0x0d,
  0x07, 0xa2, 0x0f, 0xec, 0x09, 0x07, 0x90, 0x05, 0xde, 0xdd, 0x08, 0x30,
  0x05, 0x98, 0x9d, 0xed, 0x08, 0xc8, 0xca, 0x10, 0xee, 0x8c, 0xe8, 0x02,
  0xe8, 0xe8, 0xe8, 0xbd, 0x18, 0x03, 0xf0, 0x04, 0xc9, 0x44, 0xd0, 0xf4,
  0xa9, 0x44, 0x9d, 0x18, 0x03, 0xa9, 0xd4, 0x9d, 0x19, 0x03, 0xa9, 0x07,
  0x9d, 0x1a, 0x03, 0x4c, 0x84, 0x1a, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x80, 0x7d, 0x00, 0x04, 0x04,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x01, 0x00, 0x00, 0x1b, 0x00, 0x00
};

static uint8_t BootSectorsMyDos4534[384] = {
  0x4d, 0x03, 0x00, 0x07, 0xe0, 0x07, 0x4c, 0x14, 0x07, 0x03, 0x09, 0x01,
  0xe8, 0x1b, 0x02, 0x17, 0x00, 0xfd, 0x0a, 0x0b, 0xac, 0x12, 0x07, 0xad,
  0x13, 0x07, 0x20, 0x58, 0x07, 0xad, 0x10, 0x07, 0xac, 0x0f, 0x07, 0x18,
  0xae, 0x0e, 0x07, 0xf0, 0x1d, 0x20, 0x63, 0x07, 0x30, 0x18, 0xac, 0x11,
  0x07, 0xb1, 0x43, 0x29, 0x03, 0x48, 0xc8, 0x11, 0x43, 0xf0, 0x0e, 0xb1,
  0x43, 0x48, 0x20, 0x4d, 0x07, 0x68, 0xa8, 0x68, 0x90, 0xdd, 0xa9, 0xc0,
  0xa0, 0x68, 0x0a, 0xa8, 0x60, 0xad, 0x11, 0x07, 0x18, 0x65, 0x43, 0xa8,
  0xa5, 0x44, 0x69, 0x00, 0x84, 0x43, 0x85, 0x44, 0x8c, 0x04, 0x03, 0x8d,
  0x05, 0x03, 0x60, 0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa0, 0x03, 0xa9,
  0x52, 0x90, 0x02, 0xa9, 0x50, 0x84, 0x48, 0x8d, 0x02, 0x03, 0x18, 0x8c,
  0x06, 0x03, 0xa9, 0x80, 0xca, 0xf0, 0x0d, 0xae, 0x0b, 0x03, 0xd0, 0x07,
  0xae, 0x0a, 0x03, 0xe0, 0x04, 0x90, 0x01, 0x0a, 0x8d, 0x08, 0x03, 0x2a,
  0x8d, 0x09, 0x03, 0xa0, 0x31, 0x8c, 0x00, 0x03, 0xc6, 0x48, 0x30, 0x16,
  0xae, 0x02, 0x03, 0xe8, 0x8a, 0xa2, 0x40, 0x29, 0x06, 0xd0, 0x02, 0xa2,
  0x80, 0x8e, 0x03, 0x03, 0x20, 0x59, 0xe4, 0x88, 0x30, 0xe6, 0xa6, 0x2e,
  0xc8, 0x98, 0x60, 0x10, 0x69, 0x01, 0x01, 0x80, 0xf6, 0x00, 0x00, 0x00,
  0x23, 0x28, 0x50, 0x4d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x52, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0x5c, 0x0c, 0x5c, 0x0e,
  0x62, 0x0d, 0xc6, 0x0d, 0x50, 0x0e, 0x67, 0x10, 0xa9, 0x69, 0x8d, 0xb8,
  0x07, 0xa9, 0x01, 0x8d, 0xb9, 0x07, 0xa2, 0x08, 0x8e, 0x01, 0x03, 0x20,
  0xb6, 0x0b, 0xbd, 0xcb, 0x07, 0x30, 0x12, 0x20, 0x9a, 0x0b, 0xf0, 0x0d,
  0xbd, 0xcb, 0x07, 0xc9, 0x40, 0xb0, 0x06, 0xbc, 0xc3, 0x07, 0x20, 0x24,
  0x0b, 0xca, 0xd0, 0xe0, 0xa0, 0xae, 0x8a, 0x99, 0x55, 0x08, 0x88, 0xd0,
  0xfa, 0xee, 0x59, 0x08, 0xad, 0x0c, 0x07, 0x8d, 0xe7, 0x02, 0xac, 0x0d,
  0x07, 0xa2, 0x0f, 0xec, 0x09, 0x07, 0x90, 0x05, 0xde, 0xdd, 0x08, 0x30,
  0x05, 0x98, 0x9d, 0xed, 0x08, 0xc8, 0xca, 0x10, 0xee, 0x8c, 0xe8, 0x02,
  0xe8, 0xe8, 0xe8, 0xbd, 0x18, 0x03, 0xf0, 0x04, 0xc9, 0x44, 0xd0, 0xf4,
  0xa9, 0x44, 0x9d, 0x18, 0x03, 0xa9, 0xd4, 0x9d, 0x19, 0x03, 0xa9, 0x07,
  0x9d, 0x1a, 0x03, 0x4c, 0x79, 0x1a, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x48, 0x80, 0xfd, 0x00, 0x03, 0x17,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00
};

static uint8_t BootSectorsMyDos455Beta4[384] = {
  0x4d, 0x03, 0x00, 0x07, 0xe0, 0x07, 0x4c, 0x14, 0x07, 0x03, 0x09, 0x01,
  0x9f, 0x1c, 0x01, 0x04, 0x00, 0x7d, 0x15, 0x0b, 0xac, 0x12, 0x07, 0xad,
  0x13, 0x07, 0x20, 0x58, 0x07, 0xad, 0x10, 0x07, 0xac, 0x0f, 0x07, 0x18,
  0xae, 0x0e, 0x07, 0xf0, 0x1d, 0x20, 0x63, 0x07, 0x30, 0x18, 0xac, 0x11,
  0x07, 0xb1, 0x43, 0x29, 0x03, 0x48, 0xc8, 0x11, 0x43, 0xf0, 0x0e, 0xb1,
  0x43, 0x48, 0x20, 0x4d, 0x07, 0x68, 0xa8, 0x68, 0x90, 0xdd, 0xa9, 0xc0,
  0xa0, 0x68, 0x0a, 0xa8, 0x60, 0xad, 0x11, 0x07, 0x18, 0x65, 0x43, 0xa8,
  0xa5, 0x44, 0x69, 0x00, 0x84, 0x43, 0x85, 0x44, 0x8c, 0x04, 0x03, 0x8d,
  0x05, 0x03, 0x60, 0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa0, 0x03, 0xa9,
  0x52, 0x90, 0x03, 0xad, 0x79, 0x07, 0x84, 0x48, 0x8d, 0x02, 0x03, 0x18,
  0xa9, 0x50, 0x8c, 0x06, 0x03, 0xa9, 0x80, 0xca, 0xf0, 0x0d, 0xae, 0x0b,
  0x03, 0xd0, 0x07, 0xae, 0x0a, 0x03, 0xe0, 0x04, 0x90, 0x01, 0x0a, 0x8d,
  0x08, 0x03, 0x2a, 0x8d, 0x09, 0x03, 0xa0, 0x31, 0x8c, 0x00, 0x03, 0xc6,
  0x48, 0x30, 0x16, 0xae, 0x02, 0x03, 0xe8, 0x8a, 0xa2, 0x40, 0x29, 0x06,
  0xd0, 0x02, 0xa2, 0x80, 0x8e, 0x03, 0x03, 0x20, 0x59, 0xe4, 0x88, 0x30,
  0xe6, 0xa6, 0x2e, 0xc8, 0x98, 0x60, 0x10, 0x69, 0x01, 0x00, 0x80, 0xf6,
  0x23, 0x28, 0x50, 0x4d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x52, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0x5c, 0x0c, 0x48, 0x0e,
  0x62, 0x0d, 0xb7, 0x0d, 0x3c, 0x0e, 0xac, 0x10, 0xa9, 0x69, 0x8d, 0xbb,
  0x07, 0xa9, 0x01, 0x8d, 0xbc, 0x07, 0xa2, 0x08, 0x8e, 0x01, 0x03, 0x20,
  0xb6, 0x0b, 0xbd, 0xcb, 0x07, 0x30, 0x1d, 0x20, 0x9a, 0x0b, 0xf0, 0x18,
  0xa0, 0x09, 0xb9, 0x25, 0x0b, 0x99, 0x02, 0x03, 0x88, 0x10, 0xf7, 0xbd,
  0xcb, 0x07, 0xc9, 0x40, 0xb0, 0x06, 0xbc, 0xc3, 0x07, 0x20, 0x2f, 0x0b,
  0xca, 0xd0, 0xd5, 0xa0, 0xae, 0x8a, 0x99, 0x60, 0x08, 0x88, 0xd0, 0xfa,
  0xee, 0x64, 0x08, 0xad, 0x0c, 0x07, 0x8d, 0xe7, 0x02, 0xac, 0x0d, 0x07,
  0xa2, 0x0f, 0xec, 0x09, 0x07, 0x90, 0x05, 0xde, 0xe8, 0x08, 0x30, 0x05,
  0x98, 0x9d, 0xf8, 0x08, 0xc8, 0xca, 0x10, 0xee, 0x8c, 0xe8, 0x02, 0xe8,
  0xe8, 0xe8, 0xbd, 0x18, 0x03, 0xf0, 0x04, 0xc9, 0x44, 0xd0, 0xf4, 0xa9,
  0x44, 0x9d, 0x18, 0x03, 0xa9, 0xd4, 0x9d, 0x19, 0x03, 0xa9, 0x07, 0x9d,
  0x1a, 0x03, 0x4c, 0xe4, 0x1a, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x80, 0x7d, 0x00, 0x03, 0x04, 0x00
};

static uint8_t BootSectorsTurboDos21[] = {
  0x01, 0x03, 0x00, 0x07, 0x40, 0x15, 0x4c, 0x16, 0x07, 0x02, 0x03, 0xe0,
  0xa0, 0xb0, 0x00, 0x7d, 0x13, 0x00, 0x2f, 0x18, 0x6a, 0x18, 0xa9, 0x01,
  0xf0, 0x35, 0x20, 0x9f, 0x07, 0x20, 0xce, 0x07, 0xa9, 0x00, 0xa0, 0x04,
  0xa6, 0x24, 0x8e, 0x04, 0x03, 0xa6, 0x25, 0x8e, 0x05, 0x03, 0x18, 0x20,
  0x6c, 0x07, 0x30, 0x1b, 0xa4, 0x3f, 0xb1, 0x24, 0x29, 0x03, 0xaa, 0xc8,
  0x11, 0x24, 0xf0, 0x11, 0xb1, 0x24, 0x48, 0xc8, 0xb1, 0x24, 0x20, 0x53,
  0x07, 0x68, 0xa8, 0x8a, 0x4c, 0x24, 0x07, 0xa9, 0xc0, 0x0a, 0x60, 0x18,
  0x65, 0x24, 0x85, 0x24, 0x90, 0x02, 0xe6, 0x25, 0x60, 0x8d, 0x09, 0x03,
  0x68, 0x8d, 0x08, 0x03, 0x86, 0x3f, 0x8c, 0x2f, 0x0a, 0xe8, 0x60, 0x00,
  0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa5, 0x21, 0x49, 0x08, 0xf0, 0x20,
  0xa9, 0x50, 0xa0, 0x80, 0xb0, 0x04, 0xa9, 0x52, 0xa0, 0x40, 0x8d, 0x02,
  0x03, 0xa9, 0x07, 0x8d, 0x06, 0x03, 0x8c, 0x03, 0x03, 0xa9, 0x31, 0x8d,
  0x00, 0x03, 0x20, 0x59, 0xe4, 0x4c, 0x9b, 0x07, 0x20, 0x81, 0x14, 0xa6,
  0x49, 0x98, 0x60, 0xa9, 0x00, 0xa6, 0x21, 0xe0, 0x08, 0xf0, 0x0b, 0xa9,
  0x53, 0x8d, 0x02, 0x03, 0x20, 0x53, 0xe4, 0xad, 0xea, 0x02, 0x8d, 0xea,
  0x02, 0x29, 0x20, 0xf0, 0x0b, 0xa9, 0x00, 0x48, 0xa9, 0x01, 0xa0, 0x24,
  0xa2, 0xfd, 0xd0, 0x99, 0xa9, 0x80, 0x48, 0x0a, 0xa0, 0x30, 0xa2, 0x7d,
  0xd0, 0x8f, 0xa9, 0x80, 0x85, 0x24, 0xa9, 0x08, 0x85, 0x25, 0x60, 0x80,
  0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0xff, 0xad, 0x12, 0x07, 0x85,
  0x24, 0xad, 0x13, 0x07, 0x85, 0x25, 0xad, 0x0a, 0x07, 0x85, 0x43, 0xa2,
  0x07, 0xa9, 0x00, 0x06, 0x43, 0x90, 0x12, 0xa0, 0x05, 0x91, 0x24, 0xa5,
  0x24, 0x9d, 0x9a, 0x10, 0xa5, 0x25, 0x9d, 0x65, 0x16, 0xe6, 0x25, 0xa9,
  0x64, 0x9d, 0x55, 0x16, 0xca, 0x10, 0xe2, 0xa5, 0x24, 0x8d, 0xa2, 0x15,
  0xa5, 0x25, 0x8d, 0xa3, 0x15, 0xac, 0x09, 0x07, 0xa2, 0x00, 0x88, 0x98,
  0x9d, 0x5d, 0x16, 0x30, 0x02, 0xe6, 0x25, 0xe8, 0xe0, 0x08, 0xd0, 0xf2,
  0xa5, 0x24, 0x8d, 0xe7, 0x02, 0xa5, 0x25, 0x8d, 0xe8, 0x02, 0xa9, 0x00,
  0xa8, 0x99, 0x83, 0x16, 0xc8, 0x10, 0xfa, 0xa8, 0xb9, 0x1a, 0x03, 0xf0,
  0x09, 0xc9, 0x44, 0xf0, 0x05, 0xc8, 0xc8, 0xc8, 0xd0, 0xf2, 0xa9, 0x44,
  0x99, 0x1a, 0x03, 0xa9, 0x6d, 0x99, 0x1b, 0x03, 0xa9, 0x14, 0x99, 0x1c,
  0x03, 0x4c, 0x70, 0x0b, 0xd7, 0x00, 0x02, 0x20, 0xbe, 0x11, 0x20, 0x25,
  0x14, 0x20, 0x7f, 0x0e, 0xbd, 0x4a, 0x03, 0x9d, 0x84, 0x16, 0x29, 0x02,
  0xf0, 0x03, 0x4c, 0x7a, 0x0d, 0x20, 0xf6, 0x0e, 0x08, 0xbd, 0x84, 0x16
};

static uint8_t BootSectorsTurboDos21HS[] = {
  0x01, 0x03, 0x00, 0x07, 0x40, 0x15, 0x4c, 0x16, 0x07, 0x02, 0x83, 0xe0,
  0xe0, 0x00, 0x00, 0x31, 0x18, 0x00, 0x7b, 0x1a, 0x6a, 0x18, 0xa9, 0x01,
  0xf0, 0x35, 0x20, 0x9f, 0x07, 0x20, 0xce, 0x07, 0xa9, 0x00, 0xa0, 0x04,
  0xa6, 0x24, 0x8e, 0x04, 0x03, 0xa6, 0x25, 0x8e, 0x05, 0x03, 0x18, 0x20,
  0x6c, 0x07, 0x30, 0x1b, 0xa4, 0x3f, 0xb1, 0x24, 0x29, 0x03, 0xaa, 0xc8,
  0x11, 0x24, 0xf0, 0x11, 0xb1, 0x24, 0x48, 0xc8, 0xb1, 0x24, 0x20, 0xe3,
  0x07, 0x68, 0xa8, 0x8a, 0x4c, 0xf2, 0x07, 0xa9, 0xc0, 0x0a, 0x60, 0xa9,
  0x80, 0x48, 0x0a, 0xa0, 0x30, 0xa2, 0x7d, 0x8d, 0x09, 0x03, 0x68, 0x8d,
  0x08, 0x03, 0x86, 0x3f, 0x8c, 0x3e, 0x0a, 0xe8, 0x60, 0x02, 0x00, 0x00,
  0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa5, 0x21, 0x49, 0x08, 0xf0, 0x20,
  0xa9, 0x50, 0xa0, 0x80, 0xb0, 0x04, 0xa9, 0x52, 0xa0, 0x40, 0x8d, 0x02,
  0x03, 0xa9, 0x07, 0x8d, 0x06, 0x03, 0x8c, 0x03, 0x03, 0xa9, 0x31, 0x8d,
  0x00, 0x03, 0x20, 0x12, 0x08, 0x4c, 0x9b, 0x07, 0x20, 0x81, 0x14, 0xa6,
  0x49, 0x98, 0x60, 0xa9, 0x00, 0xa2, 0x04, 0x9d, 0xed, 0x07, 0xca, 0x10,
  0xfa, 0xa9, 0x00, 0xa6, 0x21, 0xe0, 0x08, 0xf0, 0x0b, 0xa9, 0x53, 0x8d,
  0x02, 0x03, 0x20, 0x53, 0xe4, 0xad, 0xea, 0x02, 0x8d, 0xea, 0x02, 0x29,
  0x20, 0xf0, 0x90, 0xa9, 0x00, 0x48, 0xa9, 0x01, 0xa0, 0x24, 0xa2, 0xfd,
  0xd0, 0x8d, 0xa9, 0x80, 0x85, 0x24, 0xa9, 0x08, 0x85, 0x25, 0x60, 0x80,
  0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0xff, 0x4c, 0x47, 0x16, 0x18,
  0x65, 0x24, 0x85, 0x24, 0x90, 0x02, 0xe6, 0x25, 0x60, 0x18, 0x08, 0x08,
  0x00, 0x00, 0xa6, 0x25, 0xe0, 0x0a, 0x90, 0x03, 0x8e, 0xed, 0x07, 0x4c,
  0x24, 0x07, 0x8c, 0x02, 0x03, 0x8e, 0x03, 0x03, 0xa2, 0x07, 0xbd, 0xea,
  0x09, 0x9d, 0x04, 0x03, 0xca, 0x10, 0xf7, 0x4c, 0x59, 0xe4, 0xad, 0xed,
  0x07, 0xf0, 0xf8, 0xac, 0x01, 0x03, 0xb9, 0xed, 0x07, 0x30, 0xf0, 0xd0,
  0x2d, 0xa2, 0x0c, 0xbd, 0xff, 0x02, 0x48, 0xca, 0xd0, 0xf9, 0xa0, 0x48,
  0x20, 0xfe, 0x07, 0xa0, 0x3f, 0xa2, 0x40, 0x20, 0xfe, 0x07, 0x98, 0x30,
  0x02, 0xa9, 0x08, 0xac, 0x01, 0x03, 0x99, 0xed, 0x07, 0xa2, 0x00, 0x68,
  0x9d, 0x00, 0x03, 0xe8, 0xe0, 0x0c, 0xd0, 0xf7, 0xf0, 0xc4, 0x98, 0x09,
  0x30, 0x8d, 0x3a, 0x02, 0xad, 0x0a, 0x03, 0x8d, 0x3c, 0x02, 0xad, 0x0b,
  0x03, 0x8d, 0x3d, 0x02, 0xad, 0x02, 0x03, 0x8d, 0x3b, 0x02, 0xb9, 0xed,
  0x07, 0x8d, 0x04, 0xd2, 0xa2, 0x00, 0x8e, 0x06, 0xd2, 0xe8, 0x86, 0x37,
  0xba, 0x86, 0x39, 0x78, 0xa9, 0x0d, 0x85, 0x36, 0xa9, 0x00, 0x85, 0x30
};

static uint8_t BootSectorsXDos243F[] = {
  0x58, 0x03, 0x00, 0x07, 0xe0, 0x07, 0x38, 0xb0, 0x17, 0x02, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
  0x08, 0x09, 0x10, 0x02, 0xe3, 0xe3, 0xe3, 0xe3, 0xa9, 0x7d, 0x85, 0x45,
  0xad, 0x11, 0x07, 0x20, 0x53, 0x07, 0xa0, 0xea, 0xa9, 0x09, 0x20, 0xff,
  0x07, 0xa0, 0x04, 0xa2, 0x00, 0x8a, 0x18, 0x20, 0x6c, 0x07, 0x38, 0x30,
  0x2e, 0xa5, 0x45, 0x20, 0xf7, 0x07, 0xa0, 0x00, 0xb1, 0x47, 0x29, 0x03,
  0xaa, 0xc8, 0xb1, 0x47, 0xa8, 0xd0, 0xe6, 0x8a, 0xd0, 0xe3, 0x60, 0x29,
  0x3f, 0xa0, 0x80, 0xae, 0xec, 0x02, 0xe0, 0xfe, 0xf0, 0x06, 0xe0, 0xd9,
  0xd0, 0x07, 0xa0, 0xa0, 0xac, 0x00, 0x07, 0x09, 0x40, 0x85, 0x21, 0x60,
  0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa2, 0x52, 0xa9, 0x05, 0x90, 0x02,
  0xa2, 0x50, 0xa0, 0x03, 0x84, 0x23, 0x8d, 0x06, 0x03, 0x8e, 0x02, 0x03,
  0x08, 0xa9, 0x40, 0x90, 0x01, 0x0a, 0x8d, 0x03, 0x03, 0xa9, 0x80, 0x24,
  0x45, 0x20, 0xe6, 0x07, 0x28, 0x98, 0x10, 0x04, 0xc6, 0x23, 0x10, 0xe8,
  0x60, 0xa0, 0x90, 0x0a, 0x10, 0x03, 0x8c, 0x1c, 0x02, 0x29, 0x20, 0xd0,
  0x05, 0x2c, 0x5d, 0x0b, 0x70, 0x03, 0x4c, 0x59, 0xe4, 0xae, 0x01, 0x03,
  0xbc, 0x50, 0x09, 0xd0, 0x1d, 0xa2, 0x3f, 0x20, 0xff, 0x09, 0x10, 0x0f,
  0xa9, 0x7f, 0x20, 0xcf, 0x07, 0x10, 0xd5, 0x98, 0x20, 0xcf, 0x07, 0x10,
  0xcf, 0xa9, 0x28, 0xae, 0x01, 0x03, 0x9d, 0x50, 0x09, 0xa8, 0xad, 0x02,
  0x03, 0xc0, 0x7f, 0x4c, 0xea, 0x09, 0xea, 0xea, 0x4c, 0x45, 0x15, 0x4c,
  0xd8, 0x1c, 0x10, 0x01, 0x0a, 0x8d, 0x08, 0x03, 0x2a, 0x8d, 0x09, 0x03,
  0xa5, 0x21, 0x30, 0xef, 0x4c, 0x9d, 0x07, 0x18, 0x65, 0x47, 0xa8, 0xa5,
  0x48, 0x69, 0x00, 0x84, 0x47, 0x8c, 0x04, 0x03, 0x85, 0x48, 0x8d, 0x05,
  0x03, 0x60, 0x45, 0x52, 0x52, 0x4f, 0x52, 0x20, 0x31, 0x30, 0x30, 0xfd,
  0x9b, 0x44, 0x31, 0x3a, 0x41, 0x55, 0x54, 0x4f, 0x52, 0x55, 0x4e, 0x2e,
  0x53, 0x59, 0x53, 0x4f, 0x4b, 0x2c, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65,
  0x9b, 0x54, 0x61, 0x72, 0x67, 0x65, 0x74, 0x9b, 0xa0, 0xd8, 0xc4, 0xcf,
  0xd3, 0xa0, 0xb2, 0xae, 0xb4, 0xb3, 0xc6, 0xa0, 0x20, 0x28, 0x63, 0x29,
  0x27, 0x30, 0x39, 0x20, 0x53, 0x2e, 0x44, 0x6f, 0x72, 0x6e, 0x64, 0x6f,
  0x72, 0x66, 0x9b, 0x1d, 0x20, 0x42, 0x75, 0x66, 0x20, 0x44, 0x23, 0x20,
  0x46, 0x44, 0x20, 0x3c, 0x43, 0x61, 0x72, 0x3e, 0x20, 0x3c, 0x52, 0x75,
  0x6e, 0x3e, 0x20, 0x43, 0x6f, 0x6c, 0x9b, 0x31, 0x24, 0x4c, 0xbc, 0x1b,
  0x4c, 0x27, 0x18, 0x4c, 0xc1, 0x17, 0x4c, 0x11, 0x1a, 0x44, 0x32, 0x3b
};

static uint8_t BootSectorsXDos243N[] = {
  0x58, 0x03, 0x00, 0x07, 0xe0, 0x07, 0x38, 0xb0, 0x17, 0x02, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
  0x08, 0x09, 0x10, 0x02, 0xe3, 0xe3, 0xe3, 0xe3, 0xa9, 0x7d, 0x85, 0x45,
  0xad, 0x11, 0x07, 0x20, 0x53, 0x07, 0xa0, 0xe0, 0xa9, 0x09, 0x20, 0xff,
  0x07, 0xa0, 0x04, 0xa2, 0x00, 0x8a, 0x18, 0x20, 0x6c, 0x07, 0x38, 0x30,
  0x2e, 0xa5, 0x45, 0x20, 0xf7, 0x07, 0xa0, 0x00, 0xb1, 0x47, 0x29, 0x03,
  0xaa, 0xc8, 0xb1, 0x47, 0xa8, 0xd0, 0xe6, 0x8a, 0xd0, 0xe3, 0x60, 0x29,
  0x3f, 0xa0, 0x80, 0xae, 0xec, 0x02, 0xe0, 0xfe, 0xf0, 0x06, 0xe0, 0xd9,
  0xd0, 0x07, 0xa0, 0xa0, 0x8c, 0x90, 0x07, 0x09, 0x40, 0x85, 0x21, 0x60,
  0x8d, 0x0b, 0x03, 0x8c, 0x0a, 0x03, 0xa2, 0x52, 0xa9, 0x05, 0x90, 0x02,
  0xa2, 0x50, 0xa0, 0x02, 0x84, 0x23, 0x8d, 0x06, 0x03, 0xa9, 0x90, 0x24,
  0x21, 0x30, 0x23, 0x50, 0x21, 0x8d, 0x1c, 0x02, 0xd0, 0x1c, 0x8a, 0x09,
  0x00, 0xaa, 0xad, 0x0b, 0x02, 0x10, 0x13, 0x78, 0xa0, 0x02, 0xb9, 0x09,
  0x02, 0x99, 0xdb, 0x07, 0xb9, 0xdd, 0x07, 0x99, 0x09, 0x02, 0x88, 0xd0,
  0xf1, 0x58, 0x8e, 0x02, 0x03, 0x08, 0xa9, 0x40, 0x90, 0x01, 0x0a, 0x8d,
  0x03, 0x03, 0xa9, 0x80, 0x24, 0x45, 0x20, 0xe6, 0x07, 0x28, 0x98, 0x10,
  0xaa, 0xc6, 0x23, 0x10, 0xe8, 0x60, 0xad, 0x3b, 0x02, 0xc9, 0xc0, 0x90,
  0x0e, 0xc9, 0xe0, 0xa9, 0x09, 0xb0, 0x02, 0xa9, 0x10, 0x8d, 0x3b, 0x02,
  0x8d, 0x04, 0xd2, 0x4c, 0xff, 0xff, 0xc6, 0x07, 0x4c, 0xc5, 0x13, 0x4c,
  0x57, 0x1b, 0x10, 0x01, 0x0a, 0x8d, 0x08, 0x03, 0x2a, 0x8d, 0x09, 0x03,
  0xa5, 0x21, 0x30, 0xef, 0x4c, 0x59, 0xe4, 0x18, 0x65, 0x47, 0xa8, 0xa5,
  0x48, 0x69, 0x00, 0x84, 0x47, 0x8c, 0x04, 0x03, 0x85, 0x48, 0x8d, 0x05,
  0x03, 0x60, 0x45, 0x52, 0x52, 0x4f, 0x52, 0x20, 0x31, 0x30, 0x30, 0xfd,
  0x9b, 0x44, 0x31, 0x3a, 0x41, 0x55, 0x54, 0x4f, 0x52, 0x55, 0x4e, 0x2e,
  0x53, 0x59, 0x53, 0x4f, 0x4b, 0x2c, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65,
  0x9b, 0x54, 0x61, 0x72, 0x67, 0x65, 0x74, 0x9b, 0xa0, 0xd8, 0xc4, 0xcf,
  0xd3, 0xa0, 0xb2, 0xae, 0xb4, 0xb3, 0xce, 0xa0, 0x20, 0x28, 0x63, 0x29,
  0x27, 0x30, 0x39, 0x20, 0x53, 0x2e, 0x44, 0x6f, 0x72, 0x6e, 0x64, 0x6f,
  0x72, 0x66, 0x9b, 0x1d, 0x20, 0x42, 0x75, 0x66, 0x20, 0x44, 0x23, 0x20,
  0x46, 0x44, 0x20, 0x3c, 0x43, 0x61, 0x72, 0x3e, 0x20, 0x3c, 0x52, 0x75,
  0x6e, 0x3e, 0x20, 0x43, 0x6f, 0x6c, 0x9b, 0x30, 0x24, 0x4c, 0x3b, 0x1a,
  0x4c, 0xa6, 0x16, 0x4c, 0x40, 0x16, 0x4c, 0x90, 0x18, 0x44, 0x32, 0x3b
};

static uint8_t BootSectorsMyPicoDos403[] = {
#include "6502/mypdos/bootstd403.c"
};

static uint8_t BootSectorsMyPicoDos403HS[] = {
#include "6502/mypdos/booths403.c"
};


static uint8_t BootSectorsMyPicoDos404[] = {
#include "6502/mypdos/bootstd404.c"
};

static uint8_t BootSectorsMyPicoDos404R[] = {
#include "6502/mypdos/bootrem404.c"
};

static uint8_t BootSectorsMyPicoDos404B[] = {
#include "6502/mypdos/bootbare404.c"
};


static uint8_t BootSectorsMyPicoDos405[] = {
#include "6502/mypdos/bootstd405.c"
};

static uint8_t BootSectorsMyPicoDos405R[] = {
#include "6502/mypdos/bootrem405.c"
};

static uint8_t BootSectorsMyPicoDos405B[] = {
#include "6502/mypdos/bootbare405.c"
};

static uint8_t BootSectorsMyPicoDos405S[] = {
#include "6502/mypdos/bootsd405.c"
};

static uint8_t BootSectorsPicoBoot405[] = {
#include "6502/mypdos/picoboot405.c"
};


static uint8_t BootSectorsMyPicoDos406[] = {
#include "6502/mypdos/bootstd406.c"
};

static uint8_t BootSectorsMyPicoDos406R[] = {
#include "6502/mypdos/bootrem406.c"
};

static uint8_t BootSectorsMyPicoDos406B[] = {
#include "6502/mypdos/bootbare406.c"
};

static uint8_t BootSectorsMyPicoDos406S[] = {
#include "6502/mypdos/bootsd406.c"
};

static uint8_t BootSectorsPicoBoot406[] = {
#include "6502/mypdos/picoboot406.c"
};



static uint8_t PicoDosSys403[] = {
#include "6502/mypdos/picostd403.c"
};

static uint8_t PicoDosSys403HS[] = {
#include "6502/mypdos/picohs403.c"
};

static uint8_t PicoDosSys404[] = {
#include "6502/mypdos/picostd404.c"
};

static uint8_t PicoDosSys404R[] = {
#include "6502/mypdos/picorem404.c"
};

static uint8_t PicoDosSys404B[] = {
#include "6502/mypdos/picobare404.c"
};


static uint8_t PicoDosSys405[] = {
#include "6502/mypdos/picostd405.c"
};

static uint8_t PicoDosSys405R[] = {
#include "6502/mypdos/picorem405.c"
};

static uint8_t PicoDosSys405B[] = {
#include "6502/mypdos/picobare405.c"
};

static uint8_t PicoDosSys405S[] = {
#include "6502/mypdos/picosd405.c"
};


static uint8_t PicoDosSys406[] = {
#include "6502/mypdos/picostd406.c"
};

static uint8_t PicoDosSys406R[] = {
#include "6502/mypdos/picorem406.c"
};

static uint8_t PicoDosSys406B[] = {
#include "6502/mypdos/picobare406.c"
};

static uint8_t PicoDosSys406S[] = {
#include "6502/mypdos/picosd406.c"
};


struct DosBootEntry {
	Dos2xUtils::EBootType bootType;
	const uint8_t* bootSectors;
	const char* dosSysName;
	const char* dosSysAtariName;
	const uint8_t* dosSysData;
	const unsigned int dosSysDataLen;
	const unsigned int dosSysOfsLo;
	const unsigned int dosSysOfsHi;
	bool isMyPicoDos;
};

#define BOOTONLY_ENTRY(name, bootsec) \
{ name, bootsec, NULL, NULL, NULL, 0, 0, 0, false },

#define DOS_ENTRY(name, lo, hi) \
{ Dos2xUtils::eBoot##name, BootSectors##name, "DOS.SYS", "DOS     SYS", NULL, 0, (lo), (hi), false },

#define MYPDOS_ENTRY(name, data) \
{ Dos2xUtils::eBootMyPicoDos##name, BootSectorsMyPicoDos##data, "PICODOS.SYS", "PICODOS SYS", (PicoDosSys##data), sizeof(PicoDosSys##data), 0x09, 0x0a, true },

static struct DosBootEntry DosBootTable[] = {
BOOTONLY_ENTRY(Dos2xUtils::eBootAtariSIOMyPicoDos, MyPicoDosCode::fBootCode)

DOS_ENTRY(Dos20, 0x0f, 0x10)
DOS_ENTRY(Dos25, 0x0f, 0x10)
DOS_ENTRY(MyDos4533, 0x0f, 0x10)
DOS_ENTRY(MyDos4534, 0x0f, 0x10)
DOS_ENTRY(MyDos455Beta4, 0x0f, 0x10)
DOS_ENTRY(TurboDos21, 0x23, 0x21)
DOS_ENTRY(TurboDos21HS, 0x23, 0x21)
DOS_ENTRY(XDos243F, 0x32, 0x34)
DOS_ENTRY(XDos243N, 0x32, 0x34)

MYPDOS_ENTRY(403, 403)
MYPDOS_ENTRY(403HS, 403HS)

MYPDOS_ENTRY(404, 404)
MYPDOS_ENTRY(404N, 404)
MYPDOS_ENTRY(404R, 404R)
MYPDOS_ENTRY(404RN, 404R)
MYPDOS_ENTRY(404B, 404B)

MYPDOS_ENTRY(405, 405)
MYPDOS_ENTRY(405A, 405)
MYPDOS_ENTRY(405N, 405)
MYPDOS_ENTRY(405R, 405R)
MYPDOS_ENTRY(405RA, 405R)
MYPDOS_ENTRY(405RN, 405R)
MYPDOS_ENTRY(405B, 405B)
MYPDOS_ENTRY(405S0, 405S)
MYPDOS_ENTRY(405S1, 405S)

MYPDOS_ENTRY(406, 406)
MYPDOS_ENTRY(406A, 406)
MYPDOS_ENTRY(406N, 406)
MYPDOS_ENTRY(406R, 406R)
MYPDOS_ENTRY(406RA, 406R)
MYPDOS_ENTRY(406RN, 406R)
MYPDOS_ENTRY(406B, 406B)
MYPDOS_ENTRY(406S0, 406S)
MYPDOS_ENTRY(406S1, 406S)

BOOTONLY_ENTRY(Dos2xUtils::ePicoBoot405, BootSectorsPicoBoot405)

BOOTONLY_ENTRY(Dos2xUtils::ePicoBoot406, BootSectorsPicoBoot406)

{ Dos2xUtils::eBootNone, NULL, NULL, NULL, NULL, 0, 0, 0, false }

};

#undef DOS_ENTRY
#undef MYPDOS_ENTRY
#undef BOOTONLY_ENTRY

