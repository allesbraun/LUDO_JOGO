#ifndef ESTATISTICAS_HPP
#define ESTATISTICAS_HPP

#include <chrono>
#include <iostream>

class Estatisticas{
  private:	
	int voltasPraBaseVermelho;
	int voltasPraBaseAzul;
	int voltasPraBaseVerde;
	int voltasPraBaseAmarelo;

	int capturasVermelho;
	int capturasAzul;
	int capturasVerde;
	int capturasAmarelo;
	
	int unsVermelho;
	int unsAzul;
	int unsVerde;
	int unsAmarelo;
	
	int seisVermelho;
	int seisAzul;
	int seisVerde;
	int seisAmarelo;

  public:

	Estatisticas();

	/**
		* Para a medição de tempo iniciada no construtor e imprime na tela quanto tempo durou a partida. 
		* Desaloca a memória alocada para as variáveis privadas de Estatisticas. 
	*/
  ~Estatisticas();


	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "voltasPraBaseVermelho". 
		* É chamada quando uma peça vermelha é capturada.
	*/
	void incrementaVoltasPraBaseVermelho();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "voltasPraBaseAzul". 
		* É chamada quando uma peça azul é capturada.
	*/
	void incrementaVoltasPraBaseAzul();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "voltasPraBaseVerde". 
		* É chamada quando uma peça Verde é capturada.
	*/
	void incrementaVoltasPraBaseVerde();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "voltasPraBaseAmarelo". 
		* É chamada quando uma peça amarela é capturada.
	*/
	void incrementaVoltasPraBaseAmarelo();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "capturasVermelho". 
		* É chamada quando o jogador vermelho captura uma peça de outro jogador.
	*/
	void incrementaCapturasVermelho();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "capturasAzul". 
		* É chamada quando o jogador azul captura uma peça de outro jogador.
	*/
	void incrementaCapturasAzul();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "capturasVerde". 
		* É chamada quando o jogador verde captura uma peça de outro jogador.
	*/	
	void incrementaCapturasVerde();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "capturasAmarelo". 
		* É chamada quando o jogador amarelo captura uma peça de outro jogador.
	*/	
	void incrementaCapturasAmarelo();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "unsVermelho". 
		* É chamada quando o jogador vermelho tira o número 1 (um) no dado.
	*/	
	void incrementaUnsVermelho();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "unsAzul". 
		* É chamada quando o jogador azul tira o número 1 (um) no dado.
	*/	
	void incrementaUnsAzul();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "unsVerde". 
		* É chamada quando o jogador verde tira o número 1 (um) no dado.
	*/	
	void incrementaUnsVerde();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "unsAmarelo". 
		* É chamada quando o jogador amarelo tira o número 1 (um) no dado.
	*/		
	void incrementaUnsAmarelo();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "seisVermelho". 
		* É chamada quando o jogador vermelho tira o número 6 (seis) no dado.
	*/
	void incrementaSeisVermelho();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "seisAzul". 
		* É chamada quando o jogador azul tira o número 6 (seis) no dado.
	*/	
	void incrementaSeisAzul();

	/* 
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "seisVerde". 
		* É chamada quando o jogador verde tira o número 6 (seis) no dado.
	*/
	void incrementaSeisVerde();

	/**
		* Função de retorno vazio.
		* É responsável por acrescentar em 1 (um) o parâmetro privado de Estatisticas "seisAmarelo". 
		* É chamada quando o jogador amarelo tira o número 6 (seis) no dado.	
	*/
	void incrementaSeisAmarelo();

	/**
		* Função de retorno vazio.
		* É chamada depois do término da partida e imprime na tela quantas vezes cada jogador capturou e foi capturado, além de mostrar o jogador mais azarad (aquele que tirou o maior número de uns no dado durante a partida) e o jogador mais sortudo (aquele que tirou o maior número de seis no dado durante a partida).
	*/
	void imprimeEstatisticas();
};

#endif