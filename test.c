#include "stdio.h"
void main()
{
    int x,y;
    for(x=1,y=1;y<50;y++)
    {
        if(x>=10)
            break;
        if(x%3==1)
        {
            x+=5;
            continue;
        }
        x+=3;
    }
    printf("x=%d,y=%d\n",x,y);
}