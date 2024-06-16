#include<stdio.h>
int main() {
    int i, j, n, avg, sum;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        char name[15];
        int r, marks[3];
        printf("\nEnter name: ");
        scanf("%s", name);
        printf("Enter register number: ");
        scanf("%d", &r);
        sum = 0;
        for (j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[j]);
            sum += marks[j];
        }
    avg = sum / 3;
    printf("Total marks for %s = %d\n", name, sum);
    printf("Average marks for %s = %d\n", name, avg);
    }
return 0;
}