// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(void)
// {
//     char c[101];
//     scanf("%c",c);
//     int l = strlen(c);
//     int upp = 0, low;
//     for (int i = 0; c[i] !='\0'; i++)
//     {
//         if (c[i] >= 65 && c[i] <= 96)
//             upp++;
//     }
//     low = l - upp;
//     if (upp > low)
//     {
//         char s[100];
//         s[100] = toupper(c);
//         printf("%s", s);
//     }
//     else
//     {
//         char s[100];
//         s[100] = tolower(c);
//         printf("%s",s);
//     }
// }

#include <stdio.h>

 int main (void)
 {
     int n;
     scanf("%d",&n);
         int exit = 0 , enter = 0;
     for (int i = 1; i <= n; i++)
     {
         int a , b;
         scanf("%d %d",&a,&b);
         exit = (exit + b) - a;
    }
         printf("%d\n",exit);
 }
