#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if(c=='A'){
        printf("Excellent");
    }
    else if(c=='B'){
        printf("Good");
    }
    else if(c=='C'){
        printf("Average");
    }
    else if(c=='E'){
        printf("Invalid grade");
    }
    else if(c=='F'){
        printf("Fail");
    }
        
        return 0;
}