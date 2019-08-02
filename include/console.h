#ifndef INCLUDE_CONSOLE_H_
#define INCLUDE_CONSOLE_H_

#include "types.h"

typedef
enum real_color {
    rc_black = 0,
    rc_blue,
    rc_green,
    rc_cyan,
    rc_red,
    rc_magenta,
    rc_brown,
    rc_light_grey,
    rc_drak_grey,
    rc_light_blue,
    rc_light_green,
    rc_light_cyan,
    rc_light_red,
    rc_light_magenta,
    rc_light_brown, // yellow
    rc_white = 15
} real_color_t;

// 清屏
void console_clear();

// 屏幕输出一个字符 带颜色
void console_putc_color(char c, real_color_t back, real_color_t fore);

// 屏幕打印一个以 \0 结尾的字符串 默认是黑底白字
void console_write(char *cstr);

// 屏幕打印一个以 \0 结尾的字符串 带颜色
void console_write_color(char *cstr, real_color_t back, real_color_t fore);

// 屏幕输出一个十六进制的整型数
void console_write_hex(uint32_t n, real_color_t back, real_color_t fore);

// 屏幕输出一个十进制的整型数
void console_write_dec(uint32_t n, real_color_t back, real_color_t fore);

#endif  // INCLUDE_CONSOLE_H_
