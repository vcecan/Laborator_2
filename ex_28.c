#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,n,m,a,b;
    int count=0,countm=0,j=0,j2=0,suma,suma2,count22=0,count2=0,exit=0,count_suma=0;
    printf(" Introduceti limita numar a:\n");
    scanf("%d",&a);
    printf(" Introduceti limita numar b:\n");
    scanf("%d",&b);

    for(n=a;n<b;n++)
    {
        for(m=a+1;m<=b;m++)
        {
        suma=0;
        count2=0;
        suma2=0;
        count22=0;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count++;
        }
    }

    int *div=(int*)calloc(count,sizeof(int));
    int *element=(int*)calloc(count,sizeof(int));
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        *(div+j)=i;
      //  printf(" %d ",*(div+j));
        j++;
        }
    }



      for(i=0;i<count;i++)
      {
          *(element+i)=*(div+i);
         // printf("\n %d ", *(element+i));
          suma+=*(div+i);
      }

       //---------------------------------------------------

        for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
        countm++;
        }
    }

    int *div2=(int*)calloc(countm,sizeof(int));
    int *element2=(int*)calloc(countm,sizeof(int));
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
        *(div2+j2)=i;
       // printf(" %d ",*(div2+j2));
        j2++;
        }
    }




      for(i=0;i<countm;i++)
      {
          *(element2+i)=*(div2+i);
         // printf("\n %d ", *(element2+i));
          suma2+=*(div2+i);
         // count22++;
      }

   // printf("%d--%d\n",suma,suma2);
  if(suma2==suma&&n<m)
    printf("\nNumerele %d si %d sunt prietene\n",n,m);
    count_suma++;
        }
        }
        if (count_suma==0)
            printf("\nNu exista numere prietene pe acest interval.");
    return 0;
}


