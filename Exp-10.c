#include <stdio.h>
#include <string.h>

int main() {
    int ch;
    char str1[100], str2[100], tempstr[200], newstr[100],sub[100];
    int start, length, result;

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);
    printf("Menu:\n1. Find String Length\n2. String Concatenation\n3. String Copy\n4. String Comparison\n5. Extract Substring\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            length = strlen(str1);
            printf("Length of the string is: %d\n", length);
            break;
        case 2:
            strcpy(tempstr, str1);
            strcat(tempstr, str2);
            printf("Concatenated string: %s\n", tempstr);
            break;
        case 3:
            strcpy(newstr, str1);
            printf("Copied String:%s\n",newstr);
            break;
        case 4:
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        case 5:
            printf("Enter start index for substring: ");
            scanf("%d", &start);
            printf("Enter length of substring: ");
            scanf("%d", &length);
            strncpy(sub, str1 + start, length);
            sub[length] = '\0';
            printf("Substring: %s\n", sub);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}