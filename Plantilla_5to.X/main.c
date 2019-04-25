/****************************************************************************************************
 * \file:       main.c
 * \brief:      Plantilla de 5to para AED 
 * \author:     Nicolás Ferragamo ferragamo.nico@est.frbautn.edu.ar
 * \date:       21 de abril de 2019
 * \version:    1.0.0
 ****************************************************************************************************/
 
/****************************************************************************************************
 *** INCLUDES
****************************************************************************************************/
#include <xc.h>
#include "confbits.h"
#include "FW_InitKit.h"
#include "FW_InitTimer.h"   //no se debe de modificar este archivo para
                        //garantizar el funcionamiento del BOOTLOADER
/****************************************************************************************************
 *** DEFINES PRIVADOS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** MACROS PRIVADAS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** TIPOS DE DATOS PRIVADOS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** TABLAS PRIVADAS AL MODULO
****************************************************************************************************/

/****************************************************************************************************
 *** VARIABLES GLOBALES PUBLICAS
 *   se escriben en CamelCase y estan precedidas por la identificación del 
 *   módulo segida de un _ 
 *   ej: MEM_POOL  Mem_PoolHeap; 
****************************************************************************************************/

/****************************************************************************************************
 *** VARIABLES GLOBALES PRIVADAS AL MODULO    
 *   se declaran con static y se escriben en CamelCase y estan precedidas por la 
 *   identificación del módulo segida de un _ y usan _ para separar las palabras
 *   cuando tienen nombres compuestos
 *   ej: static MEM_POOL  Mem_Pool_Heap; 
****************************************************************************************************/

/****************************************************************************************************
 *** PROTOTIPO DE FUNCIONES PRIVADAS AL MODULO
 * se declaran como staticas y se escriben en CamelCase, estan precedidas por la
 * identificación del módulo seguida de un _. No se decaran en el .h
 * ej static void Clk_DateTimer(paraetros)
****************************************************************************************************/

/****************************************************************************************************
 *** FUNCIONES PRIVADAS AL MODULO
****************************************************************************************************/


void main (void) 
{
    Kit_Init();     // Inicializa los puertos
    Tmr0_Init();    // Inicializa el timer 0
    ei();           // Habilita las interrupciones globales
    
    while (1)
    {   
    
    }
}

