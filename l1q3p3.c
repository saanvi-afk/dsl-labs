#include <stdio.h>
#include <stdlib.h>

int main()
{
int size,i,j,key;
printf("enter size of array");
scanf("%d",&size);
int arr[size];
printf("Enter elements");
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
for(i=1;i<size;i++){
key=arr[i];
j=i-1;

while(j=0 && arr[j]>key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
printf("Sorted array :\n");
for(i=0;i<size;i++){
printf("%d\n",arr[i]);
}
return 0;
}
