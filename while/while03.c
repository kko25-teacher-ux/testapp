#include <stdio.h>
int main() {
	int a=20, s=0;
	do {
		s+=a++; 		
		
	} while(a<=10);
	
	printf("%d",s);
	return 0;
}
