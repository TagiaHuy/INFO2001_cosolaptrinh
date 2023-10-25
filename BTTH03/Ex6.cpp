#include <stdio.h>

int main() 
{
	int n,dc,dl;
	scanf("%d",&n);
	dc = dl = 0;
	while (n>0) {
		int i = (n - n/10*10);
		if (i % 2 == 0) {
			dc += 1;
		} else {dl += 1;};
		n = n/10;
	}
	if (dc == dl) {
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}

