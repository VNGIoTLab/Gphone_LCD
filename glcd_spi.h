/* ========================================================================== */
/*                                                                            */
/*   glcd_spi.h                                                               */
/*   (c) 2017 VNGIoTLab                                                       */
/*                                                                            */
/*   Description: Only Text mode                                              */
/*   Thanks to SangTaoClub
/*   http://sangtaoclub.net/m/bai-viet/236-share-code-giao-tiep-graphic-lcd-12864-spi-cua-may-gphone-zte.html
/* ========================================================================== */

#ifndef __GLCD_SPI_H
#define __GLCD_SPI_H

/*-------------------------------------------------------------------------------------------------------------*/
	 
/*  
* @brief  Init for SPI GLCD
* @params CS_: CS pin on VBLUno
* @params SCK_: SCK pin on VBLUno
* @params SDA_: SDA pin on VBLUno
* @params AO_: AO pin on VBLUno
* @params GRAPHIC_MODE_: GLCD Mode
*                         0: Text mode
*                         1: Graphic mode (not support in this library)
*/
void InitLcd(int CS_, int SCK_, int SDA_, int AO_, int GRAPHIC_MODE_);

/*  
* @brief  Test function
*/
void TestLcd(void);

/*  
* @brief  Clear all screen
*/
void ClearLcd(void);

/*  
* @brief  Print a string on screen
* @params row: 0-7
* @params col: 0-20
* @params stringdata: a string (1 to 21 character)
* @note   Size of stringdata is not greater than 21 character
*/
void PrintLcd(int row, int col, char* stringdata);

/*  
* @brief  Print a string on screen
* @params row: 0-7
* @params col: 0-20
* @params num: integer number
*/
void PrintIntLcd(int row, int col, int num);

/*  
* @brief  Print a string on screen
* @params row: 0-7
* @params col: 0-20
* @params doublenum: double number
* @note   precision is %0.4f
*/
void PrintFloatLcd(int row, int col, double doublenum);
/*-------------------------------------------------------------------------------------------------------------*/
#endif /* __GLCD_SPI_H */
