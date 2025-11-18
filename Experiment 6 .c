// Name: Muhammad Ali Muhammad Ali Khan
// UIN : 251A028
// Class: FE AI and DS
// Div: A

#include<stdio.h>

void counter() {
	static int count = 0;
	count ++;
	printf("Count = %d\n", count);
}

int main() {
	counter();
	counter();
	counter();

	return 0;
}
