#ifndef DADO_HPP
#define DADO_HPP

#include <random>
#include <iostream>

class Dado{
	public:
	
	/**
		* Função de retorno do tipo inteiro.
		* A função escolhePeca() é responsável por gerar uma seed aleatória utilizando as funções da biblioteca <random> e sortear um número entre 1 e 4.
		* Por ter um funcionamento parecido está aqui agregada à classe Dado. 
		* É chamada sempre que um jogador "Computador" vai fazer uma jogada, sorteando uma peça para a futura movimentação. 
    * @return a peca ser movimentada.
	*/
    static int escolhePeca();

	/**
		* Função de retorno do tipo inteiro.
		* A função jogaDado é responsável por gerar uma seed aleatória utilizando as funções da biblioteca <random> e sortear um número entre 1 e 6. 
	*/
		static int jogaDado();
};

#endif
