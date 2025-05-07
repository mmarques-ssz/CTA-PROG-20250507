#include <iostream>
using namespace std;

int main()
{
    double n1;
    double n2;
    double n3;
	double n4;
	double percFreq;
	double media;
	
	cout << "Digite o 1. nota: ";
	cin >> n1;
	cout << "Digite o 2. nota: ";
	cin >> n2;
	cout << "Digite o 3. nota: ";
	cin >> n3;
	cout << "Digite o 4. nota: ";
	cin >> n4;
	cout << "Informe o percentual da frequencia: ";
	cin >> percFreq;
	
	media = (n1+ n2 + n3 + n4) / 4;
	
	cout << "Media: " << media << endl;
	
	if (media >= 6)
	{
		if (percFreq >= 75)
		{
			cout << "Aluno aprovado" << endl;
		}
		else
		{
			cout << "Aluno nao aprovado" << endl;
		}
	}
	else
	{
		cout << "Aluno nao aprovado" << endl;
	}

	cout << "Fim do programa" << endl;
	return 0;
}