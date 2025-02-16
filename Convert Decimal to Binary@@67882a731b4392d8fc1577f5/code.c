#include<stdio.h>
int main()
{
    int n=5;
    for(int i=2; i>=0; i--){
        printf("%d",(n>>i)& 1);
    }
}