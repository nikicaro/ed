#include <iostream>
using namespace std;

/*
Recurs�o � a capacidade que uma fun��o tem de chamar a si pr�pria.
Cuidado para n�o cair em um loop infinito, o que faltamente ir� dar
"crash" na aplica��o
*/
int SomarAte(int nValor);

 
int main(int argc, char *argv[])
{
	cout << "Exemplo de uso de recursividade: " << endl;
	cout << "SomarAte(10) = " << SomarAte(10) << endl << endl;
    return 0;
}

// retorna a soma de 1 at� nValor
int SomarAte(int nValor)
{
//	cout << nValor << endl;
    if (nValor <=1)
        return nValor;
    else
        return SomarAte(nValor - 1) + nValor;
}
