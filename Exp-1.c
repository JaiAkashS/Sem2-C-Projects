#include<stdio.h>
#include<conio.h>
int main()
{
    int l,w,r,h,b;
    float a1,a2,a3;

    printf("Enter Length of Rectangle:");
    scanf("%d",&l);
    
    printf("Enter Width of Rectangle:");
    scanf("%d",&w);
    
    printf("Enter Radius of Circle:");
    scanf("%d",&r);
    
    printf("Enter Height of Triangle:");
    scanf("%d",&h);
    
    printf("Enter Length of Base:");
    scanf("%d",&b);
    
    a1=l*w;
    a2=3.14*r*r;
    a3=0.5*h*b;

    printf("\nArea of Rectangle:%f\n",a1);
    printf("Area of Circle:%f\n",a2);
    printf("Area of Triangle:%f\n",a3);

    return 0;
}