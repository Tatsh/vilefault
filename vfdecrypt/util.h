#ifndef _UTIL_H

#include <stdio.h>
#include "vfdecrypt.h"

#define _UTIL_H	1

#define swap64(x) x = ((uint64_t) ntohl(x >> 32)) | (((uint64_t) ntohl((uint32_t) (x & 0xFFFFFFFF))) << 32)

void print_hex(FILE * /* outstream */, uint8_t * /* data */, uint32_t /* len */);
void convert_hex(char * /* str */, uint8_t * /* bytes */,
		 int /* maxlen */);
void dump_v2_header(void * /* hdr */);
void adjust_v1_header_byteorder(cencrypted_v1_header * /* hdr */);
void adjust_v2_header_byteorder(cencrypted_v2_pwheader * /* pwhdr */);

#endif
