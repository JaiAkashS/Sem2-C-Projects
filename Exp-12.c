#include<stdio.h>
#include<string.h>
void swap(int*a,int*b);
int main(){
    int a,b;
    printf("Enter Two Numbers:");
    scanf("%d %d",&a,&b);
    printf("Value before swapping a:%d b:%d\n",a,b);
    swap(&a,&b);
    printf("Value after swapping a:%d b:%d\n",a,b);
    getchar();
    return 0;
}
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

