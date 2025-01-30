#include <stdio.h>

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1<=0 && n2>=0 || n1>=0 && n2<=0){
        prntf("True");
    }
    else{
        printf("False");
    }
    return 0;
}