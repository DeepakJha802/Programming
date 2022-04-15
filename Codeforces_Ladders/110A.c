#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number_of_lucky_digits = 0;

    int c;
    while (((c = getchar()) != '\n') && (c != EOF))
    {
        if (((c - '0') == 4) || ((c - '0') == 7))
            (number_of_lucky_digits)++;
    }
/*
    bool number_of_lucky_digits_is_lucky = true;

    do
    {
        int current_digit = (number_of_lucky_digits % 10);

        if ((current_digit != 4) && (current_digit != 7))
        {
            number_of_lucky_digits_is_lucky = false;
            break;
        }

        number_of_lucky_digits /= 10;
    }
    while (number_of_lucky_digits);
*/

    // Since the maximum value of n is 10^18, therefore the number of lucky digits can never be 44, 47, 74, 77, etc.
    if ((number_of_lucky_digits == 4) || (number_of_lucky_digits == 7))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}




// #include<stdio.h>
// int main(voi)
// {
//     int n;
//     scanf("%d",&n);
//     for (int  i = 0; i < n; i++)
//     {
//         int a,b,c,d;
//         scanf("%d %d %d %d",&a,&b,&c,&d);
//         if((a>d && b>d && c>d) || (a==d && b==d && c==d))
//         printf("3");
//         else if((a<d && b<d && c<d) && a+b+c<=d)
//         {
//             printf("1");
//         }
//         else if(a)

//     }

// }

