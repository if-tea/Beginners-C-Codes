
#include <stdio.h>

int prime(int x);

int main(){

 int n;

 printf("Enter a number:");
 scanf("%d", &n);
 prime(n);


 return 0;
}

int prime(int x){


    for(int i=2; i < x; i++){
        if(x%i==0){
        printf("%d is not prime", x);
        return x;
        }
    }
        printf("%d is prime", x);
        return x;
}

