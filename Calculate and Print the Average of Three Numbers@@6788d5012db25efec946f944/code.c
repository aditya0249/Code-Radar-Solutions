#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int add=a+b+c;
    float avg=add/3;
    printf("Average: %f",avg);
    return 0;
}