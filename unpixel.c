#include "config.h"
#include "set_address.h"
#include "lcdWrite.h"
void unpixel(uchar x, uchar page)
{
    if((page == 0) ||(page == 1) || (page == 2) || (page == 3) || (page == 4) || (page == 5))
    {
        set_address(x, page);
        lcdWrite(0x00, HIGH);       // clear the pixel at coordinates x, y        
    }
}
