#include <iostream>
#include <stdlib.h>
#include <iomanip> //Contém diversas funções de formatação de dados para o console, entre elas, o manipulador setw

using namespace std;

int main(int argc, char** argv) {
	
	//OPERADORES ARITMÉTICOS, LóGICOS, de ATRIBUIÇÃO, de COMPARAÇÃO e de INCREMENTO/DECREMENTO.
	
	//Aritméticos: funcionam como na matemática:
	int x = 9, y = 3;
	
	cout << x + y << endl; //soma (12)
	cout << x - y << endl; //subtração (6)
	cout << x * y << endl; //multilicação (27)
	cout << (double)x / (y+1) << endl; //divisão (2.25)
	cout << x % y << endl; //resto da divisão (0)
	cout << endl;
	
	//Operadores de comparação ou relacionais: funcionam como na matemática:
	/*
		== (igual a)
		!= (diferente de)
		>= (maior ou igual a)
		<= (menor ou igual a)
		< (menor que)
		> (maior que)
	*/
	//Eles sempre compara dois valores, sempre retornando um valor booleano.
	//Valores booleano em C++ são representado dessa maneira: 1 é referente a verdadeiro (true), e 0 é referente a falso (false).
	
	//Operadores lógicos: funcionam como na física:
	/*
		&& (and - e) >> conjunção
		|| (or - ou) >> disjunção
		!  (not - não) >> inverte um valor booleano
	*/
	
	//Exemplo - digite um numero num intervalo:
	double a;
	cout << "Digite um numero no intevalo entre 10 e 25: ";
	cin >> a;
	if (a >= 10 && a <= 25)
		cout << "Numero valido!" << endl;
	else
		cout << "numero invalido!" << endl;
	
	//Operadores de atribuição simples e compostos:
	
	
	system("pause");
	return 0;
}
