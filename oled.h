#ifndef OLED_H
#define	OLED_H

#include "font.h"

//  SPI Register
#define DOWN 0
#define UP 1
#define OLED_CS             PORTAbits.RA4
#define OLED_DC             PORTCbits.RC5
#define OLED_RES            PORTCbits.RC4

typedef char                     schar;
typedef unsigned char            uchar;
typedef const char               cschar;
typedef const unsigned char      cuchar;
typedef int                      sint;
typedef unsigned int             uint;
//bool oledOn;

cuchar *font, *font2;
uchar width, height, min, max;

void Oled_WriteCmd(uchar cmd);
void Oled_WriteRam(uchar dat);
void Oled_SetPointer(uchar seg, uchar pag);
void Oled_FillScreen(uchar pattern);
void Oled_Init(void);
void Oled_Reset(void);
void ScreenOn();
void ScreenOff();
void Oled_SetFont(cuchar *_font, uchar _width, uchar _height, uchar _min, uchar _max);
void Oled_WriteChar(uchar c, uchar seg, uchar pag);
void Oled_ConstText(cschar *buffer, uchar seg, uchar pag);
void Deactivate_Scroll(void);
void Activate_Scroll(void);
void Left_HorizontalScroll(uchar start_page, uchar end_page, uchar set_time);

#endif	/* OLED_H */

