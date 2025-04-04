#include<stdio.h>
int fibonacciSeries(int);
int fibonacciSeries(int num){
    if(num==1){
        printf("%d",0);
    }
    else{
        int a=0,b=1,temp=0;
        for(int i=0; i<num-2; i++){
           temp=b;
           b+=a;
           a=temp;
           printf("%d ",b); 
        }
    }
}
