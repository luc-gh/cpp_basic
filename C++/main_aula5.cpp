#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	
	//ESTRUTURAS CONDICIONAIS e LAÇOS DE REPETIÇÃO
	
	//Estrururas condicionais - if e else:
	//Modifica o fluxo de execução de um programa executando um bloco de código ou não de acordo com uma condição.
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
		cout << "Os numeros digitados são iguais" << endl;
	else
		cout << "Operação inválida" << endl;
		
		

	
	system("pause");
	return 0;
}
