#ifndef __HEAD_H___
#define __HEAD_H___

/*********代码执行属性***************/
#define _SYS_PERIOD     10    // 后台程序执行周期（ms）
#define _SYS_FREQUENCE       ( 1000 / _SYS_PERIOD )
#define _SYS_SEC(_n_)     (_SYS_FREQUENCE * (_n_))

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"


typedef signed			char int8_t;
typedef signed short	int int16_t;
typedef signed			int int32_t;
typedef unsigned		char uint8_t;
typedef unsigned short	int uint16_t;
typedef unsigned		int uint32_t;

typedef int8_t		s8;
typedef int16_t		s16;
typedef int32_t		s32;
typedef uint8_t		u8;
typedef uint16_t	u16;
typedef uint32_t	u32;

/*
#define null    NULL
#define false 	0
#define FALSE 	false
#define DISABLE false
#define true 	(!false)
#define TRUE 	true
#define ENABLE 	true
*/

//#error

#define BIT_SET(_data_, _bit_)     do{(_data_) |= (_bit_);}while(0)
#define BIT_CLEAR(_data_, _bit_)   do{(_data_) &= ~(_bit_);}while(0)
#define BIT_READ(_data_, _bit_)    ((_data_) & (_bit_))
#define BIT_INVERT(_data_, _bit_)    do{(_data_) ^= (_bit_);}while(0)

#define _BIN(a,b,c,d,e,f,g,h) ((a<<7)+(b<<6)+(c<<5)+(d<<4)+(e<<3)+(f<<2)+(g<<1)+(h<<0))
#define _BIT(_bit_)		( 1 << _bit_ )
#define _SIOF_BYTE(_char_)  (sizeof(_char_))
#define _SIOF_BIT(_char_)   (_SIOF_BYTE(_char_) * 8)
#define _SIOF_SELF(_char_)  (_SIOF_BYTE(_char_) / _SIOF_BYTE(_char_[0]))

#endif

