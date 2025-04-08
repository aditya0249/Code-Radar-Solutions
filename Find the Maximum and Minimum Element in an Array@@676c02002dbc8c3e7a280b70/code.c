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
            if(arr[j+1]>arr[j]){
            continue;
        }
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
        

    }
    printf("%d %d\n",arr[0],arr[n-1]);
}