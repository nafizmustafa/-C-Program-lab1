#include<stdio.h>
 int main()
{
   int a,b,num,constant;
   float sum=0;
    printf("Input: ");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
     {
  if(a!=num)
    printf("1+1/%d!+",a);
    else printf("1+1/%d!=\n",a);
     constant=1;
    for(b=1;b<=a;b++)
    {
    constant *= b;
    }
    sum=sum+1.0/constant;
     }
    printf("%f",1+sum);

}
