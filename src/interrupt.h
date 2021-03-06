/** @file interrupt.h
 *  @brief interruption related.
 *
 */
 
#ifndef _INTERRUPT_H_
#define _INTERRUPT_H_

#include "typedef.h"
#include "asmhead.h"
#include "funcUtils.h"

/** @addtogroup hal
 *  @{
 */
 
#define PIC0_ICW1		0x0020
#define PIC0_OCW2		0x0020
#define PIC0_IMR		0x0021
#define PIC0_ICW2		0x0021
#define PIC0_ICW3		0x0021
#define PIC0_ICW4		0x0021
#define PIC1_ICW1		0x00a0
#define PIC1_OCW2		0x00a0
#define PIC1_IMR		0x00a1
#define PIC1_ICW2		0x00a1
#define PIC1_ICW3		0x00a1
#define PIC1_ICW4		0x00a1

#define PORT_KEYDAT						0x0060
#define PORT_KEYSTA						0x0064
#define PORT_KEYCMD						0x0064

#define KEYSTA_SEND_NOTREADY	0x02
#define KEYCMD_WRITE_MODE			0x60
#define KBC_MODE							0x47

#define KEYCMD_SENDTO_MOUSE		0xd4
#define MOUSECMD_ENABLE				0xf4


void init_pic(void);

/// @}

#endif

