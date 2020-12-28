#include "libmx.h"

void mx_print_unicode(wchar_t c) {
    if(c < 0x80) {
        char out[1];
        out[0] = (c >> 0 & 0x7F) | 0x00;
        write(1, out, 1);
    }
    else if (c < 0x0800) {
        char out[2];
        out[0] = (c >> 6 & 0x1F) | 0xC0;
        out[1] = (c >> 0 & 0x3F) | 0x80;
        write(1, out, 2);
    }
    else if(c < 0x010000) {
        char out[3];
        out[0] = (c >> 12 & 0x0F) | 0xE0;
        out[1] = (c >> 6 & 0x3F) | 0x80;
        out[2] = (c >> 0 & 0x3F) | 0x80;
        write(1, out, 3);
    } else if( c < 0x110000) {
        char out[4];
        out[0] = (c >> 18 & 0x07) | 0xF0;
        out[1] = (c >> 12 & 0x3F) | 0x80;
        out[2] = (c >> 6 & 0x3F) | 0x80;
        out[3] = (c >> 0 & 0x3F) | 0x80;
        write(1, out, 4);
    }
}
