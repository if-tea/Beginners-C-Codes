#include<stdio.h>

int main(){

    int a,b,remaider;

    printf("Enter 1st integers:");
    scanf("%d", &a);
    printf("Enter 2nd integers:");
    scanf(" %d", &b);


    int p=a;
    int q=b;

    while(b>0){


        remaider=a%b;
        a=b;
        b=remaider;
    }

    printf("\n\nGCD of %d and %d : %d", p,q,a);

    return 0;
}
