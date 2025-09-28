#include <stdio.h>

int main(){

    char a;
    int b;

    printf("Enter the gender : ");
    scanf("%c", &a);

    printf("Enter the age : ");
    scanf("%d", &b);

    if ( a == 'm' || a == 'M')
    {
        if ( b >= 90)
        {
            printf(" pension is Rs. 4000 ");
        }
        else if ( b >= 60)
        {
            printf(" pension is Rs. 6000 ");
        }
        else
        {
            printf(" pention is Rs. 0");
        }
    }

    else if ( a == 'f' || a == 'F')
    {
        if ( b >= 90)
        {
            printf("pention is Rs. 3000");
        }
        else if ( b >= 60)
        {
            printf("pention is Rs. 5000");
        }
        else{
            printf("pention is Rs. 0");
        }
    }
    else
    {
        printf("Enter the vailed gender M/F ");
    }
    
    return 0;
    
}