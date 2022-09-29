#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    printf("#Task 1#\n");
    int count_small = 0; //счётчик строчных букв
    int count_big = 0; //счётчик прописных букв
    int count_numbers = 0; //счётчик цифр
    char string[666];
    printf("Enter the srting:");
    gets(string);
    for (int i = 0; i < strlen(string); ++i) {
        if (isdigit(string[i])) count_numbers++;
        else if (isupper(string[i])) count_big++;
        else if (islower(string[i])) count_small++;
    }
    printf("Number of lowercase letters in a string: %d\n", count_small);
    printf("Number of uppercase letters in a string: %d\n", count_big);
    printf("Number of digits in a string: %d", count_numbers);
    printf("#Task 5#");

    return 0;
}
