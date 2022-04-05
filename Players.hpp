#ifndef _PLAYERS_HPP_ 
#define _PLAYERS_HPP_

#include <memory>
#include "Jogador.hpp"
#include "Tabuleiro.hpp"
#include "Turno.hpp"
#include <unistd.h>
#include <string.h>
#include "Estatisticas.hpp"

class Players: public Jogador, public Estatisticas{
    private: 
        int cor_vermelha;
        int cor_azul;
        int cor_verde;
        int cor_amarela;
    public:     
        Players();
        ~Players();
        Players(const Players &obj);
        
        std::shared_ptr<Jogador> vermelho;
        std::shared_ptr<Jogador> azul;
        std::shared_ptr<Jogador> verde;
        std::shared_ptr<Jogador> amarelo;
				std::shared_ptr<Estatisticas> estatisticas;


		/**
    * Função de retorno inteiro. Retorna a cor de um jogador arbitrário chamado pela função. 
		* Retorna 1 caso seja vermelho, 2 caso seja azul, 3 caso seja verde e 4 caso seja amarelo.
    * @param jogador ponteiro inteligente que aponta para um jogador arbitrário que é objeto da classe Players.  
    */ 
        int get_cor(std::shared_ptr<Jogador> jogador);

		/**
    * Função de retorno vazio. É chamada logo no início da execução da main, para que o jogador entre com os parâmetros necessários para rodar o jogo. E os objetos sejam inicializados corretamente como Jogador Humano ou Computador, com cores e nomes apropriados.
    * @param num_jogadores número de jogadores.  
    */ 
        void atribui_caracteristicas_ao_jogador(int num_jogadores);

		/**
    * Função de retorno booleano.  
		* É responsável por retirar uma peça escolhida pelo jogador de uma CasaAntiga e colocá-la em uma CasaNova. 
    * @param player objeto do tipo Jogador que está movendo a peça.
		* @param peca peça que será movida.
		* @param CasaAntiga ponteiro para o objeto Casa em que a peça está antes da movimentação.
		* @param CasaNova ponteiro para o objeto Casa em que a peça estará no final da movimentação.
		* @return Caso durante essa movimentação ocorra a captura de uma peça, retorna true. Caso contrário, retorna false.
    */ 
        bool movePeca(std::shared_ptr<Jogador> player, Peca peca, Casa *CasaAntiga, Casa *CasaNova);
        
/* 
CASO 1 
Jogador tirou 6 no dado e têm quatro peças na base. 
	Só há uma jogada possível: a de tirar uma peça. 
*/

			/**
			* Função de retorno vazio.  
			* É responsável por imprimir imprimir na tela as peças que o jogador pode movimentar, receber sua escolha e chamar as função responsáveis por tirar as peças da base.
			* @param player objeto do tipo Jogador que está movendo a peça.
			* @param tabuleiro ponteiro inteligente para o objeto do tipo Tabuleiro (que contém os caminhos em que as peças se movem.)
			*/ 
        void Caso1(std::shared_ptr<Jogador> player, std::shared_ptr<Tabuleiro> tabuleiro);
			
			/**
			* Função de retorno vazio.  
			* É responsável por realizar o movimento das peças do computador quando há quatro peças na base e ele tirou um seis no dado.
			* Verifica quantas peças estão na base (na posição -1) e sorteia uma delas para ser retirada.
			* @param computador objeto do tipo Jogador que está movendo a peça.
			* @param tabuleiro ponteiro inteligente para o objeto do tipo Tabuleiro (que contém os caminhos em que as peças se movem.)
			*/ 
				void computador_Caso1(std::shared_ptr<Jogador> computador, std::shared_ptr<Tabuleiro> tabuleiro);

/* 
CASO 2
Jogador tirou 6 no dado e têm menos do que quatro peças na base.
	Jogador pode escolher movimentar uma peça do tabuleiro ou tirar uma peça da base. 
*/
			/**
			* Função de retorno vazio.  
			* É responsável por realizar o movimento das peças de um jogador humano quando há menos do que quatro peças na base e ele tirou um seis no dado.
			* Imprime na tela quais peças o jogador pode movimentar e a partir da escolha feita, chama as funções responsáveis pela movimentação.
			* @param player objeto do tipo Jogador que está movendo a peça.
			* @param tabuleiro ponteiro inteligente para o objeto do tipo Tabuleiro (que contém os caminhos em que as peças se movem.)
			* @param faceDoDado número que o jogador obteve no dado.
			* @param comeu booleano que é passado como parâmetro pois faz parte de um escopo mais geral. É alterado ao longo da função.
			*/ 
        void Caso2(std::shared_ptr<Jogador> player, std::shared_ptr<Tabuleiro> tabuleiro, int faceDoDado, bool comeu);

			/**
			* Função de retorno vazio.  
			* É responsável por realizar o movimento das peças do computador quando há menos do que quatro peças na base e ele tirou seis no dado.
			* Analisa entre as peças do jogador se há alguma peça que possa realizar um dado movimento, caso haja jogadas disponíveis, sorteia uma entre as peças.
			* Caso não haja jogadas disponíveis imprime na tela a mensagem informando isto.
			* @param computador objeto do tipo Jogador que está movendo a peça.
			* @param tabuleiro ponteiro inteligente para o objeto do tipo Tabuleiro (que contém os caminhos em que as peças se movem.)
			* @param faceDoDado número que o jogador obteve no dado.
			* @param comeu booleano que é passado como parâmetro pois faz parte de um escopo mais geral. É alterado ao longo da função.
			*/ 
        void computador_Caso2(std::shared_ptr<Jogador> computador, std::shared_ptr<Tabuleiro> tabuleiro, int faceDoDado, bool comeu);
/* 
CASO 3 
Jogador tirou algum número diferente de 6 no dado (e tem menos do que quatro peças na base).
	Deve escolher uma peça do tabuleiro para movimentar.  
*/
			
			/**  
			* É responsável por realizar o movimento das peças de um jogador humano quando há menos do que quatro peças na base e ele tirou um número diferente de seis no dado.
			* Analisa entre as peças do jogador se há alguma peça que possa realizar um dado movimento, caso haja jogadas disponíveis, espera a entrada do jogador com a escolha.
			* @param computador objeto do tipo Jogador que está movendo a peça.
			* @param tabuleiro ponteiro inteligente para o objeto do tipo Tabuleiro (que contém os caminhos em que as peças se movem.)
			* @param faceDoDado número que o jogador obteve no dado.
			* @param comeu booleano que é passado como parâmetro pois faz parte de um escopo mais geral. É alterado ao longo da função.
      * @return true se ainda sera o mesmo e false se nao for.
			*/ 
        bool Caso3(std::shared_ptr<Jogador> player, std::shared_ptr<Tabuleiro> tabuleiro, int faceDoDado, bool comeu);

			/** 
			* É responsável por realizar o movimento das peças do computador quando há menos do que quatro peças na base e ele tirou um número diferente de seis no dado.
			* Analisa entre as peças do jogador se há alguma peça que possa realizar um dado movimento, caso haja jogadas disponíveis, sorteia uma entre as peças.
			* Caso não haja jogadas disponíveis imprime na tela a mensagem informando isto.
			* @param computador objeto do tipo Jogador que está movendo a peça.
			* @param tabuleiro ponteiro inteligente para o objeto do tipo Tabuleiro (que contém os caminhos em que as peças se movem.)
			* @param faceDoDado número que o jogador obteve no dado.
			* @param comeu booleano que é passado como parâmetro pois faz parte de um escopo mais geral. É alterado ao longo da função.
      * @return true se ainda sera o mesmo e false se nao for.
			*/ 
        bool computador_Caso3(std::shared_ptr<Jogador> computador, std::shared_ptr<Tabuleiro> tabuleiro, int faceDoDado, bool comeu); 

			/**
			* Função de retorno inteiro.  
			* É responsável por analisar se o jogador realizando a jogada é um humano ou computador e articular toda a movimentação de acordo com os casos 1, 2 e 3 previamente explicados, chamando as funções apropriadas.
			* @return Retorna um inteiro que indica se deve haver troca de turno (passar para a vez do próximo jogador) ou não.
			* @param player objeto do tipo Jogador que irá jogar o dado e realizar uma movimentação.
			* @param tabuleiro ponteiro inteligente para o objeto do tipo Tabuleiro (que contém os caminhos em que as peças se movem.)
			*/ 
        int jogada(std::shared_ptr<Jogador> player, std::shared_ptr<Tabuleiro> tabuleiro);   

			/**
			* Função de retorno inteiro.  
			* É responsável por analisar se o jogador tem as suas quatro peças na última casa de seu respectivo caminho colorido.
			* @param player objeto do tipo Jogador.
      * @return Se houver um vencedor, ele retorna o numero correspondente a cor do mesmo.
			*/ 
				int checaVencedor(std::shared_ptr<Jogador> player); 
				
			/**
			* Função de retorno vazio.  
			* Imprime uma formatação ASCII com uma mensagem de parabenização quando um jogador promove as suas quatro peças.
			*/ 
				void telaVencedor();

			/**
				* Função de retorno vazio.  
				* Acessa o objeto privado "estatisticas" de Players e imprime na tela as estatísticas do jogo. 
			*/
				void getEstatisticas();
};

#endif 