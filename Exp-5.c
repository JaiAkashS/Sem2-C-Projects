#include<stdio.h>
int main(){
int n1,n2;
    printf("enter two numbers:");
    scanf("%d %d",&n1,&n2);
    while(n1!=n2){
        if(n1>n2)
        n1-=n2;
        else
        n2-=n1;
    }
printf("The GCD of the two numbers is: %d\n", n1);
return 0;
}