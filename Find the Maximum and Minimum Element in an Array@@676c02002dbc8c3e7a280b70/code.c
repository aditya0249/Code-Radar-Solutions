#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }
    int large=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    printf("%d %d",arr[0],large);
}