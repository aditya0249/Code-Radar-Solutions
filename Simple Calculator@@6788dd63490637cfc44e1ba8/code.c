#include <stdio.h>

int main() {
    int n1,n2,result;
    char c;
    scanf("%d %d %c",&n1,&n2,&c);
    switch(c){
        case '+':
        result=n1+n2;
        printf("%d",result);
        break;
        case '-':
        result=n1-n2;
        printf("%d",result);
        break;
        case '*':
        result=n1*n2;
        printf("%d",result);
        break;
        case '/':
        result=n1/n2;
        printf("%d",result);
        
    }
    return 0;
}