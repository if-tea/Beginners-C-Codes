//Simplest way of finding prime number

#include<stdio.h>
#include<math.h>

int main(){

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=2; i<=sqrt(n); i++){

        if(n%i==0){
            printf("\n\n%d is not a prime number", n);
            return 0;
        }
    }
    printf("\n\n%d is a prime number", n);

    return 0;
}

