#include<stdio.h>
void avg(int arr[5],int n);
int main(){
    int i,n,arr[5];
    printf("Enter No of Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Elements:");
        scanf("%d",&arr[i]);
    }
    avg(arr,n);
    return 0;    
}
void avg(int arr[5],int n){
    int sum=0,i;
    float avg=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    printf("\nSum:%d",sum);
    printf("\nAverage:%.2f",avg);
}