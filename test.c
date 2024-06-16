#include<stdio.h>

int main(){
    struct stud{
        int id;
        char name[10];
    }students[10];
    int i;
    for(i=0;i<scanf("%d");i++){
        printf("Enter Id Name:");
        scanf("%d %s",&students[i].id,students[i].name);
    }
    return 0;
}