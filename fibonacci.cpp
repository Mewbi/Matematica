#include <iostream>

using namespace std;

int main()
{
	long int a, b, c; // variáveis que farão o fibonacci
	long int q; // casa de fibonacci que quer descobrir

	a = 1; // atribui valor inicial fixo
	b = 0; // atribui valor inicial fixo

	cout << "\tFibonacci\n" << endl;
	cout << "Digite qual casa de fibonacci quer atingir: ";
	cin >> q;

	if (q < 1) // testa se foi inserido um valor válido
	{
		cout << "\nInsira um valor inteiro positivo" << endl;
		return 0;
	}

	if (q == 1) // valor fixo
	{
		cout << "Casa 1: " << b << endl;
		return 0;
	}

	if (q == 2) // valor fixo
	{
		cout << "Casa 1: " << b << endl;
		cout << "Casa 2: " << a << endl;
		return 0;
	}

	if (q >= 3) // realiza fibonacci
	{
	cout << "Casa 1: " << b << endl;
	cout << "Casa 2: " << a << endl;
		for (int i = 3; i <= q; i++)
		{
			c = a + b;
			b = a;
			a = c;
			cout << "Casa " << i << ": " << c << endl;
		}
	}

	return 0;
}