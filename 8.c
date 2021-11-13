#include<stdio.h>
int main(){
    int num,i,j;
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
        {

        for(j=1;j<=num-i;j++)
            {
            printf(" ");
            }// end 2nd for
        for(j=1;j<=i;j++)
        {
            printf("*");
        }// end 3rd for
        printf("\n");

       }//end 1st for
}
