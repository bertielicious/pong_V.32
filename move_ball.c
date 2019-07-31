#include "config.h"
#include "pixel.h"
#include <stdio.h>
uchar move_ball (uchar col, uchar row)
{
    uchar x, y, x1, y1 = 0;
    x1 = col;
    y1 = row;
    for(x = x1; x < x1 + 3; x++)
    {
        for(y = y1; y < y1 + 3; y++)
        {
            pixel(x, y);
        }
    }  
    if( x < 0 || x >83 || y > 47 || y < 0)  // boundary check
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
