#include<stdio.h>

int main(){
    int n,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i+1]>arr[i]){
            continue;
        }
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
        

    }
    printf("%d %d\n",arr[0],arr[n-1]);
}