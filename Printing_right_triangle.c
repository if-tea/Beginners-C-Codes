#include<stdio.h>
#include<conio.h>

int main() {

    int n, i, j;

    printf("\nEnter the number of rows:");
    scanf("%d", &n);

    for (i = 1;i <= n;i++) {          //Rows

        printf("\t");

        for (j = 1;j <= i;j++) {      //Columns

            printf("*");
        }

        printf("\n");

    }

    return 0;
}
