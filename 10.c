#include<stdio.h>
int main(){
    int num,i,j;
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        {

    for(j=1;j<=i;j++)
        {
        printf("%d",(j+i)%2);
        }// 2nd for end
    printf("\n");
        }//1st for end
return 0;
}
