#include<stdio.h>

int main(){

    int n,row,col;

    printf("Enter a number= ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(row=1;row<=n;row++){

            for(col=1;col<=row;col++){
            printf("*");

        }
        printf("\n");
    }
        for(row=n-1;row>=1;row--){

            for(col=1;col<=row;col++){
            printf("*");

        }
        printf("\n");
    }

  }
  return 0;
}
