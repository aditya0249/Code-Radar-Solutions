#include <stdio.h>

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int sq1=n1*n1;
    int sq2=n2*n2;
    if(sq2==n1){
        printf("Yes");
    }
    else if(sq1==n2){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}