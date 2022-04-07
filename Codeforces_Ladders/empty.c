
// #include <stdio.h>

// int main(void)
// {

//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);

//         int ones = 0;
//         int zeroes = 0;

//         for (int i = 0; i < n; i++)
//         {
//             int temp;
//             scanf("%1d", &temp);

//             if (temp)
//                 (ones)++;
//             else
//                 (zeroes)++;
//         }

//         if (n & 1)
//         {
//             printf("YES\n");
//         }

//         else
//         {
//             if ((ones == zeroes) || !(ones & 1))
//                 printf("YES\n");
//             else
//                 printf("NO\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n, t;
//     scanf("%d %d", &n, &t);
//     char a[n + 1];
//     for (int i = 0; i != '\0'; i++)
//     {
//         scanf("%c", &a[i]);
//         for ( i = 0; i < n - 2; i++)
//         {
//             if (a[i] == 'B' && a[i + 1] == 'G')
//             {
//             int temp;
//                 temp = a[i];
//                 a[i] = a[i+1];
//                 a[i+1] = temp;
//             }
//         }
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     int n;
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%d", &n);
//         int fact = 1;
//         for (int j = 1; j <= n; j++)
//         {
//             fact = fact * j;
//         }
//         printf("%d\n",fact);
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int t ;
//     scanf("%d",&t);
//     for (int i = 0; i < t; i++)
//     {
//         int r , s;
//         scanf("%d %d",&r,&s);
//         if (r%2==0 && s%2==0)
//         printf("%d\n",(s/2)*(r/2));
//         else if (r%2!=0 && s%2!=0)
//         printf("%d\n",(((s-1)/2)+1)*(((r-1)/2)+1));
//         else if (r%2==0 && s%2!=0)
//         printf("%d\n",((((s-1)/2)+1)*(r/2)));
//         else if (r%2!=0 && s%2==0)
//         printf("%d\n",(s/2)*((((r-1)/2)+1)));

//     }
// }

// #include<stdio.h>
// int main(void)
// {
//     int t ;
//     scanf("%d",&t);
//     for (int i = 0; i < t; i++)
//     {
//         int a , b , c , d , e;
//         scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//         if (a+b<=d && c<=e || b+c<=d && a<=e || a+c<=d && b<=e)
//         printf("YES\n");
//         else
//         printf("NO\n");

//     }
// }

// C Program to demonstrate that we can access a global
// variable if we have a local variable with same name
#include <stdio.h>

// Global variable x

int main()
int x = 50;
{
	// Local variable x
	int x = 10;
	{
		extern int x;
		printf("Value of global x is %d\n", x);
	}
	printf("Value of local x is %d\n", x);
	return 0;
}
