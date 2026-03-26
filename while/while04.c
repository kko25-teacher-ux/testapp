#include <stdio.h>
int test1(int a);
void test2();
void test3();

int main() {
	test3(6);
	return 0;
}

int test1(int a) {	
	printf("%d",a);	
}

void test2(int n) {
	int c=11, i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<n-i;j++) printf("  ");
		for(j=0;j<=i;j++) {
			printf("%4d",c++);
		}
		printf("\n");
	}
}


void test3(int n) {
	int i, j, c=11;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%-3d",i+j*n+c);
		}
		printf("\n");
	}	
}




