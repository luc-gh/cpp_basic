#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip> //Cont�m diversas fun��es de formata��o de dados para o console, entre elas, o manipulador setw

using namespace std;

int main(int argc, char** argv) {
	
	//STREAM
	//Stream remete a uma sequ�ncia de informa��es ou um fluxo de dados, sejam de entrada ou sa�da.
	//Existem dois tipos de Stream: 
	   //De texto: constitu�do por caracteres da tabela ASCII
	   //Bin�rias: compostos por cadeias de bytes puros.
	//Para manipular-mos Streams adicionamos a biblioteca iostream, que tem ferramentas para manupula��o de E/S de dados.
	//Esta biblioteca � uma evolu��o da biblioteca stdio.h, de C, de modo a substitu�-la por completo.
	//Por�m podemos adicionar a biblioteca stdio.h e utilizar suas fun��es (Ex: printf) como em C, normalmente.
	
	/* Algumas instru��es modificadas de C para C++ s�o:
		stdin - stdout - stdlog      --> fun��es (std: standart ou padr�o)
		 cin  -  cout  -  clog - crr --> objetos (c: console)
	*/
	 
	//Vale destacar os operadores de:
	   //ISER��O (<<) e EXTRA��O (>>), que tamb�m manipulam informa��es bit a bit (movendo bits � esquerda ou direita)
	   //Por�m usaremos eles al�m disso, para inserir ou extrair informa��es em um determinado arquivo.
	   //Assim, podemos caracteriza esses operadores como sobrecarregados, por assumirerem mais de uma fun��o no c�digo.
	
	/*
		Desse modo, agora em C++, como exemplo, para exibir uma informa��o no console, passaremos pelo operador de inser��o uma
		informa��o que dever� ser escrita no objeto cout (console output). De maneira an�loga, para adquirir uma informa��o do 
		usu�rio, devemos usar o operador de extra��o para ele extrair informa��es passadas ao objeto cin (console input).
	*/   
	
	//Vejamos exemplos:
	printf("comando herdado de C, da biblioteca stdio.h\n");
	cout << "objeto da biblioteca iostream, de C++" << endl;
	cout << endl;
	
	//Com Rela��o a MANIPULA��O DE DADOS...
	//Antes de exibir algo na tela com cout, podemos manipular a forma como as informa��es ser�o inseridas no objeto.
	//Para isso usamos os chamados manipuladores, que s�o semelhantes a m�todos que usamos no objeto cout:
	cout << hex << 10 + 50 << endl; 
		//modifica a base do valor para hexadecimal
		//� importante ressaltar que a partir dessa convers�o, o compilador vai interpretar todos os valores em hexadecimal;
		//Para evitar erro com isso, fa�a a re-convers�o para decimal depois ou a base desejada.
	 
	//O manipulador a seguir necessita da adi��o da biblioteca iomanip:
	//Ele vai definir o tamanho do campo no qual ser�o impressas as informa��es
	cout << setw(5) << 1; 
	cout << setw(5) << 2;
	cout << setw(5) << 3;
	cout << setw(5) << 4 << endl;
	
	//Isso se torna �til para fazer uma pequena tabela. Por�m existem formas melhores e mais organizadas para fazer uma.
	
	cout << endl;
	
	
	//Como dito anteriormente, cout � o objeto de sa�da de dados de C++, e usamos o operador de inser��o para exibir algo.
	//Vejamos outro exemplo de como inserir um valor no objeto cout:
	cout << dec << 10 << endl;
	
	
	//Mas agora vamos ver como funciona a estra��o de informa��es, com o comando cin.
	//Para isso precisamos atribuir o valor extra�do a uma variavel j� inicializada anteriormente:
	cout << "Informe um numero: ";
	double numero1 = 0, numero2 = 0;
	cin >> numero1;
	cout << "\nInforme outro numero: ";
	cin >> numero2;
	cout << "O produto dos numeros eh: " << numero1*numero2 << endl;
	cout << "A media dos numeros eh: " << (numero1+numero2)/2 << endl;
	cout << "O quociente deles eh: " << numero1/numero2 << endl;
	
	//Logo o operador de entrada de dados em C++ � o cin e o de sa�da � o cout.
	
	system("pause");
	return 0;
}
