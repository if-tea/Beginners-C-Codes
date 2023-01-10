#include <stdio.h>

int Prime(int i,int num);

int main(){

    int num,i;

    printf("Enter a number:");
    scanf("%d", &num);

    Prime(i=2,num);

    return 0;
}

int Prime(int i, int num){
    if(i==num){
        printf("%d is a Prime Number.", num);
        return 0;
    }
    else if(num%i==0){
        printf("%d is not a Prime Number.", num);
            return 0;
    }
    else{
        return Prime(i+1,num);
    }
}
