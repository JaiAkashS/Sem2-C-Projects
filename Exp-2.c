#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter Three num:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        printf("Number %d is Bigger!",a);
    }
    else if(b>a&&b>c)
    {
        printf("Number %d is Bigger!",b);
    }
    else if(c>a&&c>b){
        printf("Number %d is Bigger!",c);
    }
    else{
        printf("All Three Numbers are Equal");
    }
    return 0;
}