#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=3; i>=0; i--){
        printf("%d",(n>>i)& 1);
    }
}