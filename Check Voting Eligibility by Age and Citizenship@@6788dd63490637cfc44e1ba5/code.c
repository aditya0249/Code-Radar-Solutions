#include <stdio.h>

int main() {
    int age,status;
    scanf("%d %d",&age,&status);
    if(age>=18 && status==1){
        printf("Eligible");
    }
    else if(age>18 || age<=18 && status==0){
        printf("Not Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}