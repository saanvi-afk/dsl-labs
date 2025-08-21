#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,n,i,arr[100],a,c;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    printf("Sorted array\n");
    for (i = 0; i < n; i++){
            printf("%d\n", arr[i]);}
}
