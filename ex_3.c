
#include<stdio.h>
int main()
{
    int n;
    printf("Dati o valoare pentru n:\n");
    scanf("%d",&n);
    int a[n];
    int *min;
    int count=0;
    printf("\nIntroduceti elementele tabloului:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     min=a;
     *min = *a;

    for(int i=1;i<n;i++)
    {
      if(*(a+i)<*min)
        *min=*(a+i);

    }

    for(int j=*min;j>0;j--)
    {
        count=0;
        for(int i=1;i<n;i++)
        {
            if(a[i-1]%j==0 && a[i]%j==0)
                count++;//numarul de impartiri exacte

        }
        if(count==n-1)
        {
            printf("\n\nCel mai mare divizor comun al tabloului: %d\n\n",j);
            break;
        }
    }

    return 0;
}




