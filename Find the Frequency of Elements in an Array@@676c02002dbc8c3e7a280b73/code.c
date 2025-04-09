#include<stdio.h>

int main(){
    int n,num=0,count,temp,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0; i<n; i++){
        count=0;
        num=arr[i];
        for(int j=0; j<n; j++){
            
            if(num==arr[j]){
                count++;
            }
            for(int i=c; i<=c; i++){
                printf("%d %d\n",arr[i],count);
            }
            c++;

        }
        printf("%d %d",num,count);
        printf("\n");
    }
}