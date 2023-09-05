# include <stdio.h>
# include <conio.h>
# include <math.h>
int main(void) {
	char ch;
	int a, b;
	float x;
	double y, z;
	ch = 'S';
	a = 2; b = 5;
	x = 5.5F;
	y = 6.0;
	z = ch + a + b + x + y;
	// –езультат приведенн€ тип≥в
	printf("\n \t The result of the conversion types:%lf \n", z);
	// явне перетворенн€ тип≥в
	z = (double)ch + (double)a + (double)b + (double)x + y;
	printf("\n \t The apparent conversion types:% lf \n", z);
	printf("\n \t z = sqrt (% d /% d) =%lf \n", a, b, z);
	z = sqrt(a / b);
	z = sqrt((double)a / b);
	printf("\n \t z = sqrt (% d /% d) =%lf \n", a, b, z);
	printf("\n \t z = lg (% d /% d) =% lf \n", a, b, log10(z));
	printf("\n \t z = ln (% d /% d) =% lf \n", a, b, log(z));
	printf("\n Press any key:");
	_getch();
	return 0;
}