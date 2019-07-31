#include "config.h"
#include "lcdWrite.h"
#include "set_address.h"
#include "render.h"
#include <stdio.h>
void pixel(uchar x, uchar y)    // 0 >= x <= 84       0 >= y <= 48  
{
    struct pageData ret;
    
    switch (y) // 0 to 47                   
    {
        case 0:
            ret.page = 0;    // pass the struture members to render function
            ret.data = 0x01;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;             
        case 1:
            ret.page = 0;    
            ret.data = 0x02;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 2:
            ret.data = 0x04;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
          
        case 3:
            ret.page = 0;    
            ret.data = 0x08;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 4:
            ret.page = 0;    
            ret.data = 0x10;
            ret.x = x;
            ret.y = y;
            render(ret);              
            break;
        case 5:
            ret.page = 0;    
            ret.data = 0x20;
            ret.x = x;
            ret.y = y;
            render(ret);     
            break;
        case 6:
            ret.page = 0;    
            ret.data = 0x40;
            ret.x = x;
            ret.y = y;
            render(ret);        
            break;
        case 7:
            ret.page = 0;    
            ret.data = 0x80;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 8:
            ret.page = 1;    
            ret.data = 0x01;
            ret.x = x;
            ret.y = y;
            render(ret);         
            break;
        case 9:
            ret.page = 1;    
            ret.data = 0x02;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 10:
            ret.page = 1;    
            ret.data = 0x04;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 11:
            ret.page = 1;    
            ret.data = 0x08;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 12:
            ret.page = 1;    
            ret.data = 0x10;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 13:
            ret.page = 1;    
            ret.data = 0x20;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 14:
            ret.page = 1;    
            ret.data = 0x40;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 15:
            ret.page = 1;    
            ret.data = 0x80;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 16:
            ret.page = 2;    
            ret.data = 0x01;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 17:
            ret.page = 2;    
            ret.data = 0x02;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;  
        case 18:
            ret.page = 2;    
            ret.data = 0x04;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 19:
            ret.page = 2;    
            ret.data = 0x08;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 20:
            ret.page = 2;    
            ret.data = 0x10;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 21:
            ret.page = 2;    
            ret.data = 0x20;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 22:
            ret.page = 2;    
            ret.data = 0x40;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 23:
            ret.page = 2;    
            ret.data = 0x80;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 24:
            ret.page = 3;    
            ret.data = 0x01;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 25:
            ret.page = 3;    
            ret.data = 0x02;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 26:
            ret.page = 3;    
            ret.data = 0x04;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 27:
            ret.page = 3;    
            ret.data = 0x08;
            ret.x = x;
            ret.y = y;
            render(ret); 
            break;
        case 28:
            ret.page = 3;    
            ret.data = 0x10;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 29:
            ret.page = 3;    
            ret.data = 0x20;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 30:
            ret.page = 3;    
            ret.data = 0x40;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 31:
            ret.page = 3;    
            ret.data = 0x80;
            ret.x = x;
            ret.y = y;
            render(ret);  
            break;
        case 32:
            ret.page = 4;    
            ret.data = 0x01;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 33:
            ret.page = 4;    
            ret.data = 0x02;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 34:
            ret.page = 4;    
            ret.data = 0x04;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 35:
            ret.page = 4;    
            ret.data = 0x08;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 36:
            ret.page = 4;    
            ret.data = 0x10;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 37:
            ret.page = 4;    
            ret.data = 0x20;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 38:
            ret.page = 4;    
            ret.data = 0x40;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 39:
            ret.page = 4;    
            ret.data = 0x80;
            ret.x = x;
            ret.y = y;
            render(ret);  
            break;
        case 40:
            ret.page = 5;    
            ret.data = 0x01;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case  41:
            ret.page = 5;    
            ret.data = 0x02;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 42:
            ret.page = 5;    
            ret.data = 0x04;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 43:
            ret.page = 5;    
            ret.data = 0x08;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 44:
            ret.page = 5;    
            ret.data = 0x10;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 45:
            ret.page = 5;    
            ret.data = 0x20;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 46:
            ret.page = 5;    
            ret.data = 0x40;
            ret.x = x;
            ret.y = y;
            render(ret);
            break;
        case 47:
            ret.page = 5;    
            ret.data = 0x80;
            ret.x = x;
            ret.y = y;
            render(ret);    
            break;
    }
    printf("x = %d, y = %d\n",x, y);
    
}
