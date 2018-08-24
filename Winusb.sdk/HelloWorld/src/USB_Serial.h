/*
 * USB_Serial.h
 *
 *  Created on: 08 Jun 2018
 *      Author: localadmin
 */

#ifndef SRC_USB_SERIAL_H_
#define SRC_USB_SERIAL_H_
#include "xusbps_cdc.h"
#include "xusbps_cdc_irq.h"		/* USB interrupt processing code */
#include "xusbps_cdc_buffer.h"
#include "xparameters.h"		/* XPAR parameters */
#include "xusbps.h"			/* USB controller driver */
#include "xscugic.h"
#include "xusbps_cdc_ch9.h"		/* Generic Chapter 9 handling code */
#include "xusbps_cdc_ch9_cdc.h"	/* Storage class handling code */
#include "xil_exception.h"
#include "xpseudo_asm.h"
#include "xreg_cortexa9.h"
#include "xil_cache.h"
#include <stdlib.h>

void USB_serial_init(XScuGic intc);

int USB_serial_available(void);
int USB_serial_Read(u8 *buffer, u32 length);

int USB_serial_Write(u8 *buffer, u32 length);
int USB_serial_Putc(char c);


#endif /* SRC_USB_SERIAL_H_ */
