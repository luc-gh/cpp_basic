#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	
	//ESTRUTURAS CONDICIONAIS e LA�OS DE REPETI��O
	
	//Estrururas condicionais - if e else:
	//Modifica o fluxo de execu��o de um programa executando um bloco de c�digo ou n�o de acordo com uma condi��o.
	//Ex: iprimir mensagens diferentes de acordo com numeros digitados:
	double x, y;
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite outro numero: ";
	cin >> y;
	if(x > y) //O valor retornado aqui eh booleano (true ou false), e vai executar o bloco caso o resultado for true.
		cout << "O numero " << x << " eh maior que o numero " << y << endl;
	else if(x < y)
		cout << "O numero " << x << " eh menor que o numero " << y << endl;
	else if(x == y)
		cout << "Os numeros digitados s�o iguais" << endl;
	else
		cout << "Opera��o inv�lida" << endl;
		
		

	
	system("pause");
	return 0;
}
