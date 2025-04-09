#include<stdio.h>

int main(){
    int n,num=0,count,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0; i<n; i++){
        count=0;
        num=arr[i];
        for(int j=0; j<n; j++){
            temp=arr[j];
            if(j){
                if(num==temp){
                count++;
                continue;
                }
            }
            else if(num==arr[j]){
                count++;
            }

        }
        printf("%d %d",num,count);
        printf("\n");
    }
}