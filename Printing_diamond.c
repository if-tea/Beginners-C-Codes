#include<stdio.h>
#include<conio.h>

int main (){

    int n,m,k,i,j;

    printf("Enter the number of rows:");
    scanf("%d", &k);

    if(k%2==0){
     n= k/2;
    }else{
     n= k/2+1;
    }

    if(k%2==0){
     m= k-(n+1);
    }else{
     m= k-n;
    }


     for(i=0;i<=n;i++){

           printf("\t");

        for(j=1;j<=n-i;j++){     //Space

            printf(" ");
        }

        for(j=1;j<=2*i-1;j++){   //Columns

            printf("*");
        }
        printf("\n");

     }

     for(i=m;i>=1;i--){

            printf("\t");

        for(j=1;j<=n-i;j++){     //Space

            printf(" ");
        }

        for(j=1;j<=2*i-1;j++){   //Columns

            printf("*");

        }
        printf("\n");

     }

    return 0;
}
