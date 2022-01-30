
#include<stdio.h>
int main()
{
    int arr[30],i=0,n,j,item,temp,rp=-1;
    printf("\t\tEnter the  total number of Elements  :\t");
    scanf("%d",&n);
     //array input from user
    for(i=0 ;i<n;i++){
        printf("enter the [%d] element :",i+1);
        scanf("%d",&arr[i]);     //increasing array index using for loop
    }
        //printing the elements
    for(i=0 ;i<n;i++){
        printf("The [%d] element is :",i+1);
        printf("\t%d\n",arr[i]);
    }
}

