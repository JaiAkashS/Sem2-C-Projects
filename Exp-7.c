#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[50],i,pos=-1,s,n;

    printf("Enter size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
        printf("Enter search element:");
        scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s){
        pos=i;
        break;}
    }
    if(pos==-1)
        printf("Element not found");
    else
        printf("Element found at %d position",i+1);
    return 0;
}