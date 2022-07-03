#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    char arr[n][m];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            scanf("%c",&arr[i][j]);
        }
    }

    int s = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (arr[i][j] == 'W' || arr[i][j] == 'B' || arr[i][j] == 'G')
                s++;
        }
    }
    if (s == (n * m))
        printf("#Black&White");
    else
        printf("#Color");
}

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int x;
//         scanf("%d", &x);
//         if (x % 3 ==0 )
//         printf("NORMAL\n");
//         else if(x % 3 == 1 )
//         printf("HUGE\n");
//         else if (x % 3 == 2)
//         printf("SMALL\n");
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int x , y , z ;
//         scanf("%d %d %d",&x,&y,&z);
//         int minimum_time  ;
//         minimum_time = y / x ;
//         if (minimum_time < z )
//         printf("%d\n",(z-minimum_time));
//         else
//         printf("0\n");
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         int count = 0;
//         for (int i = 1; i < n; i++)
//         {
//             if ((arr[0] + arr[i + 1]) > (arr[0] * arr[i + 1]))
//                 count++;
//         }
//         printf("%d\n", count);
//     }
// }

#include <stdio.h>
int main(void)
{
    int i = 0;
    int n1;
    scanf("%d",n1);
    int A[n1];
    for (i = 0; i < n1; i++)
    {
        scanf("%d",&A[i]);
    }
    int ans = solve(A , n1);
    printf("%d\n",ans);
}
int solve(int *A, int n1)
{

    int day = 0, sol = 0 , count = 1 , loop = 0;
    while((count - 1) != n1)
    {
        sol = sol + count;
        day = day + 1;
        for(i = 0; i < n1; i++)
        {
            if(sol >= A[i])
            {
                count++;
                sol = 0;
                loop = loop + 1;
            }
        }
    }
    return day;
}
