#include <stdio.h>

int main(){
    int array[100],i,n,temp;
    int *pArr=array;
    printf("Enter Array Size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element[%d]:",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(pArr+i));
    }
    for(i=0;i<(n-1)/2;i++){
        temp=*(pArr+i);
        *(pArr+i)=*(pArr+n-i-1); 
        *(pArr+n-i-1)=temp; 
    }
    printf("\nReverse:");
    for(i=0;i<n;i++) 
        printf("%d ",*(pArr+i));
    return 0;
}
