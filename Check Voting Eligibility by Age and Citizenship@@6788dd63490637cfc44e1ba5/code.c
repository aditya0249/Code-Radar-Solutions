#include <stdio.h>

int main() {
    int age,status;
    scanf("%d %d",&age,&status);
    if(age>=18 && status==1 && status==0){
        printf("Eligible");
    }
    else{
        printf("Not Eligibile");
    }
    return 0;
}