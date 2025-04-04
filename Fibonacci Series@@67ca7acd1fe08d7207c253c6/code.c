#include<stdio.h>
int fibonacciSeries(int);
int fibonacciSeries(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return fibonacciSeries(num-1)+fibonacciSeries(num-2);
    }
}
