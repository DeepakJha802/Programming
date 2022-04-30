
#include<stdio.h>
#include<math.h>

int main(void)
{
	int t, n, p;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		p = pow(2, n);
		printf("%d\n", --p);
	}
}
