#include<stdio.h>

int main(){
    int n,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {  // Outer loop should go up to n-1
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop should go up to n-i-1
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int n_temp=0,flag;
    for(int i=0; i<n; i++){
        flag=0;
        n_temp=arr[0];
        if(n_temp==arr[i]){
            flag=1;
        }
    }
    if(flag){
        printf("%d",-1);
    }
    else{
    printf("%d",arr[n-2]);}
}