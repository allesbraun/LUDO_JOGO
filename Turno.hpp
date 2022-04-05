#ifndef TURNO_HPP
#define TURNO_HPP

class Turno{
  private:
  int  turno_;
  bool vencedor_;
  public:
  Turno();
  ~Turno();
	
	/**
	* Função de retorno vazio.  
	* Atribui o valor adequado à variável "turno_" de Turno, indicando de qual jogador é a vez.
	*/ 
  void set_turno();
	/**
	* Função de retorno inteiro.  
	* Retorna a variável privada "turno_" da classe Turno, indicando de qual jogador é a vez.
	*/ 
  int get_turno();

	/**
	* Função de retorno vazio.  
	* Caso um jogador promova suas quatro peças, atribui valor "true" para a variável privada "vencedor_" de turno. Indicando que deve ir para 5, valor de encerramento da partida.
	*/ 
  void haVencedor();
	/**
	* Função de retorno booleano.  
	* Acessa a variável privada "jogador_" de turno. Retorna "true" caso algum jogador tenha promovido suas quatro peças.
	*/ 
  bool get_vencedor();
};

#endif