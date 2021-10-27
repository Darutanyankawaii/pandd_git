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

	if (c == 'p') {
	  int ans = 1;
	  for(int i = a - b + 1; i <= a ; i++) ans *= i;
	  printf("%d\n", ans);
	}
	    


	if (c == '^') {
		for (int i = 0; i < b; i++) {
			d *= a;
		}
		printf("%d\n", d );
	}

	return 0;
}
