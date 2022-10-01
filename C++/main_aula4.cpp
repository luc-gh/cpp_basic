#include <iostream>
#include <stdlib.h>
#include <iomanip> //Cont�m diversas fun��es de formata��o de dados para o console, entre elas, o manipulador setw

using namespace std;

int main(int argc, char** argv) {
	
	//OPERADORES ARITM�TICOS, L�GICOS, de ATRIBUI��O, de COMPARA��O e de INCREMENTO/DECREMENTO.
	
	//Aritm�ticos: funcionam como na matem�tica:
	int x = 9, y = 3;
	
	cout << x + y << endl; //soma (12)
	cout << x - y << endl; //subtra��o (6)
	cout << x * y << endl; //multilica��o (27)
	cout << (double)x / (y+1) << endl; //divis�o (2.25)
	cout << x % y << endl; //resto da divis�o (0)
	cout << endl;
	
	//Operadores de compara��o ou relacionais: funcionam como na matem�tica:
	/*
		== (igual a)
		!= (diferente de)
		>= (maior ou igual a)
		<= (menor ou igual a)
		< (menor que)
		> (maior que)
	*/
	//Eles sempre compara dois valores, sempre retornando um valor booleano.
	//Valores booleano em C++ s�o representado dessa maneira: 1 � referente a verdadeiro (true), e 0 � referente a falso (false).
	
	//Operadores l�gicos: funcionam como na f�sica:
	/*
		&& (and - e) >> conjun��o
		|| (or - ou) >> disjun��o
		!  (not - n�o) >> inverte um valor booleano
	*/
	
	//Exemplo - digite um numero num intervalo:
	double a;
	cout << "Digite um numero no intevalo entre 10 e 25: ";
	cin >> a;
	if (a >= 10 && a <= 25)
		cout << "Numero valido!" << endl;
	else
		cout << "numero invalido!" << endl;
	
	//Operadores de atribui��o simples e compostos:
	
	
	system("pause");
	return 0;
}
