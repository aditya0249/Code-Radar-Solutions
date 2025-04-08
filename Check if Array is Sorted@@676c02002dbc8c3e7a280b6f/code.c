#include<stdio.h>
int main(){
    int num,n,count=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        n=arr[i];
        if(arr[i+1]>n){
            count++;
        }
    }
    if(count==num){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}