#include<stdio.h>
int main(){
    int n,num=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        num=arr[i+1];
        if(arr[i]<num && arr[i+2]<num){
            break;
        }
    }
    if(num){
        printf("%d",num);
    }
    else{
        printf("%d",-1);
    }
}