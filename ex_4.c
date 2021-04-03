
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Dati o valoare pentru n:\n");
    scanf("%d",&n);
    int a[n],b[n];
    int *ptr1=&a;
    int *ptr2=&b;
    printf("\nIntroduceti elementele tabloului 1:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
        scanf("%d",ptr1);
        ptr1++;
        }
        printf("\nIntroduceti elementele tabloului 2:\n");

     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf("%d",ptr2);
            ptr2++;
        }
        ptr1=a;
        ptr2=b;
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            {
                *ptr1 != *ptr2 ? (*ptr1 < *ptr2 ? printf("a[%d][%d] < b[%d][%d]\n",i,j,i,j): printf("a[%d][%d] > b[%d][%d]\n",i,j,i,j)) : printf("a[%d][%d] = b[%d][%d]\n",i,j,i,j);
        ptr1++;
        ptr2++;
            }
            return 0;
}

