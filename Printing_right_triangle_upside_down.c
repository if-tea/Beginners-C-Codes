#include<stdio.h>
#include<conio.h>

int main(){

    int n,i,j;

    printf("\nEnter the number of rows:");
    scanf("%d", &n);
    printf("\n");

    for(i=1;i<=n;i++){

        printf("\t");

        for(j=n;j>=i;j--){

            printf("*");
        }

        printf("\n");
    }


}
