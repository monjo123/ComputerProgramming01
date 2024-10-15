#include<stdio.h>
#include<stdint.h>

int32_t main(){

	int32_t num, rnum;

	printf("Please enter an unsigned 16-bits number: ");
	scanf("%d", &num);

	printf("Before Flip:\n");
	printf("%d_10 = %o_8\n", num, num);	
	
	int32_t en = 0, cnt = 0;

	if(num){
		en *= 10;
		en += num % 8;
		num /= 8;
		cnt += (num != 0);
	}
	if(num){
		en *= 10;
		en += num % 8;
		num /= 8;
		cnt += (num != 0);
	}
	if(num){
		en *= 10;
		en += num % 8;
		num /= 8;
		cnt += (num != 0);
	}
	if(num){
		en *= 10;
		en += num % 8;
		num /= 8;
		cnt += (num != 0);
	}
	if(num){
		en *= 10;
		en += num % 8;
		num /= 8;
		cnt += (num != 0);
	}
	if(num){
		en *= 10;
		en += num % 8;
		num /= 8;
		cnt += (num != 0);
	}

	// printf("%d\n", en);
	// printf("%d\n", cnt);
	
	int32_t k = 1;
	rnum = 0;
	
	if(cnt-- >= 0){
		rnum += en % 10 * k;
		en /= 10;
		k *= 8;
	}
	// printf("%o\n", rnum);
	// printf("%o\n", k);
	if(cnt-- >= 0){
		rnum += en % 10 * k;
		en /= 10;
		k *= 8;
	}
	// printf("%o\n", rnum);
	// printf("%o\n", k);
	if(cnt-- >= 0){
		rnum += en % 10 * k;
		en /= 10;
		k *= 8;
	}
	// printf("%o\n", rnum);
	// printf("%o\n", k);
	if(cnt-- >= 0){
		rnum += en % 10 * k;
		en /= 10;
		k *= 8;
	}
	// printf("%o\n", rnum);
	// printf("%o\n", k);
	if(cnt-- >= 0){
		rnum += en % 10 * k;
		en /= 10;
		k *= 8;
	}
	// printf("%o\n", rnum);
	// printf("%o\n", k);
	if(cnt-- >= 0){
		rnum += en % 10 * k;
		en /= 10;
		k *= 8;
	}
	// printf("%o\n", rnum);
	// printf("%o\n", k);

	printf("After Flip:\n");
	printf("%o_8 = %d_10\n", rnum, rnum);

	return 0;
}

