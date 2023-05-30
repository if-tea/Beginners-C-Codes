#include<stdio.h>
#include<conio.h>

int main(){

    char low, up;
    char l,u;

    printf("\nEnter the Lowercase character:");
    scanf("%c", &low );
    printf("\nEnter the Uppercase character:");
    scanf(" %c", &up);

    l= low-32;
    u= up+32;

    printf("\nThe Uppercase of %c is %c", low, l);
    printf("\nThe Lowercase of %c is %c", up, u);

    return 0;
}
