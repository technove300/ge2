#ifndef term_h
#define term_h

#include "engine.h"
#include <string.h>

extern vec4 *term_font;


void terminal_render();
void terminal_print(const char* str);
void terminal_init();
rect term_get_glyph(unsigned char code);
void terminal_display(const char *str);
void terminal_clear();

#endif