#include <stdio.h>
int main(){
    int n, key, arr[100],i,temp;
    printf("enter no. of elements ");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
//sorting the array
    for(i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
        if (arr[j+1]<arr[j]){
            temp = arr[j];
            arr[j] =arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    printf("sorted array \n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}