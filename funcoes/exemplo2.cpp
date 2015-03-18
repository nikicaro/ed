#include <iostream>
using namespace std;

/*
Como as fun��es est�o definidas ap�s a fun��o main(),
devemos definir os cabecalhos delas, para que ao chegar 
nao funcao main( ), o compilador conhe�a as fun��es
que est�o sendo chamadas pela fun��o main( ).
Para isso, basta definirmos os cabe�alhos das fun��es, 
como feito a seguir:
*/
int soma_int(int a, int b);
float media_int(int a, int b);
void pausa();

 
int main(int argc, char *argv[])
{
	int va = 10;
	int vb = 11;
	cout << va << " + " << vb << " = " << soma_int(va,vb) << endl;
	cout << "Media entre " << va << " e " << vb << " = " << media_int(va,vb) << endl;
	pausa();

    return 0;
}

//Funcao que recebe dois parametros e retorna a soma dos mesmos
//Tanto os parametros como os valores de retorno s�o do tipo int
int soma_int(int a, int b){
	int res;
	res = a+b;
	return res;
}

//Funcao que recebe dois parametros int e retorna a media dos mesmos
//O tipo do retorna ser� float
float media_int(int a, int b){
	float res;
	res = (a+b)/2.0; //aten��o para o resultado da divisao de int 
	return res;
}

//Fun��o que n�o recebe nenhum parametro e tamb�m n�o retorna
//nenhum valor para quem a chamar
void pausa(){
	cout << "Pressione qualquer tecla para continuar...";
	cin.get();
}


