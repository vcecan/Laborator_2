
#include<stdio.h>
int main()
{
    int n;
    int pare=0,impare=0;
    printf("Dati o valoare pentru n:\n");
    scanf("%d",&n);
    int a[n];
    int *ptr=&a;
    printf("\nIntroduceti elementele tabloului:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr);
        if(*ptr%2!=0)
            impare++;
        else
        pare++;
        ptr++;
    }
    ptr=a;
    for(int i=0;i<n;i++)
    {
        printf(" %d ",*ptr);
        ptr++;
    }
    printf("\npare: %d\nimpare: %d",pare,impare);

    return 0;
}
