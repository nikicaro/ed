/**
Demonstra o uso da recursividade.
Calcula um valor exponencial de forma recursiva.
Autor : Prof. José Alberto Matioli
Data criacao : 22/09/2014
Data alteracao : 22/09/2014
*/
#include <iostream>
using namespace std;


//funcao para caluclo de exponencial
//Parametros: 
//	v = valor da base
//	e = expoente
float floatExp(float v, int e)
{
	if(e==0) return 1;
	if(e==1) return v;
	if(e>1){
		return v * floatExp(v,--e);
	}
}

int main()
{
	float f = 0;
	float n = 3;
	float e = 0;
	for(int e=0;e<=10;e++){
		f=floatExp(n,e);
		cout << n << "^" << e << " = " << f << endl;
	}
	return 0;
}
