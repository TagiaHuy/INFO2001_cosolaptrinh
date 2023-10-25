#include <stdio.h>

int main() 
{
	int n,i,s;
	scanf("%d",&n);
	s = 0;
	i = 1;
	while (i <= n) {
		s += i*i;
		i ++;
	}
	printf("%d",s);
	return 0;
}

