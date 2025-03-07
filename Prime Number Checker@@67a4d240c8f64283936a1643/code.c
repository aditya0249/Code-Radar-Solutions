#include<stdio.h>
int isPrime(int);
int isPrime(int n){
    int flag=0;
    if(n>=2){
        for(int i=2; i<n; i++){
            if(i%2==0){
                flag=1;
                return 0;
                
            }
        }
        if(flag){
            return 1;
        }
    }
}


