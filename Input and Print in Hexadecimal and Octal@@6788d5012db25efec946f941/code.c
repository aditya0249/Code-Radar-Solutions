#include<stdio.h>
int main(){
    int num,reversed1=0,reversed2=0;
    scanf("%d",&num);
    int temp=num;
    while(temp){
        int rem1=temp%8;
        reversed1=reversed1*10+rem1;
        temp/=10;
    }
    while(reversed1){
        int rem2=reversed1%10;
        reversed2=reversed2*10+rem2;
        reversed1/=10;
    }
    printf("Octal: %d",reversed2);
}