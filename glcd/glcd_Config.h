/*
 * glcd_Config.h - User specific configuration for Arduino GLCD library
 *
 * vi:ts=8
 *
 * Use this file to configure which glcd module is used
 * Then edit the selected module file to configure parameters for that module.
 *
*/

#ifndef	glcd_CONFIG_H
#define glcd_CONFIG_H

 /*
  * the following list are the files to be included in the release 
  * all other display specific files are in config/dev_Config.h
  * Only select one of the following:
  *
 */

//#include "config/ks0108_Config.h"
//#include "config/sed1520_Config.h"


/*================================== User Defines ==================================*/

#define GLCD_TAREA_CNT	3 	// number of text areas, each text area costs ~12 bytes of RAM.


//#define GLCD_NO_SCROLLDOWN	// disable reverse scrolling (saves ~600 bytes of code)
				// This will allow those tight on FLASH space to save a bit of code space

//#define GLCD_ATOMIC_IO	// Genrate code that ensures all pin i/o operations are atomic
				// including any potential nibble operations.
				// Without this option enabled, nibble operations will be slightly faster but
				// might have issues if a pin used shares a processor i/o port with an
				// interrupt routine that updates pins/bits on the same port.

#define GLCD_NEW_FONTDRAW	// turn on to get new font rendering


#endif