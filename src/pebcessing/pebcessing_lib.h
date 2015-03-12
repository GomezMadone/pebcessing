#pragma once

#include <pebble.h>
#include "pebcessing/pebcessing_core.h"
#include "../settings.h"


extern int g_width;
extern int g_height;
extern unsigned long int g_frame_count;

#ifdef ENABLE_KEY_EVENT
extern ButtonId g_key_code;
#endif

extern GBitmap *g_canvas_frame_buffer;
extern uint8_t *g_raw_pixels;
extern uint16_t g_row_size_bytes;

extern GContext *g_ctx;


// Mathematical constants
#define PI (3.14159265358979323846f)
#define HALF_PI (PI / 2.0f)
#define QUARTER_PI (PI / 4.0f)
#define TWO_PI (2.0f * PI)
#define TAU (2.0f * PI)

// Enumerators of text alignment
typedef enum { LEFT, CENTER, RIGHT } TextAlignment;


/* --------------------------
   Processing-like functions
   -------------------------- */
void frameRate(float frame_rate);
void loop();
void noLoop();
void redraw();
void size(float w, float h);
void point(float x, float y);
void line(float x1, float y1, float x2, float y2);
void ellipse(float x, float y, float w, float h);
void circle(float x, float y, float radius);
void rect(float x1, float y1, float x2, float y2);
void quad(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
void triangle(float x1, float y1, float x2, float y2, float x3, float y3);
int year();
int month();
int day();
int wday();
int hour();
int minute();
int second();
// int millis();
void background();
void fill(int color);
void noFill();
void stroke(int color);
void noStroke();
int getPixel(int x, int y);
void loadPixels();
void setPixel(int x, int y, int color);
void updatePixels();
float _sin(float angle);
float _cos(float angle);
float radians(float degrees);
float degrees(float radians);
float random(float low, float high);
GFont loadFont(const char *font_key);
void textFont(GFont font);
void text(const char *str, float x, float y, float w, float h);
void textAlign(int alignX);

/* --------------------------
   Functions for use in Pebcessing's internal routine
   -------------------------- */
void set_draw_state();