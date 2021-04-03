#include<stdio.h>
int main()
{
    int n;
    int suma_neg=0,suma_poz=0;
    printf("Dati o valoare pentru n:\n");
    scanf("%d",&n);
    int a[n];
    int *ptr=&a;
    printf("\nIntroduceti elementele tabloului:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr);
        if(*ptr<0)
            suma_neg+=*ptr;
        else
        suma_poz +=*ptr;
        ptr++;
    }
    ptr=a;
    for(int i=0;i<n;i++)
    {
        printf(" %d ",*ptr);
        ptr++;
    }
    printf("\nsuma pozitiva: %d\nsuma negativa: %d",suma_poz,suma_neg);

    return 0;
}
