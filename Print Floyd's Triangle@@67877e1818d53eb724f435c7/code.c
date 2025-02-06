#include <stdio.h>

int main() {
    int n,count=2;
    scanf("%d",&n);
    printf("%d\n",1);
    for(int i=1; i<=n; i++){
        for(int j=count; j<=i+2; count++){
            printf("%d",j);
            
        }
        count++;
        printf("\n");
    }
    return 0;
}
