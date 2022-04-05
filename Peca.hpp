#ifndef PECA_HPP
#define PECA_HPP

class Peca{
  private:
    int posicao_;
    char token_;
		int numero_;
    bool esta_no_caminho_;
		bool passou_pelo_inicio_;
		 
  public:
    Peca();
    ~Peca();
    /**
    * Da acesso a posicao da peca.
    * @return posicao da peca.  
    */
    int get_posicao();
    /**
    * Atualiza a posicao da peca.
    * @param nova_posicao nova posicao da peca.  
    */
		void set_posicao(int nova_posicao);
    /**
    * Atualiza o token da peca de acordo com a cor da mesma.
    * @param cor a cor da peca.  
    */
    void set_token(int cor);
    /**
    * Da acesso ao token da peca.
    * @return token da peca.  
    */
    char get_token();
    /**
    * Inicializa o numero da peca com a valores de 1 a 4.
    * @param novo_numero novo numero da peca.  
    */
		void set_numero(int novo_numero);
    /**
    * Da acesso ao numero da peca.
    * @return numero da peca.  
    */
		int get_numero(); 
    /**
    * Mostra se a peca esta ou nao no seu caminho final.
    * @return true se ela ja chegou la e false se ela ainda nao chegou.  
    */
    bool get_esta_no_caminho();
    /**
    * Caso a peca chegue ao caminho a variavel esta_no_caminho_ sera atualizada para true.
    * @param estaOuNao true ou false dependendo se ela chegou no caminho.  
    */
    void set_esta_no_caminho(bool estaOuNao);
    /**
    * Mostra se a peca ja passou pela posicao 0 do tabuleiro.
    * @return true se ela passou e false caso contrario.  
    */
		bool get_passou_pelo_inicio(); 
    /**
    * Caso a peca passe pela posicao 0 do tabuleiro sera atualizada para true.
    * @param passouOuNao true ou false dependendo se ela passou pela casa 0.  
    */
		void set_passou_pelo_inicio(bool passouOuNao);
};
#endif