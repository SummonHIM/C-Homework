#include <stdio.h>

int main() {
	char something;
	printf("Hello world.\n");
	printf("Say something: ");
	scanf("%c", &something);
	printf("something: %c", something);
	return 0;
}
