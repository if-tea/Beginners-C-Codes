#include <stdio.h>

int main(){

    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
    printf("Vowel");

    else
    printf("Consonant");

    return 0;

}

