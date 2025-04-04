#include<stdio.h>
int main(){
    int num,k;
    int arr[num];
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int temp=num+k;
    arr[temp];
    int n_num=num-1;
    int t_temp=temp-1;
    for(int j=t_temp; j>=0; j--){
        arr[t_temp]=arr[n_num];
        n_num--;

    }
    int diff=num-k;
    for(int l=0; l<k; l++){
        arr[0]=arr[diff];
        diff++;
    }
    for(int y=0; y<temp; y++){
        printf("%d\n",arr[y]);
    }
    

}