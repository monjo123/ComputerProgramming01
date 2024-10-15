#include<stdio.h>
#include<stdint.h>

int32_t main(){

	int32_t a, b, c, sum, x, y, z;

	printf("Please enter the first  operand: ");
	scanf("%dx%d", &a, &b);
	printf("Please enter the second operand: ");
	scanf("%*[^0-9]%dz", &c);
	printf("Please enter the sum           : ");
	scanf("%d", &sum);
	
	// printf("a : %d\nb : %d\nc : %d\n", a, b, c);

	if(a / 10 || b / 10 || c / 10){
		printf("ERROR!!STOP DOING SOMETHING STUPID!!\n");
		return 0;
	}

	z = (sum % 10) - b;
	if(z < 0){
		z += 10;
		sum -= 10;
	}
	sum /= 10;

	x = (sum % 10) - c;
	if(x < 0){
		x += 10;
		sum -= 10;
	}
	sum /= 10;

	y = (sum % 10) - a;
	if(y < 0){
		y += 10;
		sum -= 10;
	}
	sum /= 10;

	printf("Ans: x = %d, y = %d, z = %d\n", x, y, z);

	return 0;
}

