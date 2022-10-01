#include <iostream>
#include <stdlib.h>
#include <wchar.h> //Possui fun��es como wchar_t para que n�o ocorram erros em declara��o de variaveis

using namespace std;

int main(int argc, char** argv) {
	
	// -- VARI�VEIS --
	
	//Variaveis s�o espa�os na mem�ria que pode armazenar um tipo de dado especificado na declara��o, que � similar ao C.
	//Toda vari�vel tem um nome, um tipo, um tamanho, e pode conter ou n�o um valor.
	
	int x = 96, y; //Ambas s� podem armazenar valores de tipo inteiro.
	y = 16;
	
	//Vamos imprimir a soma entre os valores:
	cout << x + y << endl; //Apenas como exemplo, utilizamos o operador de soma.
	
	
	// -- TIPOS DE DADO --
	
	//Os tipos de dados que s�o considerados primitivos (n�o admitem POO) em C++ s�o:
	
	bool logico = true; //booleano: armazena V (0 ou T) ou F (1 ou F)
	
	char letra = 'c';   //caractere: armazena um caractere apenas
	
	int num = 10;		//inteiro: armazena um numero inteiro (entre -32768 at� 32767)
	
	float fracionario = 26.48; 		//float: armazena numeros fracion�rios (at� 6 casas decimais)
	
	double decimal = 995.5468;	//double: armazena numeros fracion�rios (at� 15 casas decimais)
	
	//Dois tipos considerados tanto com primitivos ou n�o, s�o eles:

	//void;	//N�o armazena nenhum valor pois representa a falta de um tipo, ou seja, n�o � um tipo de dado. 
	//� usado apenas como retorno de fun��o
	
	wchar_t charespecial = '�'; //Pode armazenar um caractere especial que n�o se encaixe no tipo char
	
	cout << endl;
	
	//Vamos testar algumas variaveis:
	int n = 9;
	char car = 'a';
	double d = 66.6;
	
	//A seguir demonstra-se como concatenar valores com cout.
	cout << "O valor da variavel int eh " << n << endl;
	cout << "O valor da variavel char eh " << car << endl;
	cout << "O valor da variavel double eh " <<  d << endl;
	
	cout << endl;
	
	//Podemos saber o tamanho das variaveis (em bytes) com o comando sizeof:
	cout << "O tamanho da variavel int eh " << sizeof(n) << endl;
	cout << "O tamanho da variavel char eh " << sizeof(car) << endl;
	cout << "O tamanho da variavel double eh " << sizeof(d) << endl;
	cout << endl;
	
	// -- MODIFICADORES DE TIPO DE DADO --
	
	//Tanto em C quanto em C++, existem 4 modificadores de tipo de dado num�rico:
	//short: diminui a capacidade de armazenamento (ou o tamanho  dos valores) 
	//long: aumenta a capacidade de armazenamento
	//signed: permite numeros negativos e positivos
	//unsigned: permite apenas numeros positivos
	
	//Exemplificando:
	
	int a = 0;
	short b = 0; //Quando declara-se short, o compliador automaticamente entende como tipo int, a n�o que haja especifica��o  
	long int c = 0;
	
	//Vamos ver a quantidade de mem�ria que cada vari�vel esta utilizando:
	cout << "O tamanho da variavel a eh: " << sizeof(a) << " bytes." << endl; //4
	cout << "O tamanho da variavel b eh: " << sizeof(b) << " bytes." << endl; //2
	cout << "O tamanho da variavel c eh: " << sizeof(c) << " bytes." << endl; //4
	//Mesmo com o long, o tamanho da variavel n�o mudou pois C e C++ nunca criaram uma regra geral para o tamanho de variaveis.
	//Com isso, os fabricantes de compiladores que definem isso, o que pode ocasionar diferen�as de execu��o entre compiladores.
	
	int a2 = 0;
	signed b2 = -10; //Tecnicamente esse modificador est� impl�cito em todas as declara��es de variaveis de tipo int. 
	unsigned c2 = -10;
	
	cout << "O tamanho da variavel a2 eh: " << sizeof(a2) << " bytes, e seu valor eh: " << a2 << endl; 
	cout << "O tamanho da variavel b2 eh: " << sizeof(b2) << " bytes, e seu valor eh: " << b2 << endl; 
	cout << "O tamanho da variavel c2 eh: " << sizeof(c2) << " bytes, e seu valor eh: " << c2 << endl; 
	//c2 vai receber o valor de um lixo da memoria pois sua atribui��o n�o foi correta, pois ela n�o admite numeros negativos.
	
	cout << endl;
	
	//Agora vamos ver exemplos com o tipo CHAR...
	//Mesmo sendo um tipo que armazena caracteres, variaveis tipo char podem armazenar numeros entre -127 a 127.
	//Isso acontece pois h� a conver��o desses valores inteiros para caracteres da tabela ASCII:
	char caractere = 70;
	cout << "O valor da variavel caractere eh: " << caractere << endl; //Ser� impresso E (pois seu valor na tabela � 70)
	
	char caractere2 = -14;
	cout << "O valor da variavel caractere eh: " << caractere2 << endl; //Ser� impresso = (pois seu valor na tabela � -14)
	
	//Por�m caso seja usado o modificador unsigned, o intervalo muda sendo agora de 0 a 255:
	unsigned char caractere3 = 215;
	cout << "O valor da variavel caractere eh: " << caractere3 << endl; //Ser� impresso � (� maiusculo)
	
	
	
	
	system("pause");
	return 0;
}
