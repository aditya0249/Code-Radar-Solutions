#include<stdio.h>
int main(){
    int n,num=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        if(i){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            num=num=arr[i];
            break;
        }
        }
    }
    if(arr[n-1]>arr[n-2]){
        num=arr[n-1];
        }
        
        
    
    if(num){
        printf("%d",num);
    }
    else{
        printf("%d",-1);
    }
}