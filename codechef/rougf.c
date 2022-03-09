// #include <stdio.h>
// int main(void)
// {
//     int n, m, b;
//     printf("Enter the no of block : ");
//     scanf("%d", &n);
//     printf("Enter the no of blockframes : ");
//     scanf("%d", &m);
//     printf("Enter the no of words per block/blockframes : ");
//     scanf("%d", &b);
//     for (int k = 0; k < n; k++)
//     {
//         int i, j,l ;
//         for (int l = 0; l < m; l++)
//         {
//             if (k % m == l)
//             i = l;
//             j = k;
//         }
//         // printf("i \t\t j \n\n %d %d",l,k);
//     }
// }
// // Enter the number of blocks: 16
// // Enter the number of blockframes: 4
// // Enter the number of words per block/blockframe: 2

// // i   j

// // 0   0  4  8  12
// // 1   1  5  9  13
// // 2   2  6  10  14
// // 3   3  7  11  15

#include <stdio.h>

int main(void) {
	// your code goes here
	int t ;
    scanf("%d",&t);
    for(int i=0 ; i< t; i++)
    {
      int x , y ;
      scanf("%d %d",&x,&y);
    printf("%d\n",10*x+y*5);
    }
	return 0;
}

