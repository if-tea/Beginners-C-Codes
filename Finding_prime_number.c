#include<stdio.h>
#include<math.h>

int main(){

    int num,i,m=0,flag=0;

    printf("Enter the number to check prime:");
    scanf("%d",&num);

    //m=num/2;

    m=sqrt(num);

    for(i=2;i<=m;i++){

    if(num%i==0){

    printf("\n%d is not a prime", num);
    flag=0;
    break;

    }

   }

    if(flag==1)
    printf("\n%d is a prime", num);

    return 0;
}
