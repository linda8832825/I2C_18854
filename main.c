#include <htc.h>
#include "mcc_generated_files/mcc.h"
#include "I2C_LCD.h"
void write(void);
void main(void) { 
    SYSTEM_Initialize();
    TRISA1=0;
    I2C_Master_Init();
//    LCD_Init(0x4E); // Initialize LCD module with I2C address = 01001110
//    write();
    while(1){
        RA1=1;
        __delay_ms(5000);
        RA1=0;
        __delay_ms(1000);
    }
}
void write(void){
    LCD_Set_Cursor(1, 1);
    LCD_Write_String(" iiiiiiiiiiiiiiiii");
    LCD_Set_Cursor(2, 1);
    LCD_Write_String(" 222222222222"); 
    LCD_Set_Cursor(3, 1);
    LCD_Write_String(" cccccccccc"); 
    LCD_Set_Cursor(4, 1);
    LCD_Write_String(" :)))))))))))))))"); 
}