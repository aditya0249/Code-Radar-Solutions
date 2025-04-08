#include<stdio.h>
int main(){
    int num,n,flag;
    scanf("%d",&num);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        flag=0;
        n=arr[i];
        if(arr[i+1]>n){
            flag=1;
        }
    }
    if(flag){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}