#ifndef ADXL_H
#define	ADXL_H

//#include <xc.h> // include processor files - each processor file is guarded.  

// ADLX Registers
#define ADXL_RESET 0x1f
#define ADXL_INTMAP2 0x2b
#define ADXL_POWER_CTL 0x2d
#define ADXL_WR_SPI 0x0A
#define ADXL_RD_SPI 0x0B
//#define DOWN 0
//#define UP 1
//#define ADXL_CS PORTCbits.RC2
//#define ADXL_INT2 PORTCbits.RC1

void ADXL_Init(void);
void ADXL_WriteReg( char reg, char cmd );
char ADXL_ReadReg( char reg );

#endif	