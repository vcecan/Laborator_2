
#include<stdio.h>
int main()
{
    int n,m,x=0,count=0,putere=1;
    printf("Introduceti un numar:\n");
    scanf("%d",&n);
    m=n;
    int *ptr;
    while(n!=0)
    {
        *ptr=n%10;
        printf(" %d ",*ptr); //verificare vizuala a corectitudinii procesului
        count++;
        ptr++;
        n=n/10;
    }
    ptr--;
    printf("\n");
    for(int i=0;i<count;i++)
    {
        putere=pow(10,i);
        x=x+*ptr*putere;
        printf(" %d ",*ptr); ////verificare vizuala a corectitudinii procesului
        ptr--;
    }

    printf("\nInversul numarului : %d",x);


    return 0;
}
