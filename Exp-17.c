#include<stdio.h>
struct salarySlip{
    int empno;
    char name[10];
    int bpay;
    int allow;
    int ded;
    int npay;
};
int main(){
    struct salarySlip e[100],*p;
    int i,n;
    p=e;
    printf("Enter No. of Employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Name:");
        scanf("%s",p->name);
        printf("Enter Empno:");
        scanf("%d",&p->empno);
        printf("Enter Basic Pay:");
        scanf("%d",&p->bpay);
        printf("Enter Allowance:");
        scanf("%d",&p->allow);
        printf("Enter Deduction:");
        scanf("%d",&p->ded);
        printf("Enter NPay:");
        scanf("%d",&p->npay);
        p++;
    }
    p=e;

    for(i=0;i<n;i++){
        printf("\nEmployee %d Details:\n", i + 1);
        printf("Name:%s\n",p->name);
        printf("Employee:%d\n",p->empno);
        printf("Basic Pay:%d\n",p->bpay);
        printf("Allowance:%d\n",p->allow);
        printf("Deduction:%d\n",p->ded);
        printf("NPay:%d\n",p->npay);
        p++;
    }

}