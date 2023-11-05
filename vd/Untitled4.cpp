#include <stdio.h>
#include <math.h>
int test_square_number(int n){
	float a = sqrt((float) n);
	if (a - int(a) == 0){
		return 1;
	}
	return 0;
}

void count_square_numbers(int n){
	for (int i = 1; i <= n; i++){
		//printf("%d \n",i);
		if (test_square_number(i)){
			printf("%d \n",i);
		}
	}
}

int main(){
	int n;
	printf("nhap n:");
	scanf("%d", &n);
	count_square_numbers(n);
	//printf("%d \n",test_prime_numbers(n));
	return 0;
}
