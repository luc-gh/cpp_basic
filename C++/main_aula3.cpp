#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip> //Contém diversas funções de formatação de dados para o console, entre elas, o manipulador setw

using namespace std;

int main(int argc, char** argv) {
	
	//STREAM
	//Stream remete a uma sequência de informações ou um fluxo de dados, sejam de entrada ou saída.
	//Existem dois tipos de Stream: 
	   //De texto: constituído por caracteres da tabela ASCII
	   //Binárias: compostos por cadeias de bytes puros.
	//Para manipular-mos Streams adicionamos a biblioteca iostream, que tem ferramentas para manupulação de E/S de dados.
	//Esta biblioteca é uma evolução da biblioteca stdio.h, de C, de modo a substituí-la por completo.
	//Porém podemos adicionar a biblioteca stdio.h e utilizar suas funções (Ex: printf) como em C, normalmente.
	
	/* Algumas instruções modificadas de C para C++ são:
		stdin - stdout - stdlog      --> funções (std: standart ou padrão)
		 cin  -  cout  -  clog - crr --> objetos (c: console)
	*/
	 
	//Vale destacar os operadores de:
	   //ISERÇÃO (<<) e EXTRAÇÃO (>>), que também manipulam informações bit a bit (movendo bits à esquerda ou direita)
	   //Porém usaremos eles além disso, para inserir ou extrair informações em um determinado arquivo.
	   //Assim, podemos caracteriza esses operadores como sobrecarregados, por assumirerem mais de uma função no código.
	
	/*
		Desse modo, agora em C++, como exemplo, para exibir uma informação no console, passaremos pelo operador de inserção uma
		informação que deverá ser escrita no objeto cout (console output). De maneira análoga, para adquirir uma informação do 
		usuário, devemos usar o operador de extração para ele extrair informações passadas ao objeto cin (console input).
	*/   
	
	//Vejamos exemplos:
	printf("comando herdado de C, da biblioteca stdio.h\n");
	cout << "objeto da biblioteca iostream, de C++" << endl;
	cout << endl;
	
	//Com Relação a MANIPULAÇÃO DE DADOS...
	//Antes de exibir algo na tela com cout, podemos manipular a forma como as informações serão inseridas no objeto.
	//Para isso usamos os chamados manipuladores, que são semelhantes a métodos que usamos no objeto cout:
	cout << hex << 10 + 50 << endl; 
		//modifica a base do valor para hexadecimal
		//É importante ressaltar que a partir dessa conversão, o compilador vai interpretar todos os valores em hexadecimal;
		//Para evitar erro com isso, faça a re-conversão para decimal depois ou a base desejada.
	 
	//O manipulador a seguir necessita da adição da biblioteca iomanip:
	//Ele vai definir o tamanho do campo no qual serão impressas as informações
	cout << setw(5) << 1; 
	cout << setw(5) << 2;
	cout << setw(5) << 3;
	cout << setw(5) << 4 << endl;
	
	//Isso se torna útil para fazer uma pequena tabela. Porém existem formas melhores e mais organizadas para fazer uma.
	
	cout << endl;
	
	
	//Como dito anteriormente, cout é o objeto de saída de dados de C++, e usamos o operador de inserção para exibir algo.
	//Vejamos outro exemplo de como inserir um valor no objeto cout:
	cout << dec << 10 << endl;
	
	
	//Mas agora vamos ver como funciona a estração de informações, com o comando cin.
	//Para isso precisamos atribuir o valor extraído a uma variavel já inicializada anteriormente:
	cout << "Informe um numero: ";
	double numero1 = 0, numero2 = 0;
	cin >> numero1;
	cout << "\nInforme outro numero: ";
	cin >> numero2;
	cout << "O produto dos numeros eh: " << numero1*numero2 << endl;
	cout << "A media dos numeros eh: " << (numero1+numero2)/2 << endl;
	cout << "O quociente deles eh: " << numero1/numero2 << endl;
	
	//Logo o operador de entrada de dados em C++ é o cin e o de saída é o cout.
	
	system("pause");
	return 0;
}
