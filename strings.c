#include <stdio.h>
void countVowelsAndConsonants(char str[]) {
    int vowels = 0,consonants = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }
       printf("Vowels: %d\nConsonants: %d\n",vowels,consonants);
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString); // Note: Use %s to read a string without spaces

    countVowelsAndConsonants(inputString);
}
