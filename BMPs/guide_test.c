/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap converter for emWin V5.12.                           *
*        Compiled Jun 29 2011, 15:28:21                              *
*        (C) 1998 - 2010 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: guide_test                                            *
* Dimensions:  72 * 18                                               *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


static GUI_CONST_STORAGE unsigned long acguide_test[] = {
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00090909, 0x000C0C0C, 0x000F0F0F, 0x000F0F0F, 0x000C0C0C, 0x00090909, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00090909, 0x00333333, 0x00686868, 0x00959595, 0x00B4B4B4, 0x00B4B4B4, 0x00959595, 0x00686868, 0x00333333, 
        0x00090909, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x000A0A0A, 0x00575757, 0x009A9A9A, 0x009D9D9D, 0x008D8D8D, 0x00858585, 0x008A8A8A, 0x00989898, 0x00AAAAAA, 0x009F9F9F, 
        0x00575757, 0x000A0A0A, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00090909, 0x00575757, 0x00A5A5A5, 0x008C8C8C, 0x007B7B7B, 0x00808080, 0x00838383, 0x00898989, 0x008E8E8E, 0x00949494, 0x00A7A7A7, 
        0x00B0B0B0, 0x00575757, 0x00090909, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00333333, 0x009B9B9B, 0x008E8E8E, 0x007D7D7D, 0x00808080, 0x00838383, 0x00888888, 0x008B8B8B, 0x00929292, 0x00989898, 0x009F9F9F, 
        0x00ACACAC, 0x00A0A0A0, 0x00333333, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00090909, 0x00686868, 0x00A0A0A0, 0x00818181, 0x00838383, 0x00858585, 0x00878787, 0x008D8D8D, 0x00929292, 0x00959595, 0x009C9C9C, 0x00A1A1A1, 
        0x00A8A8A8, 0x00B6B6B6, 0x00686868, 0x00090909, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x000C0C0C, 0x00959595, 0x00959595, 0x00878787, 0x00888888, 0x00888888, 0x008F8F8F, 0x00919191, 0x00969696, 0x009A9A9A, 0x009F9F9F, 0x00A5A5A5, 
        0x00AAAAAA, 0x00B2B2B2, 0x00959595, 0x000C0C0C, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x000F0F0F, 0x00B4B4B4, 0x00909090, 0x008C8C8C, 0x008E8E8E, 0x008F8F8F, 0x00929292, 0x00979797, 0x00999999, 0x009F9F9F, 0x00A4A4A4, 0x00A7A7A7, 
        0x00ADADAD, 0x00B1B1B1, 0x00B4B4B4, 0x000F0F0F, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x000F0F0F, 0x00B4B4B4, 0x00969696, 0x00929292, 0x00949494, 0x00969696, 0x00999999, 0x009D9D9D, 0x00A1A1A1, 0x00A4A4A4, 0x00A7A7A7, 0x00ADADAD, 
        0x00B0B0B0, 0x00B2B2B2, 0x00B4B4B4, 0x000F0F0F, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x000C0C0C, 0x00959595, 0x00A3A3A3, 0x009B9B9B, 0x009A9A9A, 0x009D9D9D, 0x00A0A0A0, 0x00A3A3A3, 0x00A5A5A5, 0x00A9A9A9, 0x00ACACAC, 0x00AFAFAF, 
        0x00B2B2B2, 0x00B9B9B9, 0x00959595, 0x000C0C0C, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00090909, 0x00686868, 0x00B1B1B1, 0x00A0A0A0, 0x00A1A1A1, 0x00A2A2A2, 0x00A4A4A4, 0x00A7A7A7, 0x00ABABAB, 0x00ADADAD, 0x00B0B0B0, 0x00B3B3B3, 
        0x00B6B6B6, 0x00BCBCBC, 0x00686868, 0x00090909, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00333333, 0x00A1A1A1, 0x00B0B0B0, 0x00A8A8A8, 0x00A9A9A9, 0x00AAAAAA, 0x00ACACAC, 0x00AFAFAF, 0x00B2B2B2, 0x00B3B3B3, 0x00B6B6B6, 
        0x00BABABA, 0x00A3A3A3, 0x00333333, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0x00A0A0A0, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00090909, 0x00575757, 0x00B2B2B2, 0x00B2B2B2, 0x00AEAEAE, 0x00AFAFAF, 0x00B0B0B0, 0x00B2B2B2, 0x00B5B5B5, 0x00B7B7B7, 0x00BABABA, 
        0x00B6B6B6, 0x00575757, 0x00090909, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x000A0A0A, 0x00575757, 0x00A1A1A1, 0x00BABABA, 0x00B6B6B6, 0x00B4B4B4, 0x00B6B6B6, 0x00BABABA, 0x00BCBCBC, 0x00A3A3A3, 
        0x00575757, 0x000A0A0A, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x09090909, 0x00333333, 0x00686868, 0x00959595, 0x00B4B4B4, 0x00B4B4B4, 0x00959595, 0x00686868, 0x00333333, 
        0x00090909, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0x00090909, 0x000C0C0C, 0x000F0F0F, 0x000F0F0F, 0x000C0C0C, 0x00090909, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF,
  0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 
        0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF, 0xFFFF00FF
};

GUI_CONST_STORAGE GUI_BITMAP bmguide_test = {
  72, /* XSize */
  18, /* YSize */
  288, /* BytesPerLine */
  32, /* BitsPerPixel */
  (unsigned char *)acguide_test,  /* Pointer to picture data */
  NULL,  /* Pointer to palette */
  GUI_DRAW_BMP8888
};

/* *** End of file *** */
