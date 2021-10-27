#include <stdio.h>

int main() {
	int a, b;
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
	    
	return 0;
}
