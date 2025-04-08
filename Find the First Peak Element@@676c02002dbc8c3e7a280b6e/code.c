#include<stdio.h>
int main(){
    int n,num=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    large=arr[1];
    for(int i=0; i<n; i++){
        num=arr[i+1];
        if(arr[i]<num && arr[i+2]<num){
            break;
        }
    }
    printf("%d",num);
}