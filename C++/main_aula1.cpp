#include <iostream>
//A biblioteca acima � a que possui as fun��es de entrada (input) e sa�da (output) de dados na linguagem C++.

#include <stdlib.h>
//Herdada de C, � a biblioteca padr�o de C/C++, chamada Standart Library. 

//UM COMENT�RIO � UMA PARTE DO C�DIGO N�O INTERPRETADA PELO COMPILADOR. Pode ser feito com // ou /**/.

/*
A linguagem C++, al�m de ter servido de base para linguagens como JavaScript, Java e PHP, ainda � altamente utilizada no mercado,
pois possui um poder gigantesco com sua organiza��es, e suas grandes bibliotecas.

Ela foi a linguagem base para a constru��es da estrutura dos compiladores e interpretadores das linguagens seguintes a ela.

Ela � considerada uma evolu��o da linguagem C, por�m, seu alto sucesso se deve ao fato de que al�m de manter a estrutura de 
bibliotecas como em C, e introduziu a Orienta��o a objetos, criando uma novo paradigma de programa��o.

O C++, funciona basicamente como linguagem base universal, tendo seus principios presentes em quase todas as plataformas.

As principais caracter�sticas da linguagem C++ s�o:

-> � um superset de C
-> � esteticamente tipada: especifica tipos de variaveis
-> � compilada:  todo o c�digo � analisdo antes de executar
-> � multiparadigma: pode-se trabalhar com POO,, programa��o gen�rica ou funcional, etc.
-> Tem programa��o em alto e baixo n�vel
-> E � Orientada a objetos:
   - Abstra��o 
   - Heran�a
   - Encapsulamento
   - Polimorfismo
*/


//Em C++, possiu um chamado Namespace, ou Espa�o de nomes; ele expressa um agrupamento l�gico, que pode ser chamado de contexto.
//Ele serve para evitar um conflito de nomes ou Strings. 

//Entenda-o como um caminho para a biblioteca padr�o C++. 

//Como o Namespace define um escopo, cada identificador ou nome (cout ou endl) tem um namespace espec�fico.
//Com isso, no c�digo, para cada identificador ou comando, dever� ser especificado seu namesapace antes, separados por ::...

//Um exemplo seria: 'std::cout.


/*Por�m, para evitar a necessidade de escrever o nome do namespace de cada comando, importa-se todos os indentificadores 
  de um namespace.	*/

//Para isso, usa-se o comando using:

using namespace std; 
//O nome deste namespace, que � o padr�o de C++, � Standart.

/*Com isso todos os comandos do namespace padr�o (std) n�o ter�o mais necessidade de especifica��o, 
  pois o namespace j� foi importado.   */



int main(int argc, char** argv) { //fun��o principal e �NICA main
	
	
	cout << "Hello world!" << endl; 
	//O comando de sa�da � cout, que siginifica Console Output. 
	//O ponto e v�rgula conclui a compila��o nessa linha de c�digo.
	
	
	//A String que ir� ser apresentada tem que estar entre <<""<<, se houve algo depois como o endl.
	//endl' � o comando que pula uma linha ou d� uma quebra de linha.
	//Perceba que n�o houve a necessidade de  especificar o namespace padr�o.
	
	
	//� importante ressaltar que para quebra de linha, poder�amos ter utilizado \n na String.
	//A diferen�a no funcionamento do \n para o endl � o endl s� quebra uma linha, j� que � escrito uma s� vez.
	//Com o \n poderemos pular v�rias linhas, veremos ele nos pr�ximos c�digos.
	
	
	system("pause"); //Esse comando esta inclu�do na biblioteca stdlib.h, e pausa o sistema para ver o c�digo executado.
	return 0; //Retorno da fun��o main, que � de tipo inteira.
}
