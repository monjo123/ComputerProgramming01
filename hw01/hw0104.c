#include<stdio.h>
#include<stdint.h>

int32_t main(){

	int32_t a = 0;
	int32_t b = 0;
	int32_t c = 0;
	int32_t d = 0;
	int32_t e = 0;
	int32_t f = 0;
	int32_t g = 0;
	int32_t h = 0;
	int32_t i = 0;
	int32_t j = 0;
	int32_t k = 0;
	int32_t l = 0;
	int32_t m = 0;
	
	int32_t v, w, x, y, z;
	printf("Please enter 5 cards: ");
	scanf("%d %d %d %d %d", &v, &w, &x, &y, &z);
	if(v < 1 || v > 52 || w < 1 || w > 52 || x < 1 || x > 52 || y < 1 || y > 52 || z < 1 || z > 52){
		printf("ERROR!!THIS IS BECAUSE OF YOU!!FIX IT!!\n");
		return 0;
	}
	switch(v % 13){
		case 1:
			a++;
			break;
		case 2:
			b++;
			break;
		case 3:
			c++;
			break;
		case 4:
			d++;
			break;
		case 5:
			e++;
			break;
		case 6:
			f++;
			break;
		case 7:
			g++;
			break;
		case 8:
			h++;
			break;
		case 9:
			i++;
			break;
		case 10:
			j++;
			break;
		case 11:
			k++;
			break;
		case 12:
			l++;
			break;
		case 0:
			m++;
			break;
	}
	switch(w % 13){
		case 1:
			a++;
			break;
		case 2:
			b++;
			break;
		case 3:
			c++;
			break;
		case 4:
			d++;
			break;
		case 5:
			e++;
			break;
		case 6:
			f++;
			break;
		case 7:
			g++;
			break;
		case 8:
			h++;
			break;
		case 9:
			i++;
			break;
		case 10:
			j++;
			break;
		case 11:
			k++;
			break;
		case 12:
			l++;
			break;
		case 0:
			m++;
			break;
	}
	switch(x % 13){
		case 1:
			a++;
			break;
		case 2:
			b++;
			break;
		case 3:
			c++;
			break;
		case 4:
			d++;
			break;
		case 5:
			e++;
			break;
		case 6:
			f++;
			break;
		case 7:
			g++;
			break;
		case 8:
			h++;
			break;
		case 9:
			i++;
			break;
		case 10:
			j++;
			break;
		case 11:
			k++;
			break;
		case 12:
			l++;
			break;
		case 0:
			m++;
			break;
	}
	switch(y % 13){
		case 1:
			a++;
			break;
		case 2:
			b++;
			break;
		case 3:
			c++;
			break;
		case 4:
			d++;
			break;
		case 5:
			e++;
			break;
		case 6:
			f++;
			break;
		case 7:
			g++;
			break;
		case 8:
			h++;
			break;
		case 9:
			i++;
			break;
		case 10:
			j++;
			break;
		case 11:
			k++;
			break;
		case 12:
			l++;
			break;
		case 0:
			m++;
			break;
	}
	switch(z % 13){
		case 1:
			a++;
			break;
		case 2:
			b++;
			break;
		case 3:
			c++;
			break;
		case 4:
			d++;
			break;
		case 5:
			e++;
			break;
		case 6:
			f++;
			break;
		case 7:
			g++;
			break;
		case 8:
			h++;
			break;
		case 9:
			i++;
			break;
		case 10:
			j++;
			break;
		case 11:
			k++;
			break;
		case 12:
			l++;
			break;
		case 0:
			m++;
			break;
	}
	
	int32_t flush = (v / 13 - (v % 13 == 0) == w / 13 - (w % 13 == 0) && w / 13 - (w % 13 == 0) == x / 13 - (x % 13 == 0) && x / 13 - (x %13 == 0) == y / 13 - (y % 13 == 0) && z / 13 - (z % 13 == 0) == y / 13 - (y % 13 == 0));
	
	// printf("%d\n", flush);

	int32_t vv = (v % 13 ? v % 13 : 13), ww = (w % 13 ? w % 13 : 13), xx = (x % 13 ? x % 13 : 13), yy = (y % 13 ? y % 13 : 13), zz = (z % 13 ? z % 13 : 13);
	
	if(vv > ww){
		vv ^= ww;
		ww ^= vv;
		vv ^= ww;
	}
	if(ww > xx){
		ww ^= xx;
		xx ^= ww;
		ww ^= xx;
	}
	if(xx > yy){
		xx ^= yy;
		yy ^= xx;
		xx ^= yy;
	}
	if(yy > zz){
		yy ^= zz;
		zz ^= yy;
		yy ^= zz;
	}

	if(vv > ww){
		vv ^= ww;
		ww ^= vv;
		vv ^= ww;
	}
	if(ww > xx){
		ww ^= xx;
		xx ^= ww;
		ww ^= xx;
	}
	if(xx > yy){
		xx ^= yy;
		yy ^= xx;
		xx ^= yy;
	}
	
	if(vv > ww){
		vv ^= ww;
		ww ^= vv;
		vv ^= ww;
	}
	if(ww > xx){
		ww ^= xx;
		xx ^= ww;
		ww ^= xx;
	}
	
	if(vv > ww){
		vv ^= ww;
		ww ^= vv;
		vv ^= ww;
	}
	
	uint8_t straight = ((ww - vv == 1 && xx - ww == 1 && yy - xx == 1 && zz - yy == 1) || (vv == 1 && ww == 10 && xx == 11 && yy == 12 && zz == 13));
	
	// printf("%d %d %d %d %d\n", vv, ww, xx, yy, zz);
	// printf("%d\n", straight);

	if(flush && straight) printf("Straight Flush\n");
	else if(flush) printf("Flush\n");
	else if(straight) printf("Straight\n");
	else{
		int32_t aa = 0, bb = 0, cc = 0;
		switch(a){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(b){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(c){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(d){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(e){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(f){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(g){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(h){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(i){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(j){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(k){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(l){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		switch(m){
			case 4:
				aa++;
				break;
			case 3:
				bb++;
				break;
			case 2:
				cc++;
				break;
		}
		if(aa) printf("Four of a kind\n");
		else if(bb){
			if(cc) printf("Full house\n");
			else printf("Three of a kind\n");
		}else if(cc){
			if(cc == 2) printf("Two pair\n");
			else printf("One pair\n");
		}else printf("High card\n");
	}

	return 0;
}

