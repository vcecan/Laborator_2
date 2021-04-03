#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,n1,m1;
    printf("Dati valori pentru n si m:\n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int *ptr1=&a;
    int count=0;
    int suma;//suma totala a elementelor;
    int l,c;//linii si coloane
    printf("\nIntroduceti elementele tabloului 1:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
        scanf("%d",ptr1);
        ptr1++;
        }
    printf("\nDati valori pentru n1 si m1:\n");
    scanf("%d%d",&n1,&m1);
   int b[n1][m1];
    int *ptr2=&b;
        printf("\nIntroduceti elementele tabloului 2:\n");

     for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        {
            scanf("%d",ptr2);
            ptr2++;
        }
        suma=n*m+n1*m1;
       // printf("\n    %d",suma);
        ptr1=a;
        ptr2=b;
        if(suma%2==0)
        {
        l=suma/2-1;
        for(;;)
        {
            if(suma%l!=0)
                l--;
            else
                break;
        }
        c=suma/l;
        }
        if(suma%2!=0)
        {
            for(;;)
            {
        l=pow(suma,0.5);
        if(suma%l!=0)
                l++;
        else
            break;
            }
            c=suma/l;
        }
        for(int i=2;i<=suma/2;i++) //verificare in caz daca numarul de elemente este prim.
        {
            if(suma%i==0)
            count++;
        }
        if(count=0)
        {
            l=suma;
            c=1;
        }

        printf("\nMatricea 1:\n");
         ptr1=a;
         for(int i=0;i<n;i++)
         {
        for(int j=0;j<m;j++)
        {
            printf(" %d ",*ptr1);
            ptr1++;
        }
        printf("\n");
         }
                 ptr2=b;
                 printf("\nMatricea 2:\n");

          for(int i=0;i<n1;i++)
         {
        for(int j=0;j<m1;j++)
        {
            printf(" %d ",*ptr2);
            ptr2++;
        }
        printf("\n");
         }
        int d[l][c];
        int *ptr3=&d;
        ptr1=a;
        ptr2=b;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(*ptr1<0)
                {
                *ptr3=*ptr1;
            ptr3++;
        }
            ptr1++;
        }
        ptr1=a;
         for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        {
            if(*ptr2<0)
                {
                *ptr3=*ptr2;
            ptr3++;
        }
            ptr2++;
        }
        ptr2=b;
         for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(*ptr1==0)
                {
                *ptr3=*ptr1;
            ptr3++;
        }
            ptr1++;
        }
        ptr1=a;
        for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        {
            if(*ptr2==0)
                {
                *ptr3=*ptr2;
            ptr3++;
        }
            ptr2++;
        }
        ptr2=b;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(*ptr1>0)
                {
                *ptr3=*ptr1;
            ptr3++;
        }
            ptr1++;
        }
        ptr1=a;
        for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        {
            if(*ptr2>0)
                {
                *ptr3=*ptr2;
            ptr3++;
        }
            ptr2++;
        }
        ptr2=b;
        ptr3=d;
        printf("\nNoua Matrice:\n");
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf(" %d ",*ptr3);
                ptr3++;
            }
        printf("\n");
        }

        return 0;
}

