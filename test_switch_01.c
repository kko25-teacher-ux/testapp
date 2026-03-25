#include <stdio.h>
int main() {
	int m,k=0;	
	
	printf("menu : ");
	scanf("%d", &m);
	
	switch(m) {
		case 1: printf("1학년 교무실"); break;
		case 2: printf("2학년 교무실"); break;
		case 3: printf("3학년 교무실"); break;
		case 4: printf("행정실"); break;
		default: printf("다시 선택해주세요.");			
	}
	    	
	return 0;
}


/*
int main() {
	int m;	
	
	printf("menu : ");
	scanf("%d", &m);
	
	if(m==1) printf("1학년 교무실");
	else if(m==2) printf("2학년 교무실");
	else if(m==3) printf("3학년 교무실");
	else if(m==4) printf("행정실");
	else printf("다시 선택하세요.");		
	    	
	return 0;
}
*/
