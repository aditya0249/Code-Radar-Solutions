#include <stdio.h>

int main() {
    char n[100];
    char h[100];
    int a;
    scanf("%s %d\n",&n,&a);
    scanf("%s",&h);
    printf("Name: %s\n",n);
    printf("Age: %d\n",a);
    printf("Hobby: %s",h);
    return 0;
}