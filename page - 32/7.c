#include <stdio.h>

int main(){
    int num;

    printf("Enter the year : ");
    scanf("%d", &num);

    if (num % 4 == 0)
    {
        printf("This is leap year : %d \n",num);
    }
    else{
        printf("This year not a leap year : %d",num);
    }
    
}