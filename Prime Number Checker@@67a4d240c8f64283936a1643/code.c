#include<stdio.h>
int isPrime(int n);
int isPrime(int n){
    if(n>=2){
        for(int i=2; i<n; i++){
            if(i%2==0){
                return 0;
            }
        }
        return 1;
    }
}
int main(){
    int t;
    scanf("%d\n",&t);
    while(t){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));

    }
    return 0;

}