int main()
{
    int n;
    n=50;

    int *arr = (int *)calloc( n, sizeof(int));
    int *suma = (int *)calloc( n, sizeof(int));
    int r;

    int i, j, count = 0;
    for (j = 0; j < n; j++)
         {
             *(arr+j)=rand()%rand();
         }

          for (j = 0; j < n; j++)
         {
             printf(" %d ", *(arr+j));
         }
         printf("\n*****************************************************************\n");


    for (j = 0; j < n; j++)
         {
             while(*(arr + j)!=0)
             {
                 r=*(arr + j)%10;
                 *(suma + j) += r;
                 *(arr + j)=*(arr + j)/10;
             }
         }
             printf("\n");




      for (j = 0; j < n; j++)
      {
         printf("%d ", *(suma + j));
      }
      printf("\n");


   return 0;
}
