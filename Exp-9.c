#include<stdio.h>
int main()
{
    int i,j,k,A[10][10][10],r1,c1,b1,n,r2,c2,b2;
    printf("Enter Row,Column,Block of A:");
    scanf("%d %d %d",&r1,&c1,&b1);
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            for(k=0;k<b1;k++){
                printf("Enter elementA[%d][%d][%d]:",i,j,k);
                scanf("%d",&A[i][j][k]);
    }}}
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            for(k=0;k<b1;k++){
                printf("%d\t",A[i][j][k]);
        }printf("\n");
    }printf("\n");
    }
    printf("Enter the Element to be added:");
    scanf("%d",&n);
    printf("Enter the Position (Row,Column,Block):");
    scanf("%d %d %d",&r2,&c2,&b2);
    A[r2][c2][b2]=n;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            for(k=0;k<b1;k++){
                printf("%d\t",A[i][j][k]);
        }printf("\n");
    }printf("\n");
    }
    return 0;
}