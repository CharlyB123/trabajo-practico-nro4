/****************************************************************************************************
 *
 * @file		FW_InitKit.h
 * @brief		Este archivo contntiene lo referente a la inicializacion de la 
 *              placa
 * @date		22 de abril de 2019
 * @author		Nicolas Ferragamo nferragamo@est.frba.utn.edu.ar
 * @version     1.0.0
****************************************************************************************************/

/****************************************************************************************************
 *** MODULO
****************************************************************************************************/
#ifndef FW_InitKit_H
#define	FW_InitKit_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
}
#endif

/****************************************************************************************************
 *** INCLUDES GLOBALES
****************************************************************************************************/

/****************************************************************************************************
 *** DEFINES GLOBALES
****************************************************************************************************/
#define LED5    LATDbits.LD0    //!< Indica ingreso a modo BootLoader, puede ser usado por el usuario
#define LED6    LATDbits.LD1    //!< Inica modo conectado, puede ser usado por el usuario
#define LED1    LATDbits.LD2    
#define LED2    LATDbits.LD3
#define LED3    LATCbits.LC6
#define LED4    LATCbits.LC7

#define BOT1    PORTDbits.RD4
#define BOT2    PORTDbits.RD5
#define BOT3    PORTDbits.RD6
#define BOT4    PORTDbits.RD7

#define DISP1   LATAbits.LA4
#define DISP2   LATAbits.LA5
#define DISP3   LATEbits.LE0
#define DISP4   LATEbits.LE1
#define DOT     LATEbits.LE2


/****************************************************************************************************
 *** MACROS GLOBALES
****************************************************************************************************/

/****************************************************************************************************
 *** TIPO DE DATOS GLOBALES
****************************************************************************************************/

/****************************************************************************************************
 *** VARIABLES GLOBALES
****************************************************************************************************/

/****************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 ***************************************************************************************************/
void Kit_Init(void);

#endif	/* FW_InitKit_H */






