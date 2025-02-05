#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'O':
        case 'u':
        printf("Vowel");
        break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        printf("Digit");
        case 'z':
        printf("Consonant");
        break;
        default:
        printf("Special Charcter");
    }
    return 0;
}