#include<stdio.h>
#include<stdint.h>

int32_t main(){

	int32_t num, op;
	printf("Please input a hex:");
	scanf("%X", &num);
	printf("Please choose the output type(1:integer ,2:unsigned integer ,3:float):");
	scanf("%d", &op);
	
	// printf("%d\n", num);
	
	int32_t n = num, cnt = 0;
	int32_t b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16;

	b16 = n % 2;
	if(b16) cnt = 0;
	n /= 2;
	b15 = n % 2;
	if(b15) cnt = 1;
	n /= 2;
	b14 = n % 2;
	if(b14) cnt = 2;
	n /= 2;
	b13 = n % 2;
	if(b13) cnt = 3;
	n /= 2;
	b12 = n % 2;
	if(b12) cnt = 4;
	n /= 2;
	b11 = n % 2;
	if(b11) cnt = 5;
	n /= 2;
	b10 = n % 2;
	if(b10) cnt = 6;
	n /= 2;
	b9 = n % 2;
	if(b9) cnt = 7;
	n /= 2;
	b8 = n % 2;
	if(b8) cnt = 8;
	n /= 2;
	b7 = n % 2;
	if(b7) cnt = 9;
	n /= 2;
	b6 = n % 2;
	if(b6) cnt = 10;
	n /= 2;
	b5 = n % 2;
	if(b5) cnt = 11;
	n /= 2;
	b4 = n % 2;
	if(b4) cnt = 12;
	n /= 2;
	b3 = n % 2;
	if(b3) cnt = 13;
	n /= 2;
	b2 = n % 2;
	if(b2) cnt = 14;
	n /= 2;
	b1 = n % 2;
	if(b1) cnt = 15;
	n /= 2;

 	printf("Binary of %X is: %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n", num, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16);

	if(op == 1){
		if(b1){
			int32_t k = 1, sum = 0;	
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			if(cnt--){
				sum += k;
				k *= 2;
			}
			num -= k;
			sum -= num - 1;
			printf("Converted integer is: %d\n", -sum);
		}else printf("Converted integer is: %d\n", num);
	}else if(op == 2) printf("Converted unsigned integer is: %d\n", num);
	else if(op == 3){
		if(b2 == 0 && b3 == 0 && b4 == 0 && b5 == 0 && b6 == 0 && b7 == 0 && b8 == 0 && b9 == 0 && b10 == 0 && b11 == 0 && b12 == 0 && b13 == 0 && b14 == 0 && b15 == 0 && b16 == 0){
			printf("Converted float is: ");
			printf(b1 ? "-0.0\n" : "0.0\n");
		}else if(b2 == 1 && b2 == b3 && b3 == b4 && b4 == b5 && b5 == b6){
			printf("Converted float is: ");
			printf((b1 ? "-INF\n" : "INF\n"));
		}else{
			double a = 1;
			int32_t b = 0;
			if(b2) b += 16;
			if(b3) b += 8;
			if(b4) b += 4;
			if(b5) b += 2;
			if(b6) b += 1;
			if(b7) a += 1.0/2;
			if(b8) a += 1.0/4;
			if(b9) a += 1.0/8;
			if(b10) a += 1.0/16;
			if(b11) a += 1.0/32;
			if(b12) a += 1.0/64;
			if(b13) a += 1.0/128;
			if(b14) a += 1.0/256;
			if(b15) a += 1.0/512;
			if(b16) a += 1.0/1024;
			printf("Converted float is: %.6f*2^%d\n", (b1 ? -a : a), b - 15);
		}
	}

	return 0;
}

