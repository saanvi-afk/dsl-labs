#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,n,i,j,arr[100],c;
    printf("enter no. of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
         if (arr[j] > arr[j+1])
         {
            a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
         }
        }
    }
    printf("Sorted array\n");
        for (i = 0; i < n; i++){
            printf("%d\n", arr[i]);}
}
