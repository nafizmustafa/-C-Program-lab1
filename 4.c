#include<stdio.h>
int main(){
    int i=1,factorial=1,num;
    printf("Positive Number: ");
    scanf("%d",&num);
    while (i<=num)
        {
        factorial = factorial * i;
    i++;
        }// end while
    printf("%d\n",factorial);
}
