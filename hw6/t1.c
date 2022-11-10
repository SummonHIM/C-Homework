#include <stdio.h>

int main() {
	int sumwhile=0, sumdo, sumfor, roll=1;
	while (roll<=50) {
		sumwhile = sumwhile + roll;
		roll++;
	}
	printf("sumwhile=%d\n", sumwhile);

	roll=1;
	do {
	sumdo=sumdo+roll;
	roll++;
	}while (roll<=50);
	printf("sumdo=%d\n", sumdo);

	for (roll=1; roll<=50; roll++) {
	
	}
}
