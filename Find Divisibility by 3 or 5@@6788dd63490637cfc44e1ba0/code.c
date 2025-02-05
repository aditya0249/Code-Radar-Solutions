#include <stdio.h>

int main() {
    int n,n1=3,n2=5;
    scanf("%d",&n);
    if(n%n1==0 && n%n2==0){
        printf("Divisible by Both");
    }
    else if(n%n1==0){
        printf("Divisible by %d",n1);
    }
    else{
        printf("Divisible by %d",n2);
    }
    return 0;
}