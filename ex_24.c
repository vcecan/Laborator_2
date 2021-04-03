#include<stdlib.h>
#include<stdio.h>
int main()
{
    printf("INtroduceti numarul de linii si de coloane:\n");
    int m,n;
    printf("linii:");
    scanf("%d",&m);
    printf("coloane:");
    scanf("%d",&n);

    int *arr = (int *)calloc(m * n, sizeof(int));
    int *rev = (int *)calloc(m * n, sizeof(int));
    int r;

    int i, j;
    printf("Introduceti elementele:\n");
    for (i = 0; i <  m; i++)
    for (j = 0; j < n; j++)
         {
             scanf("%d",arr + i*n + j);
         }

    for (i = 0; i <  m; i++)
    {
    for (j = 0; j < n; j++)
         {
             while(*(arr + i*n + j)!=0)
             {
                 r=*(arr + i*n + j)%10;
                 *(rev + i*n + j) = *(rev + i*n + j) * 10 + r;
                 *(arr + i*n + j)=*(arr + i*n + j)/10;
             }
         }
             printf("\n");
    }


    for (i = 0; i <  m; i++)
    {
      for (j = 0; j < n; j++)
      {
         printf("%d ", *(rev + i*n + j));
      }
      printf("\n");
    }

   return 0;
}
