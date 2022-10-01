#include <iostream>
//A biblioteca acima é a que possui as funções de entrada (input) e saída (output) de dados na linguagem C++.

#include <stdlib.h>
//Herdada de C, é a biblioteca padrão de C/C++, chamada Standart Library. 

//UM COMENTÁRIO É UMA PARTE DO CÓDIGO NÃO INTERPRETADA PELO COMPILADOR. Pode ser feito com // ou /**/.

/*
A linguagem C++, além de ter servido de base para linguagens como JavaScript, Java e PHP, ainda é altamente utilizada no mercado,
pois possui um poder gigantesco com sua organizações, e suas grandes bibliotecas.

Ela foi a linguagem base para a construções da estrutura dos compiladores e interpretadores das linguagens seguintes a ela.

Ela é considerada uma evolução da linguagem C, porém, seu alto sucesso se deve ao fato de que além de manter a estrutura de 
bibliotecas como em C, e introduziu a Orientação a objetos, criando uma novo paradigma de programação.

O C++, funciona basicamente como linguagem base universal, tendo seus principios presentes em quase todas as plataformas.

As principais características da linguagem C++ são:

-> É um superset de C
-> É esteticamente tipada: especifica tipos de variaveis
-> É compilada:  todo o código é analisdo antes de executar
-> É multiparadigma: pode-se trabalhar com POO,, programação genérica ou funcional, etc.
-> Tem programação em alto e baixo nível
-> E é Orientada a objetos:
   - Abstração 
   - Herança
   - Encapsulamento
   - Polimorfismo
*/


//Em C++, possiu um chamado Namespace, ou Espaço de nomes; ele expressa um agrupamento lógico, que pode ser chamado de contexto.
//Ele serve para evitar um conflito de nomes ou Strings. 

//Entenda-o como um caminho para a biblioteca padrão C++. 

//Como o Namespace define um escopo, cada identificador ou nome (cout ou endl) tem um namespace específico.
//Com isso, no código, para cada identificador ou comando, deverá ser especificado seu namesapace antes, separados por ::...

//Um exemplo seria: 'std::cout.


/*Porém, para evitar a necessidade de escrever o nome do namespace de cada comando, importa-se todos os indentificadores 
  de um namespace.	*/

//Para isso, usa-se o comando using:

using namespace std; 
//O nome deste namespace, que é o padrão de C++, é Standart.

/*Com isso todos os comandos do namespace padrão (std) não terão mais necessidade de especificação, 
  pois o namespace já foi importado.   */



int main(int argc, char** argv) { //função principal e ÚNICA main
	
	
	cout << "Hello world!" << endl; 
	//O comando de saída é cout, que siginifica Console Output. 
	//O ponto e vírgula conclui a compilação nessa linha de código.
	
	
	//A String que irá ser apresentada tem que estar entre <<""<<, se houve algo depois como o endl.
	//endl' é o comando que pula uma linha ou dá uma quebra de linha.
	//Perceba que não houve a necessidade de  especificar o namespace padrão.
	
	
	//É importante ressaltar que para quebra de linha, poderíamos ter utilizado \n na String.
	//A diferença no funcionamento do \n para o endl é o endl só quebra uma linha, já que é escrito uma só vez.
	//Com o \n poderemos pular várias linhas, veremos ele nos próximos códigos.
	
	
	system("pause"); //Esse comando esta incluído na biblioteca stdlib.h, e pausa o sistema para ver o código executado.
	return 0; //Retorno da função main, que é de tipo inteira.
}
