#include <stdio.h>
int area(float a){
	#define PI 3.14
	float area;
	area = a*a*PI;
	printf("area is %f \n", area);
	return 0;
}

int perimeter(float a){
	#define PI 3.14
	float perimeter;
	perimeter = a*2*PI;
	printf("perimeter is %f \n", perimeter);
	return 0;
}

int main(){
	float a;
	printf("input radius:");
	scanf("%f", &a);
	area(a);
	perimeter(a);
	return 0;
}
