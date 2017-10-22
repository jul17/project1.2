#include <stdio.h>
#include <math.h>

int main(void)
{
	double
		x,
		rez, rez1,
		num,
		min = 0.1,
		max = 0.5,
		h = 0.05,
		d = 0.001;
	int m = 20,
		n = 1,
		fctrl = 1;
	x = min;
	rez = 1; rez1 = 1;
	num = m;
	printf("enter min znachenia");
	scanf_s("%lf", &min);
	getchar();
	printf("enter max znachenia");
	scanf_s("%lf", &max);
	getchar();
	printf("enter krock");
	scanf_s("%lf",& h);
	getchar();
	printf("enter pohubka");
	scanf_s("%lf", &d);
	getchar();

	
	for ( x = min; x <= max; x+=h)
	{
		do {

			rez = (num / fctrl) * pow(x, n);
			rez1 += rez+1;
			n++;
			num *= m - n + 1;
			fctrl *= n;
			printf("\nrez1 %lf", rez1);
			printf(" x = %lf", x);
			
		} while (fabs(rez) <= d);

	}
	
	getchar();
	return 0;
}