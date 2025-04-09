#include<stdio.h>
int main(){
    int n,k,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int n_arr[k],c=n-(k+1);
    int t=n-k;
    for(int i=0; i<k; i++){
        n_arr[i]=arr[t];
        t++;
    }
    for(int i=0; i<k; i++){
        for(int j=c j>count; j--){
            arr[j+1]=arr[j];
        }
        c++;
        count++;
    }
    for(int i=0; i<k; i++){
        arr[i]=n_arr[i];
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}