#include <stdio.h>

// Function to reverse a sentence using recursion
void reverseSentence() {
    char ch;
    scanf("%c", &ch);
    
    if (ch != '\n') {
        reverseSentence();
        printf("%c", ch);
    }
}

int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    printf("\n");
    return 0;
}
