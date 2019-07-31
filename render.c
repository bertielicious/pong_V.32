#include "config.h"
#include "set_address.h"
#include "lcdWrite.h"

void render(struct pageData s)      //render receives the entire struct containing page, date, x and y
{
     set_address( s.x, s.page);               //[row][col]
     gameplay_area[s.page][s.x] = gameplay_area[s.page][s.x]|s.data;
     //lcdWrite(s.data|gameplay_area[s.page][s.x], HIGH);       // illuminate the pixel at coordinates x, y  
       lcdWrite(gameplay_area[s.page][s.x], HIGH);
}
