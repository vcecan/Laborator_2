#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random (int *b)
{
    srand(time(0));
    int sum[40];
           for(int k=0;k<40;k++)
           {
               sum[k]=0;
    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<5;j++)
            {
            *b = (rand()%40+1);
            if(*b==k+1)
                sum[k]++;
            }
           }
    }
 for(int k=0;k<40;k++)
           printf("numarul %d: %d\n",k+1,sum[k]);}



int main()
{
    int b = 0;
    random (&b);
    return 0;
}
