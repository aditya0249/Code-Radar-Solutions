#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        for(j=0; j<i; j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}