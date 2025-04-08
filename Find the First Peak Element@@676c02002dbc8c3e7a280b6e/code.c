#include<stdio.h>
int main(){
    int n,num=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int last=arr[n-1];

    for(int i=0; i<n; i++){
        if(i){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            num=num=arr[i];
            break;
        }
        }
        
    }
    if(num){
        printf("%d",num);
    }
    else{
        printf("%d",-1);
    }
}