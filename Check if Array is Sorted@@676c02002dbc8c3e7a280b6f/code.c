#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<num; i++){
        if(arr[i+1]>=arr[i]){
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