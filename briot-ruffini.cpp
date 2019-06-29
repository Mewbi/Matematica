#include <iostream>

using namespace std;

int main()
{
	int g; // grau do polinomio
	int r; // raiz

	cout << "\tBriot Ruffini" << endl;
	cout << "Insira apenas valores inteiros\n" << endl;
	cout << "Digite o grau do polinômio: ";
	cin >> g;

	int c[g]; // coeficientes iniciais
	int n[g]; // novos coeficientes

	for (int i = 0; i <= g; i++) // captura todos os coeficientes do polinomio
	{
		cout << "Digite o " << i + 1 << "° coeficiente: ";
		cin >> c[i];
	}

	cout << "Digite o divisor: ";
	cin >> r;
	n[0] = c[0];

	cout << "\n\tPolinômio Inserido\n" << endl;
	for (int i = 0; i <= g - 1; i++) // imprime na tela os valores inseridos
	{
		cout << c[i] << "x^" << g - i << " + ";
	}
	cout << c[g] << endl;
	cout << "Divisor: " << r << endl;

	for (int i = 1; i <= g; i++) // realiza o briot ruffini
	{
		n[i] = n[i-1] * r + c[i];
	}

	cout << "\n\tResultado\n" << endl;
	for (int i = 0; i <= g - 2; i++) // imprime na tela a simplificação
	{
		cout << n[i] << "x^" << g - 1 - i << " + ";
	}
	cout << n[g-1] << endl;

	cout << "Resto: " << n[g] << endl; // imprime o resto da simplificação

	return 0;
}