#include<stdio.h>

int main(){
	int n;
	printf("Input value of n: ");
	scanf("%d", &n);
	
	if(n % 3 == 0 && n % 5 ==0){
		printf("1");
	} else {
		printf("0");
	}
	return 0;
}