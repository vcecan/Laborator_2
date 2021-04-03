#include<stdlib.h>
#include<stdio.h>
int main()
{
    printf("Introduceti numarul de linii si de coloane:\n");
    int m,n;
    printf("linii:");
    scanf("%d",&m);
    printf("coloane:");
    scanf("%d",&n);

    int *arr = (int *)calloc(m * n, sizeof(int));

    int i, j;
    printf("Introduceti elementele:\n");
    for (i = 0; i <  m; i++)
    for (j = 0; j < n; j++)
         {
             scanf("%d",arr + i*n + j);
         }
         int min=*(arr+0);
         int max=*(arr+0);

    for (i = 0; i <  m; i++)
    {
    for (j = 0; j < n; j++)
         {
           if(*(arr +i*n+j+1)>max)
            max=*(arr +i*n+j+1);
            if(*(arr +i*n+j+1)<min)
            min=*(arr +i*n+j+1);
         }

    }


   printf("*************\nMinimul%d",min);
   printf("\nMaximul:%d",max);
   printf("\nSuma:%d",min+max);

   return 0;
}
