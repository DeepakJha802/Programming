// // #include <stdio.h>
// // #include <stdlib.h>
// // int main(void)
// // {
// //     int *num;
// //     int i, n, max, min;
// //     int findmax(int *, int, int);
// //     int findmin(int *, int, int);
// //     printf("Enter the number of terms needed:");
// //     scanf("%d", &n);
// //     num = (int *)malloc(n * sizeof(int));
// //     for (i = 0; i < n; i ++)
// //     {
// //         printf("Enter %dth term:", i +1 );
// //         scanf("%d", &num[i]);
// //     }

// //     max = findmax(num, n, i);

// //     min = findmin(num, n, i);

// //     printf("The highest value is %d and the lowest value if %d", max, min);
// //     return 0;
// // }

// // int findmax(int*value, int n, int i)
// // {
// // int max = value[0];

// // for (i = 1; i < n; i++)

// // {

// //     if (value[i] > max)
// //     {
// //         max = value[i];
// //     }
// // }
// // return max;
// // }

// // int findmin(int*value,int n,int i)
// // {
// // int min = value[0];

// //  for (i = 1; i < n; i++)
// // {
// //     if (value[i] < min)
// //     {
// //         min = value[i];
// //     }
// // }

// // return min;
// // }

// #include<stdio.h>
// int main(void)
// {
//    int n;
//    printf("Enter 1 If you passed in both subject math and science otherwise 0 : \n");
//    scanf("%d",&n);
//    if(n==1)
//    printf("You Will Get Rs 50 As a Gift.");
//    else if(n == 0)
//    printf("You Will Get Rs 20 As a Gift. ");
//    else
//    printf("Enter The Valid Input.");
// }

#include<stdio.h>
int main (void)
{
   int n,s=0;
   do{
   printf("Enter the number : ");
   scanf("%d",&n);
   s=s+n;
   }while(n!=0);
   printf("Sum Is %d : ",s);

}
