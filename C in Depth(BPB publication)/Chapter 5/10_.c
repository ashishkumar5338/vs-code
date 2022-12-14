#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Pythagorean Triplets less than 50 are :\n");
    for(x=1;x<50;x++)
    {
        for(y=1;y<50;y++)
        {
            for(z=1;z<50;z++)
            // if(x<y)
            if(x<y && y<z && z*z==x*x+y*y)
            printf("x=%d,y=%d,z=%d\n",x,y,z);
        }
    }

    return 0;
}