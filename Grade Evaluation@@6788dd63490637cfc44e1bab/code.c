#include <stdio.h>

int main() {
    char c;
    scanf("%d",&c);
    switch(c){
        case 'A':
        printf("Excellent");
        break;
        case 'C':
        printf("Average");
        break;
    }
    return 0;
}