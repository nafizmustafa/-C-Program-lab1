
#include<stdio.h>
int main()
{
    float X1,Y1,X2,Y2,difference;
    scanf("%f%f%f%f",&X1,&Y1,&X2,&Y2);
    difference = sqrt( (X2-X1)*(X2-X1) + (Y2-Y1)*(Y2-Y1) );
    if (difference<=10 && difference!=0)
      {
        printf("Near");
    }else if(difference>=10)
      {
        printf("Far");
}
if(difference==0)
{
    printf(" ");
}
}
