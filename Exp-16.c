#include <stdio.h>
#include <string.h>

int isPalindrome(char *ptr);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}

int isPalindrome(char *ptr) {
    char *start = ptr;
    char *end = ptr + strlen(ptr) - 1;
    while (start < end) {
        if (*start != *end)
            return 0;
        start++;
        end--;
    }
    return 1; 
}
