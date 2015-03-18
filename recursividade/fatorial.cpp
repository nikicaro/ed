/**
Demonstra o uso da recursividade.
Calcula o fatorial de um numero de forma recursiva.
Autor : Prof. José Alberto Matioli
Data criacao : 22/09/2014
Data alteracao : 22/09/2014
*/
#include <iostream>
using namespace std;

//funcao para caluclo do fatorial
//Parametros: 
//	numero = numero inteiro o qual sera calculado o fatorial
//Retorno:
//  valor inteiro representando o fatorial calculado
int fator(int numero)
{
	if(numero > 1)
		return numero * fator(numero - 1);
	else
		return 1;
}

//Funcao principal
int main()
{
	int numero= 0;
	cout << "Numero: ";
	cin >> numero;
	cout << "Fatorial de " << numero << " = " << fator(numero);
	return 0;
}
