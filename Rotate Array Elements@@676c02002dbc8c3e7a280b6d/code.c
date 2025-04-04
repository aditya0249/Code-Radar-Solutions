#include<stdio.h>

int main(){
    int num,k;
    scanf("%d",&num);
    int arr[num];
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int n_arr[k];
    arr[num+k];
    int temp=num-k;
    for(int i=0; i<k; i++){
        n_arr[i]=arr[temp];
        temp++;
    }
    int count=num-(k+1);
    for(int i=0; i<k; i++){
        for(int j=count; j>=0; j--){
            arr[j+1]=arr[j];
        }
        count++;
    }
    for(int i=0; i<k; i++){
        arr[i]=n_arr[i];
    }
    
    for(int k=0; k<num; k++){
        printf("%d\n",arr[k]);

    }
}