#include <stdio.h>

int main() {
int a[3][3], b[3][3], c[3][3], r1, r2, c1, c2, i, j, k;

printf("Enter number of rows in A: ");
scanf("%d", &r1);
printf("Enter number of columns in A: ");
scanf("%d", &c1);

for (i = 0; i < r1; i++) {
for (j = 0; j < c1; j++) {
printf("Enter element a[%d][%d]: ", i, j);
scanf("%d", &a[i][j]);
}
}

printf("Enter number of rows in B: ");
scanf("%d", &r2);
printf("Enter number of columns in B: ");
scanf("%d", &c2);

for (i = 0; i < r2; i++) {
for (j = 0; j < c2; j++) {
printf("Enter element b[%d][%d]: ", i, j);
scanf("%d", &b[i][j]);
}
}

if (c1 != r2) {
printf("Can't do multiplication\n");
} else {
for (i = 0; i < r1; i++) {
for (j = 0; j < c2; j++) {
c[i][j] = 0;
for (k = 0; k < c1; k++) {
c[i][j] += a[i][k] * b[k][j];
}
}
}

printf("Resultant Matrix:\n");
for (i = 0; i < r1; i++) {
for (j = 0; j < c2; j++) {
printf("%d ", c[i][j]);
}
printf("\n");
}
}

return 0;
}