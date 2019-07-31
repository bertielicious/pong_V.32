#include "config.h"
#include "unpixel.h"
void clear_screen (void)
{
    uchar xaxis, yaxis = 0;
     for(xaxis = 0; xaxis < 84; xaxis++)
   {
       for(yaxis = 0; yaxis < 6; yaxis++)
       {
           unpixel(xaxis, yaxis);
       }   
           
   }       
}
