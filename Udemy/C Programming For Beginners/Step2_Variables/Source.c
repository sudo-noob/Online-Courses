#include <stdio.h>

int main(int argc, char* argv)
{
	double pettycash;
	double grandtotal;

	grandtotal = 500.50;
	pettycash = 10.5;
	printf("pettycash=%.2f\n", pettycash);
	pettycash = 100.25;
	printf("pettycash=%.2f\n", pettycash);
	printf("grandtotal=%.2f\n", grandtotal);
	return 0;
}
