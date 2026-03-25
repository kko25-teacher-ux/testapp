#include <stdio.h>
int main() {
	int a=1234, s=0;
	while(a!=0) {
		s+= a%10;
		a/=10;
	}
	printf("%d",s);
	return 0;
}
