#include<stdio.h>
#include<conio.h>

int main(){

    int n,i,j;

    printf("\nEnter the number of rows:");
    scanf("%d", &n);
    printf("\n");

    for(i=n;i>=1;i--){            //Rows

        printf("\t");

        for(j=1;j<=n-i;j++){     //Space

            printf(" ");
        }

        for(j=1;j<=2*i-1;j++){   //Columns

            printf("^");
        }

    printf("\n");

    }

    return 0;
}
