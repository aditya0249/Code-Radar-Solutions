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
        if(arr[i]!=last){
        if(arr[i]<arr[i+1] && arr[i+2]<arr[i+1]){
            num=num=arr[i+1];
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