#include<stdio.h>
int isPrime(int);
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


