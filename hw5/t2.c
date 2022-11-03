#include <stdio.h>

int main() {
	int iptA, iptB;
	float opt;
	char op;
	printf("键入算式：");
	scanf("%d%c%d", &iptA, &op, &iptB);
	switch (op) {
		case '+': opt = iptA + iptB; break;
		case '-': opt = iptA - iptB; break;
		case '*': opt = iptA * iptB; break;
		case '/': opt = iptA / iptB; break;
		default: printf("键入的算式不正确。\n"); main(); return 1;
	}
	printf("%d%c%d=%.f\n", iptA, op, iptB, opt);
	return 0;
}
