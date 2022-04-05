#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "Tabuleiro.hpp"
#include "Dado.hpp"
#include <memory>

class Jogador:public Dado, public Tabuleiro{
	public: 
		Jogador();
    ~Jogador();
    
    Jogador(const Jogador &obj);
    
		Jogador(int nova_cor);
		
    /**
    * Atualiza o nome do jogador para o escolhido pelo usuario.
    * @param novoNome nome escolhido pelo usuario.  
    */
		void setNome(std::string novoNome);
    /**
    * Mostra que se o objeto eh uma pessoa ou computador.
    * @return true se eh uma pessoa e false se eh um computador.  
    */
		bool ehJogador();
    /**
    * Atualiza o booleano quanto a ser ou não humano.
    * @param novo setado para true se o jogador for humano.  
    */
    void set_jogador(bool novo);
    /**
    * Da acesso ao nome do jogador.
    * @return nome do jogador.  
    */
		std::string imprimeNome();
    /**
    * Da acesso ao numero de pecas na base.
    * @return numero de pecas na base.  
    */
		int getPecasBase();
    /**
    * Aumenta o numero o numero de pecas na base e reseta os atributos da peca.
    * @param peca uma peca capturada.  
    */
		void voltaPecaPraBase(Peca peca);
    /**
    * Diminui o numero de pecas na base e atualiza a posicao da peca.
    * @param num o numero da peca que saira da base.
    * @param nova_posicao a posicao que ela vai receber.  
    */
		void tiraPecaDaBase(int num, int nova_posicao); 
    /**
    * Atualiza a cor para a obtida do construtor.
    * @param nova_cor cor fornecida pelo construtor.  
    */
		void set_cor(int nova_cor);
    /**
    * Da acesso a cor do jogador.
    * @return cor do jogador.  
    */
		int get_cor();
    /**
    * Da acesso a uma peca do jogador.
    * @param pos posicao da peca no vector PecasDoJogador.
    * @return peca correspondente a sua posicao no vector PecasDoJogador.
    */
		Peca get_PecasDoJogador(int pos);
    /**
    * Coloca a peca na sua posicao correspondente no vector PecasDoJogador.
    * @param num numero que identifica a peca a ser atualizada.
    * @param pos posicao da peca no vector PecasDoJogador.
    */
		void setPosicaoPecasDoJogador(int num, int pos);
    /**
    * Define a posicao inicial do jogador dependendo de sua cor.
    */
		void set_PosicaoInicial();
    /**
    * Da acesso a posicao inicial do jogador.
    * @return posicao inicial do jogador.
    */
		int get_PosicaoInicial();
    /**
    * Define a posicao final do jogador dependendo de sua cor.
    */
		void set_PosicaoFinal();
    /**
    * Da acesso a posicao final do jogador.
    * @return posicao final do jogador.
    */
		int get_PosicaoFinal();
    /**
    * Define o token de acordo com a cor. Sendo @ - 1, # - 2, $ - 3, % - 4.
    * @param nova_cor cor fornecida pelo construtor.  
    */
		void set_token(int nova_cor);
    /**
    * Da acesso ao token do jogador.
    * @return token do jogador.
    */
		char get_token();
    /**
    * Atualiza caso a peca do jogador chegue ao seu caminho para que novas condicoes e tarefas sejam executadas.
    * @param num numero que identifica a peca a ser atualizada.
    * @param estado true se esta no caminho e false se ainda nao esta.
    */
		void setEstaNoCaminho(int num, bool estado);
    /**
    * Atualiza caso a peca do jogador passe pela casa 0 do tabuleiro para que novas condicoes e tarefas sejam executadas.
    * @param num numero que identifica a peca a ser atualizada.
    * @param estado true se passou pela casa 0 e false se ainda nao passou.
    */
		void setPassouPeloInicio(int num, bool estado);
		
	private:
    std::shared_ptr<Peca> peca_;
		bool jogador;
		int PecasNaBase;
		std::string nome;
   	int cor; 
		std::vector<Peca> PecasDoJogador; 
    int posicao_inicial_;
		int posicao_final_;
    char token_;
};

#endif