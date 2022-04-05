#ifndef CASA_HPP
#define CASA_HPP

#include <vector>
#include <string>
#include "Peca.hpp"

class Casa{
	private:
		bool casaSegura;
    int posicao_;
		std::vector<Peca> PecasNaCasa; 
	public:

	/** 
		* Construtor da classe Casa.
		* Inicializa a posição da casa no tabuleiro como sendo zero para que não se tenha uma variável não inicializada.
		* Esse posição deve ser alterada posteriormente para a posição correta à qual a casa corresponde. 
		* Por padrão, inicializa a casa como sendo segura (não se pode capturar peças na casa).
	*/
		Casa();

	/**
		* Destrutor da classe Casa.
		* Utilizado para desalocar a memória alocada na criação de casa. 
	*/
    ~Casa();

	/**
		* Função de retorno vazio. 
		* É responsável por colocar uma peça na casa.
		* @param peca objeto do tipo Peca que será colocado na casa.
	*/
		void colocaPeca(Peca peca);

	/**
		* Função de retorno vazio.
		* É responsável por retirar uma peça da casa.
		* @param peca objeto tipo Peca que será retirado da casa.
	*/
		void tiraPeca(Peca peca);

	/**
		* Função de retorno booleano.
		* Quando chamada, retorna se em uma dada casa, pode-se realizar uma captura de peça.
	*/
		bool ehSegura();

	/**  
		* Essa função é responsável por acessar o atributo privado "ehSegura" da classe Classe e atribuí-lo como sendo verdadeiro.
	*/
		void setSegura();

	/**
		*	Função de retorno booleano.
		* Quando chamada, retorna se há alguma peça naquela casa.
	*/
		bool estaVazia();

	/**
		* Função de retorno vazio.
		* Quando chamada, recebe um parâmetro inteiro, que corresponde à posição da respectiva casa no tabuleiro.
		* Acessa o atributo privado "posicao_" de casa e o seta como o valor do inteiro. É chamada somente na declaração do tabuleiro. No decorrer do jogo as casas não mudam de lugar.
		* @param nova nova posição da casa no tabuleiro. 
	*/
		void setPosicao(int nova);

	/**
		* Função de retorno inteiro.
		* Quando chamada, retorna o atributo privado "posicao_" de uma certa casa, que corresponde à posição daquela casa no tabuleiro.
	*/ 
		int getPosicao();
	
	/**
		* Função de retorno do tipo Peca, que recebe como parâmetro um inteiro identificador da peça que está na casa.
		* Acessa o atributo privado "std::vector<Peca> PecasNaCasa" e retorna a Peca que está nesse vetor na posição "pos". 
		* @param pos posição da peça no vetor PecasNaCaca. 
	*/
		Peca getPecasNaCasa(int pos);

	/**
		* Função que retorna uma string.
		* É chamada em Tabuleiro, quando se deseja realizar a impressão do tabuleiro na tela para que os jogadores saibam onde estão suas peças. 
		* Percorre o atributo privado "std::vector<Peca> PecasNaCasa", verificando inicialmente quantas peças estão posicionadas naquela casa. 
		* Caso não tenham peças na casa, retorna "  ".
		* Caso haja uma peça na casa, retorna uma string que concatena o token e o número desta peça. 
		* Caso haja mais de uma peça na casa, retorna a posição da casa. (Depois na função responsável por imprimir o tabuleiro em sua formatação ASCII, caso haja mais de uma peça na casa, imprime-se "Na casa *posicao_da_casa* estão as peças *token+numero* *token+numero* ... *token+numero*" para que o jogador tenha essa informação sempre em mãos.)
	*/
		std::string imprimePecas();

	/**
		* Função de retorno do tipo inteiro.
		* Quando chamada, retorna quantas peças estão em uma respectiva casa.
	*/
		int getNumeroDePecasNaCasa();
};
#endif

