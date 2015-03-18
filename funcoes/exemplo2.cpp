#include <iostream>
using namespace std;

/*
Como as funções estão definidas após a função main(),
devemos definir os cabecalhos delas, para que ao chegar 
nao funcao main( ), o compilador conheça as funções
que estão sendo chamadas pela função main( ).
Para isso, basta definirmos os cabeçalhos das funções, 
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
//Tanto os parametros como os valores de retorno são do tipo int
int soma_int(int a, int b){
	int res;
	res = a+b;
	return res;
}

//Funcao que recebe dois parametros int e retorna a media dos mesmos
//O tipo do retorna será float
float media_int(int a, int b){
	float res;
	res = (a+b)/2.0; //atenção para o resultado da divisao de int 
	return res;
}

//Função que não recebe nenhum parametro e também não retorna
//nenhum valor para quem a chamar
void pausa(){
	cout << "Pressione qualquer tecla para continuar...";
	cin.get();
}


