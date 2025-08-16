#include <stdio.h>
int main(){
    int n,key,arr[100],flag=0,i;
    printf("enter no. of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter element to search");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if (key==arr[i])
        {
            flag =1;
            break;
        }
    }
    if (flag ==1)
    printf("element found at position %d",i+1);
    else 
    printf("element not found");
}