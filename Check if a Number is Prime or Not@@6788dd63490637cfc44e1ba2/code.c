#include <stdio.h>

int main() {
    int n,flag=1;
    scanf("%d",&n);
    for(int i=2; i<n; i++){
        if(n%i==0){
            printf("Not Prime");
            flag=0;
            
        }
    }
    if(flag){
        printf("Prime");

    }
    
    return 0;
}