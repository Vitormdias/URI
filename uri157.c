#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int i , n , d;
	scanf("%d" , &n);
	for(i = 1; i <= n ; i++)
	{
		if((n % i) == 0)
			printf("%d\n" , i);
		
	}
	return 0;
}