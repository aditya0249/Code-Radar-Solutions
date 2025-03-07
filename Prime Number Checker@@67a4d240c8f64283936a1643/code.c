#include<stdio.h>
int isPrime(int);
int isPrime(int n){
    
    if(n==2){
        return 1;
        
    }
    else if(n>2){
        for(int i=2; i<n; i++){
            if(n%i==0){
                
                return 0;
                
            }
            
        }
        return 1;
        
    }
}


