#include <stdio.h>

int main() {
    int n1,n2,result;
    char c;
    scanf("%d %d %c",&n1,&n2,&c);
    if(c=='+'){
        result=n1+n2;
        printf("%d",result);
    }
    else if(c=='-'){
        result=n1-n2;
        printf("%d",result);
    }
    else if(c=='*'){
        result=n1*n2;
        printf("%d",result);
    }
    else if(c=='/'){
        if(n2==0){
            printf("error");
        }
        else{
            result=n1/n2;
            printf("%d",result);
        }
    }
    return 0;
}