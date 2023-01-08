
#include<stdio.h>
#include<math.h>

int main(){

    int num, test, remainder, memory=0;


    printf("Enter a number:");
    scanf("%d", &num);
    test= num; //Storing the input value to another variable for later check

    while(num>0){

        remainder=num%10; 
        memory=(memory*10)+remainder;
        num=num/10;
    }

    printf("Reversed: %d", memory);

    if(test==memory)
        printf("\n\n%d is a palindrome number.", test);
    else
        printf("\n\n%d is not a Palindrome number.", test);

    return 0;
}
