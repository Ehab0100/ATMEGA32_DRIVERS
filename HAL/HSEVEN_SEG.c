/*
 * HSEVEN_SEG.c
 *
 *  Created on: 11 Aug 2023
 *      Author: ehab
 */


#include "HSEVEN_SEG.h"

// 7_SEG ARRAY
u8 G_U8arr[]={ 0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f,0x77,0x7f,0x39,0x3f,0x79,0x71};

void H7SEG_void7SEGInit(port A_PortName)
{
	MDIO_voidSetPortDirection(A_PortName,0xff);
}

void H7SEG_void7SEGOutput(port A_PortName,u8 value)
{
	MDIO_voidSetPortValue(A_PortName, G_U8arr[value]);
}
