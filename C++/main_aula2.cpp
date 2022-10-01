#include <iostream>
#include <stdlib.h>
#include <wchar.h> //Possui funções como wchar_t para que não ocorram erros em declaração de variaveis

using namespace std;

int main(int argc, char** argv) {
	
	// -- VARIÁVEIS --
	
	//Variaveis são espaços na memória que pode armazenar um tipo de dado especificado na declaração, que é similar ao C.
	//Toda variável tem um nome, um tipo, um tamanho, e pode conter ou não um valor.
	
	int x = 96, y; //Ambas só podem armazenar valores de tipo inteiro.
	y = 16;
	
	//Vamos imprimir a soma entre os valores:
	cout << x + y << endl; //Apenas como exemplo, utilizamos o operador de soma.
	
	
	// -- TIPOS DE DADO --
	
	//Os tipos de dados que são considerados primitivos (não admitem POO) em C++ são:
	
	bool logico = true; //booleano: armazena V (0 ou T) ou F (1 ou F)
	
	char letra = 'c';   //caractere: armazena um caractere apenas
	
	int num = 10;		//inteiro: armazena um numero inteiro (entre -32768 até 32767)
	
	float fracionario = 26.48; 		//float: armazena numeros fracionários (até 6 casas decimais)
	
	double decimal = 995.5468;	//double: armazena numeros fracionários (até 15 casas decimais)
	
	//Dois tipos considerados tanto com primitivos ou não, são eles:

	//void;	//Não armazena nenhum valor pois representa a falta de um tipo, ou seja, não é um tipo de dado. 
	//É usado apenas como retorno de função
	
	wchar_t charespecial = 'ç'; //Pode armazenar um caractere especial que não se encaixe no tipo char
	
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
	
	//Tanto em C quanto em C++, existem 4 modificadores de tipo de dado numérico:
	//short: diminui a capacidade de armazenamento (ou o tamanho  dos valores) 
	//long: aumenta a capacidade de armazenamento
	//signed: permite numeros negativos e positivos
	//unsigned: permite apenas numeros positivos
	
	//Exemplificando:
	
	int a = 0;
	short b = 0; //Quando declara-se short, o compliador automaticamente entende como tipo int, a não que haja especificação  
	long int c = 0;
	
	//Vamos ver a quantidade de memória que cada variável esta utilizando:
	cout << "O tamanho da variavel a eh: " << sizeof(a) << " bytes." << endl; //4
	cout << "O tamanho da variavel b eh: " << sizeof(b) << " bytes." << endl; //2
	cout << "O tamanho da variavel c eh: " << sizeof(c) << " bytes." << endl; //4
	//Mesmo com o long, o tamanho da variavel não mudou pois C e C++ nunca criaram uma regra geral para o tamanho de variaveis.
	//Com isso, os fabricantes de compiladores que definem isso, o que pode ocasionar diferenças de execução entre compiladores.
	
	int a2 = 0;
	signed b2 = -10; //Tecnicamente esse modificador está implícito em todas as declarações de variaveis de tipo int. 
	unsigned c2 = -10;
	
	cout << "O tamanho da variavel a2 eh: " << sizeof(a2) << " bytes, e seu valor eh: " << a2 << endl; 
	cout << "O tamanho da variavel b2 eh: " << sizeof(b2) << " bytes, e seu valor eh: " << b2 << endl; 
	cout << "O tamanho da variavel c2 eh: " << sizeof(c2) << " bytes, e seu valor eh: " << c2 << endl; 
	//c2 vai receber o valor de um lixo da memoria pois sua atribuição não foi correta, pois ela não admite numeros negativos.
	
	cout << endl;
	
	//Agora vamos ver exemplos com o tipo CHAR...
	//Mesmo sendo um tipo que armazena caracteres, variaveis tipo char podem armazenar numeros entre -127 a 127.
	//Isso acontece pois há a converção desses valores inteiros para caracteres da tabela ASCII:
	char caractere = 70;
	cout << "O valor da variavel caractere eh: " << caractere << endl; //Será impresso E (pois seu valor na tabela é 70)
	
	char caractere2 = -14;
	cout << "O valor da variavel caractere eh: " << caractere2 << endl; //Será impresso = (pois seu valor na tabela é -14)
	
	//Porém caso seja usado o modificador unsigned, o intervalo muda sendo agora de 0 a 255:
	unsigned char caractere3 = 215;
	cout << "O valor da variavel caractere eh: " << caractere3 << endl; //Será impresso Î (î maiusculo)
	
	
	
	
	system("pause");
	return 0;
}
