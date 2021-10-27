#include <stdio.h>

int main() {
	int a, b,d = 0;
	char c;
	
	scanf("%d%c%d", &a, &c, % b);


	if (c == '+') {
		printf("%d\n", a + b);
	}

	if (c == '-') {
		printf("%d\n", a - b);
	}

	if (c == '/') {
		printf("%d¥n", a / b);
	}

	if (c == '*') {
		printf("%d\n", a * b);
	}

	if (c == '^') {
		for (int i = 0; i < b; i++) {
			d *= a;
		}
		printf("%d\n", d );
	}
	return 0;
}
