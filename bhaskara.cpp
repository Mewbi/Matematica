#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, c, delta;
	cout << "\tBhaskara \n";
	cout << "Insira o coeficiente (inteiro) A: "; cin >> a;
	cout << "Insira o coeficiente (inteiro) B: "; cin >> b;
	cout << "Insira o coeficiente (inteiro) C: "; cin >> c;

	cout << "\nA equação inserida é:" << endl;
	cout << "\t" << a << "x²+" << b << "x+" << c << "=0\n" << endl;

	delta = (b * b - 4 * a * c);

	cout << "Delta = " << delta << endl;

	// Se delta for positivo
	if (delta > 0)
	{
		double x1, x2;
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}

	// Se delta for igual a 0
	if (delta == 0)
	{
		double x1;
		x1 = (-b) / (2 * a);
		cout << "X1 = " << x1 << endl;
	}

	// Se delta for negativo
	if (delta < 0)
	{
		delta = (delta * -1);
		cout << "X1 = " << -(b) / (2 * a) << "+" << sqrt(delta) / (2 * a) << "i" << endl;
		cout << "X2 = " << -(b) / (2 * a) << "-" << sqrt(delta) / (2 * a) << "i" << endl;

	}
	return 0;
}