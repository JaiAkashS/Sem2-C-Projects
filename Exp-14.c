#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b);
int binarySearch(int arr[100],int beg,int end,int size,int search);
int main(){
    int beg=0,end,mid,i,idx,array[100],arr[100],target,n;
    printf("Enter the array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Element[%d]:",i);
        scanf("%d",&array[i]);
    }
    qsort(array, n, sizeof(int), compare);
    printf("Sorted Array!\n");   
    for(i=0;i<n;i++){
        printf("%d \n",array[i]);
    }
    end=n-1;
    mid=beg+(end-beg)/2;
    printf("Enter Search Element:");
    scanf("%d",&target);
    idx=binarySearch(array,beg,end,n,target);
    if(idx!=-1)
        printf("Element %d is found at position %d",target,idx+1);
    else
        printf("Element %d is not Found!",target);
    return 0;
}

int binarySearch(int arr[100],int beg,int end,int size,int search)
{
    int idx=-1;
    int mid=beg+(end-beg)/2;
    if(arr[mid]==search){
        idx=mid;
        return idx;
    }
    else if(arr[mid]<search){
        return binarySearch(arr,mid+1,end,size,search);
    }
    else if(arr[mid]>search){
        return binarySearch(arr,beg,mid-1,size,search);
    }
}

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}