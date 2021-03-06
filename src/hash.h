/*****************************************************************************
 *
 *    Copyright (C) 2009 Codefidence Ltd www.codefidence.com
 *
 *    This file is a part of Distore.
 *
 *    Distore is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    Distore is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with Distore.  If not, see <http://www.gnu.org/licenses/>.
 * 
 ****************************************************************************/

#ifndef DISTORE_HASH_H
#define DISTORE_HASH_H

#define SHA1_LENGTH 20

/* SHA1 computation functions.
 * To calculate particular digest:
 *   call sha1sumInit
 *   call sha1sumUpdate one or more times feeding it with message data
 *   call sha1sumFinal to obtain your digest. char *digest should point
 *        to buffer of SHA1_LENGTH bytes
 *
 * WARNING! These functions share static data!
 */
void sha1sumInit();
void sha1sumUpdate(const char *input, const unsigned int input_size);
void sha1sumFinal(unsigned char *digest);

#endif
