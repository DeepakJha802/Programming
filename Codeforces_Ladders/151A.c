#include<stdio.h>
int main(void)
{
    int n , k , l , c , d , p , nl , np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int total_amount_drink , enough_toasts , limes_enough , toasts_and_salt;
    total_amount_drink = k*l;
    enough_toasts = total_amount_drink / nl;
    limes_enough = c*d;
    toasts_and_salt = p / np;
   int  enough_toasts_1 = enough_toasts / n;
   int  limes_enough_2 = limes_enough / n;
   int toasts_and_salt_3 = toasts_and_salt / n;
    if (enough_toasts_1<limes_enough_2 && enough_toasts_1<toasts_and_salt_3)
    printf("%d",enough_toasts_1);
    else if(limes_enough_2<enough_toasts_1 && limes_enough_2<toasts_and_salt_3)
    printf("%d",limes_enough_2);
    else if (toasts_and_salt_3<enough_toasts_1 && toasts_and_salt_3<limes_enough_2)
    printf("%d",toasts_and_salt_3);
    else if (((enough_toasts_1==limes_enough_2)<toasts_and_salt_3) || ((toasts_and_salt_3==enough_toasts_1)>limes_enough_2))
    printf("%d",toasts_and_salt_3);
    else if(((toasts_and_salt_3==enough_toasts_1)<limes_enough_2) || ((limes_enough_2==enough_toasts_1)>toasts_and_salt_3))
    printf("%d",limes_enough_2);
    else if(((toasts_and_salt_3==limes_enough_2)<enough_toasts_1) || ((enough_toasts_1==toasts_and_salt_3)>limes_enough_2))
    printf("%d",enough_toasts_1);
}
