#include <stdio.h>
int main() {
	int h=11,m=65;
	char p;
	
	if(m>=60) {
		m-=60;
		h+=1;
		h = h>=24 ? h-24 : h;
	}
	
	p= h<12 ? 'A' : 'P';
	h= h<13 ? h : h-12 ;
	
	printf("%cM %d½Ã%dºÐ", p,h,m);
	return 0;
}
