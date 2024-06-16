#include<stdio.h>
union mark{
    int m1;
    int m2;
    int m3;
};
int calcMark(int mark1,int mark2,int mark3);
int main(){
    union mark s;
    int i,internal;
    printf("Enter Three Marks:");
    scanf("%d %d %d",&s.m1,&s.m2,&s.m3);
    internal=calcMark(s.m1,s.m2,s.m3);
    printf("Internal:%d",internal);
    return 0;
}
int calcMark(int mark1,int mark2,int mark3){
    float sum=mark1+mark2+mark3;
    int internal=(sum/150)*20;
    return internal;
}