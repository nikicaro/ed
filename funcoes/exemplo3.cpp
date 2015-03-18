#include <iostream>
using namespace std;

/*
Recursão é a capacidade que uma função tem de chamar a si própria.
Cuidado para não cair em um loop infinito, o que faltamente irá dar
"crash" na aplicação
*/
int SomarAte(int nValor);

 
int main(int argc, char *argv[])
{
	cout << "Exemplo de uso de recursividade: " << endl;
	cout << "SomarAte(10) = " << SomarAte(10) << endl << endl;
    return 0;
}

// retorna a soma de 1 até nValor
int SomarAte(int nValor)
{
//	cout << nValor << endl;
    if (nValor <=1)
        return nValor;
    else
        return SomarAte(nValor - 1) + nValor;
}
