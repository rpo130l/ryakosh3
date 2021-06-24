#ifndef DEFINES_H
#define DEFINES_H

// LCD height and width
#define LCD_HEIGHT 320
#define LCD_WIDTH 240

// Primary Colors
#define COLOR_BLACK       0x0000 
#define COLOR_NAVY        0x000F
#define COLOR_DARKGREEN   0x03E0
#define COLOR_DARKCYAN    0x03EF      
#define COLOR_MAROON      0x7800      
#define COLOR_PURPLE      0x780F  
#define COLOR_OLIVE       0x7BE0     
#define COLOR_LIGHTGREY   0xC618     
#define COLOR_DARKGREY    0x7BEF      
#define COLOR_BLUE        0x001F      
#define COLOR_GREEN       0x07E0      
#define COLOR_CYAN        0x07FF     
#define COLOR_RED         0xF800      
#define COLOR_MAGENTA     0xF81F      
#define COLOR_YELLOW      0xFFE0     
#define COLOR_WHITE       0xFFFF    
#define COLOR_ORANGE      0xFD20     
#define COLOR_GREENYELLOW 0xAFE5 
#define COLOR_PINK        0xF81F

#define LCD_PINS_MASK 0x7CFFFF
#define LCD_PINS_8B 0xFF
#define LCD_PINS_16B 0xFFFF

#define DATA_PIN_START 0
#define DATA_PIN_END 15
#define CTRL_PIN_START 18
#define CTRL_PIN_END 22

// RS Pin
#define REGISTER_SELECT_PIN 18
#define REGISTER_SELECT_CMD 0
#define REGISTER_SELECT_DATA 1

// CS Pin
#define CHIP_SELECT_PIN 19
#define CHIP_SELECT_ACTIVE 0
#define CHIP_SELECT_IDLE 1

// RD Pin
#define READ_ENABLE_PIN 20
#define READ_ENABLE_ACTIVE 1
#define READ_ENABLE_IDLE 0

// WR Pin
#define WRITE_ENABLE_PIN 21
#define WRITE_ENABLE_ACTIVE 1
#define WRITE_ENABLE_IDLE 0

// RES Pin
#define RESET_PIN 22
#define RESET_ACTIVE 0
#define RESET_IDLE 1

#define CMD_PIXEL_FORMAT 0x3A
#define PRM_PIXEL_FORMAT_16B 0x05

#define CMD_WRITE_DISPLAY_BRIGHTNESS 0x51
#define CMD_DISPLAY_ON 0x29
#define CMD_MEMORY_WRITE 0x2C
#define CMD_MEMORY_WRITE_CONTINUE 0x3C
#define CMD_MEMORY_ACCESS_CONTROL 0x36
#define CMD_COL_ADDRESS_SET 0x2A
#define CMD_ROW_ADDRESS_SET 0x2B

#define swap(a, b) { int16_t t = a; a = b; b = t; }

#endif // DEFINES_H