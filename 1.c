#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter two value : ");
    scanf("%d%d",&a,&b);
    printf("Press 1 for addition\n");
    printf("Press 2 for substraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Press 5 for modulo\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Add= %d", a+b);
        break;
        case 2: printf("Sub= %d", a-b);
        break;
        case 3: printf("Multi= %d", a*b);
        break;
        case 4: printf("Div= %d", a/b);
        break;
        case 5: printf("Modulo= %d", a%b);
        break;

    }//end switch
}
