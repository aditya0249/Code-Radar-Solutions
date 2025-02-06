#include <stdio.h>

int main() {
    int totalrows;
    scanf("%d",&totalrows);
    for(int row=1; row<=totalrows; row++){
        for(int space=0; row<totalrows-row; space++){
            printf(" ");
        }
        for(int pattern=0; pattern<row; pattern++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}