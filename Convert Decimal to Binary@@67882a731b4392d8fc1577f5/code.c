// Your code here...
#include<stdio.h>
int main()
{
    int n,r1=0,r2=0;
    scanf("%d",&n);
    while(n){
        int rem1=n%2;
        r1=r1*10+rem1;
        n/=10;

    }
    while(r1){
        int rem2=r1%10;
        r2=r2*10+rem2;
        r1/=10;
    }
    prinitf("%d",r2);
}