#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("1.Pizza, Rs 239\n2.Burger, Rs 129\n3.Pasta, Rs 179\n4.French Fries, Rs 99\n5.Sandwich, Rs 149\n Enter your Choice:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("you have chosen a Pizza\n Your bill is Rs239");
            break;
        case 2:
            printf("you have chosen a Burger\n Your bill is Rs129");
            break;
        case 3:
            printf("you have chosen a Pasta\n Your bill is Rs179");
            break;
        case 4:
            printf("you have chosen a French Fries\n Your bill is Rs99");
            break;
        case 5:
            printf("you have chosen a Sandwich\n Your bill is Rs149");
            break;
        default :
            printf("Enter a valid choice");



    }
    return 0;
}
