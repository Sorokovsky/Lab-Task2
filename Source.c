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
	// не явне переведення типів
	z = ch + a + b + x + y;
	printf_s("Enter the symbol: "); ch = _getch();
	printf_s("The symbol is %c", ch);
	printf_s("\n \t The result of the conversion types:%lf \n", z);
	// Явне переведення типів
	z = (double)ch + (double)a + (double)b + (double)x + y;
	printf_s("\n \t The apparent conversion types:% lf \n", z);
	printf_s("\n \t z = sqrt (% d /% d) =%lf \n", a, b, z);
	z = sqrt(a / b);
	z = sqrt((double)a / b);
	printf_s("\n \t z = sqrt (% d /% d) =%lf \n", a, b, z);
	printf_s("\n \t z = lg (% d /% d) =% lf \n", a, b, log10(z));
	printf_s("\n \t z = ln (% d /% d) =% lf \n", a, b, log(z));
	printf_s("\n Press any key:");
	_getch();
	return 0;
}