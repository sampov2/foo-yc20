/*
    Macros for OS dependent 
    Copyright (C) 2009-2010  Sampo Savolainen <v2@iki.fi>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _YC20_OS_H
#define _YC20_OS_H


#define SHARE_DIR "/share/foo-yc20/"
#define YC20_PNG_DIR "graphics/"


#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)

#define PREFIX_STR STR(PREFIX)
#define VERSION_STR STR(VERSION)



#ifdef __APPLE__
//#warning "Selected OS X directories"

#define DEFAULT_CONFIG_DIR std::string(getenv("HOME")) + "/Library/Application Support/foo-yc20/"

#ifdef OSXLV2 // OSX LV2
#define INSTALL_LOCATION PREFIX_STR SHARE_DIR
#elif defined OSXVST
#define INSTALL_LOCATION "/Users/rgareus/src/foo-yc20/trunk/" // XXX -> @loader_path/../Resources/
#else // OSX app bundle
#define INSTALL_LOCATION "../Resources/"
#endif
#endif

#ifdef __WIN32__
//#warning "Selected WIN32 directories"

#define DEFAULT_CONFIG_DIR \
  std::string( \
    getenv("HOMEPATH")?getenv("HOMEPATH"): \
      (getenv("HOME")?getenv("HOME"):"") \
  ) + "\\foo-yc20"

// this is wrong, but we will live
#define INSTALL_LOCATION PREFIX_STR SHARE_DIR
#endif


#ifndef DEFAULT_CONFIG_DIR
//#warning "Selected Linux/UNIX directories"

#define DEFAULT_CONFIG_DIR std::string(getenv("HOME")) + "/.foo-yc20"
#define INSTALL_LOCATION PREFIX_STR SHARE_DIR
#endif


#endif /* _YC20_OS_H */

