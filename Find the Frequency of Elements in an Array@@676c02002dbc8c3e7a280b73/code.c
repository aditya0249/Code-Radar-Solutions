#include<stdio.h>

int main(){
    int n,num=0,c,i=0;
    scanf("%d",&n);
    int arr[n],n_arr[];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
    c=1;
    num=arr[i];
    if(arr[i]!=-1){
    for(int j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
            c++;
            arr[j]=-1
        }
    }
    }
    n_arr[i]=c;
    i++;
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=-1){
            printf("%d %d\n",arr[i],n_arr[i]);
        }
    }
}