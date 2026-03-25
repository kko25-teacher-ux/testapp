#include <stdio.h>
int main() {
	int score;	
	char grade;
	
	printf("점수 : ");
	scanf("%d", &score);
	
	switch(score/10) {
		case 9: grade='A'; break;
		case 8: grade='B'; break;
		case 7: grade='C'; break;
		case 6: grade='D'; break;
		default: grade='E'; 
	}
	
	printf("%d점은 %c등급입니다.", score, grade);
	    	
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
