/*******************************************************************************
* File Name: CapSense_CSD_Sns.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_CapSense_CSD_Sns_ALIASES_H) /* Pins CapSense_CSD_Sns_ALIASES_H */
#define CY_PINS_CapSense_CSD_Sns_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define CapSense_CSD_Sns_0			(CapSense_CSD_Sns__0__PC)
#define CapSense_CSD_Sns_0_PS		(CapSense_CSD_Sns__0__PS)
#define CapSense_CSD_Sns_0_PC		(CapSense_CSD_Sns__0__PC)
#define CapSense_CSD_Sns_0_DR		(CapSense_CSD_Sns__0__DR)
#define CapSense_CSD_Sns_0_SHIFT	(CapSense_CSD_Sns__0__SHIFT)
#define CapSense_CSD_Sns_0_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__0__SHIFT*2u)))

#define CapSense_CSD_Sns_1			(CapSense_CSD_Sns__1__PC)
#define CapSense_CSD_Sns_1_PS		(CapSense_CSD_Sns__1__PS)
#define CapSense_CSD_Sns_1_PC		(CapSense_CSD_Sns__1__PC)
#define CapSense_CSD_Sns_1_DR		(CapSense_CSD_Sns__1__DR)
#define CapSense_CSD_Sns_1_SHIFT	(CapSense_CSD_Sns__1__SHIFT)
#define CapSense_CSD_Sns_1_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__1__SHIFT*2u)))

#define CapSense_CSD_Sns_2			(CapSense_CSD_Sns__2__PC)
#define CapSense_CSD_Sns_2_PS		(CapSense_CSD_Sns__2__PS)
#define CapSense_CSD_Sns_2_PC		(CapSense_CSD_Sns__2__PC)
#define CapSense_CSD_Sns_2_DR		(CapSense_CSD_Sns__2__DR)
#define CapSense_CSD_Sns_2_SHIFT	(CapSense_CSD_Sns__2__SHIFT)
#define CapSense_CSD_Sns_2_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__2__SHIFT*2u)))

#define CapSense_CSD_Sns_3			(CapSense_CSD_Sns__3__PC)
#define CapSense_CSD_Sns_3_PS		(CapSense_CSD_Sns__3__PS)
#define CapSense_CSD_Sns_3_PC		(CapSense_CSD_Sns__3__PC)
#define CapSense_CSD_Sns_3_DR		(CapSense_CSD_Sns__3__DR)
#define CapSense_CSD_Sns_3_SHIFT	(CapSense_CSD_Sns__3__SHIFT)
#define CapSense_CSD_Sns_3_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__3__SHIFT*2u)))

#define CapSense_CSD_Sns_4			(CapSense_CSD_Sns__4__PC)
#define CapSense_CSD_Sns_4_PS		(CapSense_CSD_Sns__4__PS)
#define CapSense_CSD_Sns_4_PC		(CapSense_CSD_Sns__4__PC)
#define CapSense_CSD_Sns_4_DR		(CapSense_CSD_Sns__4__DR)
#define CapSense_CSD_Sns_4_SHIFT	(CapSense_CSD_Sns__4__SHIFT)
#define CapSense_CSD_Sns_4_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__4__SHIFT*2u)))

#define CapSense_CSD_Sns_5			(CapSense_CSD_Sns__5__PC)
#define CapSense_CSD_Sns_5_PS		(CapSense_CSD_Sns__5__PS)
#define CapSense_CSD_Sns_5_PC		(CapSense_CSD_Sns__5__PC)
#define CapSense_CSD_Sns_5_DR		(CapSense_CSD_Sns__5__DR)
#define CapSense_CSD_Sns_5_SHIFT	(CapSense_CSD_Sns__5__SHIFT)
#define CapSense_CSD_Sns_5_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__5__SHIFT*2u)))

#define CapSense_CSD_Sns_6			(CapSense_CSD_Sns__6__PC)
#define CapSense_CSD_Sns_6_PS		(CapSense_CSD_Sns__6__PS)
#define CapSense_CSD_Sns_6_PC		(CapSense_CSD_Sns__6__PC)
#define CapSense_CSD_Sns_6_DR		(CapSense_CSD_Sns__6__DR)
#define CapSense_CSD_Sns_6_SHIFT	(CapSense_CSD_Sns__6__SHIFT)
#define CapSense_CSD_Sns_6_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__6__SHIFT*2u)))

#define CapSense_CSD_Sns_7			(CapSense_CSD_Sns__7__PC)
#define CapSense_CSD_Sns_7_PS		(CapSense_CSD_Sns__7__PS)
#define CapSense_CSD_Sns_7_PC		(CapSense_CSD_Sns__7__PC)
#define CapSense_CSD_Sns_7_DR		(CapSense_CSD_Sns__7__DR)
#define CapSense_CSD_Sns_7_SHIFT	(CapSense_CSD_Sns__7__SHIFT)
#define CapSense_CSD_Sns_7_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__7__SHIFT*2u)))

#define CapSense_CSD_Sns_8			(CapSense_CSD_Sns__8__PC)
#define CapSense_CSD_Sns_8_PS		(CapSense_CSD_Sns__8__PS)
#define CapSense_CSD_Sns_8_PC		(CapSense_CSD_Sns__8__PC)
#define CapSense_CSD_Sns_8_DR		(CapSense_CSD_Sns__8__DR)
#define CapSense_CSD_Sns_8_SHIFT	(CapSense_CSD_Sns__8__SHIFT)
#define CapSense_CSD_Sns_8_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__8__SHIFT*2u)))

#define CapSense_CSD_Sns_9			(CapSense_CSD_Sns__9__PC)
#define CapSense_CSD_Sns_9_PS		(CapSense_CSD_Sns__9__PS)
#define CapSense_CSD_Sns_9_PC		(CapSense_CSD_Sns__9__PC)
#define CapSense_CSD_Sns_9_DR		(CapSense_CSD_Sns__9__DR)
#define CapSense_CSD_Sns_9_SHIFT	(CapSense_CSD_Sns__9__SHIFT)
#define CapSense_CSD_Sns_9_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__9__SHIFT*2u)))

#define CapSense_CSD_Sns_10			(CapSense_CSD_Sns__10__PC)
#define CapSense_CSD_Sns_10_PS		(CapSense_CSD_Sns__10__PS)
#define CapSense_CSD_Sns_10_PC		(CapSense_CSD_Sns__10__PC)
#define CapSense_CSD_Sns_10_DR		(CapSense_CSD_Sns__10__DR)
#define CapSense_CSD_Sns_10_SHIFT	(CapSense_CSD_Sns__10__SHIFT)
#define CapSense_CSD_Sns_10_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__10__SHIFT*2u)))

#define CapSense_CSD_Sns_11			(CapSense_CSD_Sns__11__PC)
#define CapSense_CSD_Sns_11_PS		(CapSense_CSD_Sns__11__PS)
#define CapSense_CSD_Sns_11_PC		(CapSense_CSD_Sns__11__PC)
#define CapSense_CSD_Sns_11_DR		(CapSense_CSD_Sns__11__DR)
#define CapSense_CSD_Sns_11_SHIFT	(CapSense_CSD_Sns__11__SHIFT)
#define CapSense_CSD_Sns_11_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__11__SHIFT*2u)))

#define CapSense_CSD_Sns_INTR_ALL	 ((uint16)(CapSense_CSD_Sns_0_INTR| CapSense_CSD_Sns_1_INTR| CapSense_CSD_Sns_2_INTR| CapSense_CSD_Sns_3_INTR| CapSense_CSD_Sns_4_INTR| CapSense_CSD_Sns_5_INTR| CapSense_CSD_Sns_6_INTR| CapSense_CSD_Sns_7_INTR| CapSense_CSD_Sns_8_INTR| CapSense_CSD_Sns_9_INTR| CapSense_CSD_Sns_10_INTR| CapSense_CSD_Sns_11_INTR))
#define CapSense_CSD_Sns_Button0__BTN			(CapSense_CSD_Sns__Button0__BTN__PC)
#define CapSense_CSD_Sns_Button0__BTN_PS		(CapSense_CSD_Sns__Button0__BTN__PS)
#define CapSense_CSD_Sns_Button0__BTN_PC		(CapSense_CSD_Sns__Button0__BTN__PC)
#define CapSense_CSD_Sns_Button0__BTN_DR		(CapSense_CSD_Sns__Button0__BTN__DR)
#define CapSense_CSD_Sns_Button0__BTN_SHIFT	(CapSense_CSD_Sns__Button0__BTN__SHIFT)
#define CapSense_CSD_Sns_Button0__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__0__SHIFT*2u)))

#define CapSense_CSD_Sns_Button1__BTN			(CapSense_CSD_Sns__Button1__BTN__PC)
#define CapSense_CSD_Sns_Button1__BTN_PS		(CapSense_CSD_Sns__Button1__BTN__PS)
#define CapSense_CSD_Sns_Button1__BTN_PC		(CapSense_CSD_Sns__Button1__BTN__PC)
#define CapSense_CSD_Sns_Button1__BTN_DR		(CapSense_CSD_Sns__Button1__BTN__DR)
#define CapSense_CSD_Sns_Button1__BTN_SHIFT	(CapSense_CSD_Sns__Button1__BTN__SHIFT)
#define CapSense_CSD_Sns_Button1__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__1__SHIFT*2u)))

#define CapSense_CSD_Sns_Button2__BTN			(CapSense_CSD_Sns__Button2__BTN__PC)
#define CapSense_CSD_Sns_Button2__BTN_PS		(CapSense_CSD_Sns__Button2__BTN__PS)
#define CapSense_CSD_Sns_Button2__BTN_PC		(CapSense_CSD_Sns__Button2__BTN__PC)
#define CapSense_CSD_Sns_Button2__BTN_DR		(CapSense_CSD_Sns__Button2__BTN__DR)
#define CapSense_CSD_Sns_Button2__BTN_SHIFT	(CapSense_CSD_Sns__Button2__BTN__SHIFT)
#define CapSense_CSD_Sns_Button2__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__2__SHIFT*2u)))

#define CapSense_CSD_Sns_Button3__BTN			(CapSense_CSD_Sns__Button3__BTN__PC)
#define CapSense_CSD_Sns_Button3__BTN_PS		(CapSense_CSD_Sns__Button3__BTN__PS)
#define CapSense_CSD_Sns_Button3__BTN_PC		(CapSense_CSD_Sns__Button3__BTN__PC)
#define CapSense_CSD_Sns_Button3__BTN_DR		(CapSense_CSD_Sns__Button3__BTN__DR)
#define CapSense_CSD_Sns_Button3__BTN_SHIFT	(CapSense_CSD_Sns__Button3__BTN__SHIFT)
#define CapSense_CSD_Sns_Button3__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__3__SHIFT*2u)))

#define CapSense_CSD_Sns_Button4__BTN			(CapSense_CSD_Sns__Button4__BTN__PC)
#define CapSense_CSD_Sns_Button4__BTN_PS		(CapSense_CSD_Sns__Button4__BTN__PS)
#define CapSense_CSD_Sns_Button4__BTN_PC		(CapSense_CSD_Sns__Button4__BTN__PC)
#define CapSense_CSD_Sns_Button4__BTN_DR		(CapSense_CSD_Sns__Button4__BTN__DR)
#define CapSense_CSD_Sns_Button4__BTN_SHIFT	(CapSense_CSD_Sns__Button4__BTN__SHIFT)
#define CapSense_CSD_Sns_Button4__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__4__SHIFT*2u)))

#define CapSense_CSD_Sns_Button5__BTN			(CapSense_CSD_Sns__Button5__BTN__PC)
#define CapSense_CSD_Sns_Button5__BTN_PS		(CapSense_CSD_Sns__Button5__BTN__PS)
#define CapSense_CSD_Sns_Button5__BTN_PC		(CapSense_CSD_Sns__Button5__BTN__PC)
#define CapSense_CSD_Sns_Button5__BTN_DR		(CapSense_CSD_Sns__Button5__BTN__DR)
#define CapSense_CSD_Sns_Button5__BTN_SHIFT	(CapSense_CSD_Sns__Button5__BTN__SHIFT)
#define CapSense_CSD_Sns_Button5__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__5__SHIFT*2u)))

#define CapSense_CSD_Sns_Button6__BTN			(CapSense_CSD_Sns__Button6__BTN__PC)
#define CapSense_CSD_Sns_Button6__BTN_PS		(CapSense_CSD_Sns__Button6__BTN__PS)
#define CapSense_CSD_Sns_Button6__BTN_PC		(CapSense_CSD_Sns__Button6__BTN__PC)
#define CapSense_CSD_Sns_Button6__BTN_DR		(CapSense_CSD_Sns__Button6__BTN__DR)
#define CapSense_CSD_Sns_Button6__BTN_SHIFT	(CapSense_CSD_Sns__Button6__BTN__SHIFT)
#define CapSense_CSD_Sns_Button6__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__6__SHIFT*2u)))

#define CapSense_CSD_Sns_Button7__BTN			(CapSense_CSD_Sns__Button7__BTN__PC)
#define CapSense_CSD_Sns_Button7__BTN_PS		(CapSense_CSD_Sns__Button7__BTN__PS)
#define CapSense_CSD_Sns_Button7__BTN_PC		(CapSense_CSD_Sns__Button7__BTN__PC)
#define CapSense_CSD_Sns_Button7__BTN_DR		(CapSense_CSD_Sns__Button7__BTN__DR)
#define CapSense_CSD_Sns_Button7__BTN_SHIFT	(CapSense_CSD_Sns__Button7__BTN__SHIFT)
#define CapSense_CSD_Sns_Button7__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__7__SHIFT*2u)))

#define CapSense_CSD_Sns_Button8__BTN			(CapSense_CSD_Sns__Button8__BTN__PC)
#define CapSense_CSD_Sns_Button8__BTN_PS		(CapSense_CSD_Sns__Button8__BTN__PS)
#define CapSense_CSD_Sns_Button8__BTN_PC		(CapSense_CSD_Sns__Button8__BTN__PC)
#define CapSense_CSD_Sns_Button8__BTN_DR		(CapSense_CSD_Sns__Button8__BTN__DR)
#define CapSense_CSD_Sns_Button8__BTN_SHIFT	(CapSense_CSD_Sns__Button8__BTN__SHIFT)
#define CapSense_CSD_Sns_Button8__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__8__SHIFT*2u)))

#define CapSense_CSD_Sns_Button9__BTN			(CapSense_CSD_Sns__Button9__BTN__PC)
#define CapSense_CSD_Sns_Button9__BTN_PS		(CapSense_CSD_Sns__Button9__BTN__PS)
#define CapSense_CSD_Sns_Button9__BTN_PC		(CapSense_CSD_Sns__Button9__BTN__PC)
#define CapSense_CSD_Sns_Button9__BTN_DR		(CapSense_CSD_Sns__Button9__BTN__DR)
#define CapSense_CSD_Sns_Button9__BTN_SHIFT	(CapSense_CSD_Sns__Button9__BTN__SHIFT)
#define CapSense_CSD_Sns_Button9__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__9__SHIFT*2u)))

#define CapSense_CSD_Sns_Button10__BTN			(CapSense_CSD_Sns__Button10__BTN__PC)
#define CapSense_CSD_Sns_Button10__BTN_PS		(CapSense_CSD_Sns__Button10__BTN__PS)
#define CapSense_CSD_Sns_Button10__BTN_PC		(CapSense_CSD_Sns__Button10__BTN__PC)
#define CapSense_CSD_Sns_Button10__BTN_DR		(CapSense_CSD_Sns__Button10__BTN__DR)
#define CapSense_CSD_Sns_Button10__BTN_SHIFT	(CapSense_CSD_Sns__Button10__BTN__SHIFT)
#define CapSense_CSD_Sns_Button10__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__10__SHIFT*2u)))

#define CapSense_CSD_Sns_Button11__BTN			(CapSense_CSD_Sns__Button11__BTN__PC)
#define CapSense_CSD_Sns_Button11__BTN_PS		(CapSense_CSD_Sns__Button11__BTN__PS)
#define CapSense_CSD_Sns_Button11__BTN_PC		(CapSense_CSD_Sns__Button11__BTN__PC)
#define CapSense_CSD_Sns_Button11__BTN_DR		(CapSense_CSD_Sns__Button11__BTN__DR)
#define CapSense_CSD_Sns_Button11__BTN_SHIFT	(CapSense_CSD_Sns__Button11__BTN__SHIFT)
#define CapSense_CSD_Sns_Button11__BTN_INTR	((uint16)((uint16)0x0003u << (CapSense_CSD_Sns__11__SHIFT*2u)))


#endif /* End Pins CapSense_CSD_Sns_ALIASES_H */


/* [] END OF FILE */
