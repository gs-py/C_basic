
//GLADWIN S
//TO CHECK THE GIVEN MATRIX IS SPARSE MATRIX
#include<stdio.h>
int main()
{
 int array[20][30];
 int m,n,i,j,count =0;
 printf("enter the no of rows and columns :");
 scanf("%d %d",&m,&n);
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      printf("Enter data in [%d][%d]: ", i, j);
      scanf("%d",&array[i][j]);
      }
      }
 printf("the array is :\n");
    for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
          {
          printf("%d\t",array[i][j]);
          }
          printf("\n");
          }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(array[i][j]==0)
   {
    count=count+1;
   }
  }
 }
 if(count>((m*n)/2))
 {
  printf("THE GIVEN MATRIX IS SPARSE MATRIX");
 }
 else
 {
  printf("THE GIVEN MATRIX IS NOT SPARSE MATRIX");
 }
 return 0;
}
