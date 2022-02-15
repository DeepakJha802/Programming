
# include <stdio.h>
#include<math.h>
int main() {
	int a, rem, sum = 0;
	scanf("%d", &a);
	while (a--) {

		int n;
		scanf("%d", &n);
		while(n!=0) {
			rem = n % 10;
			sum = sum * 10 + rem;
			n = n / 10;
		}
		printf("%d\n", sum);
		sum = 0;

		}
	return 0;

	}

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
