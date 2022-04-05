#ifndef TABULEIRO_HPP
#define TABULEIRO_HPP

#include <iostream>
#include "Casa.hpp"
#include <memory>

class Tabuleiro{

  private:
  
  //GERAL

  Casa* nova0 = 0;
  Casa* nova1 = 0;
  Casa* nova2 = 0;
  Casa* nova3 = 0;
  Casa* nova4 = 0;
  Casa* nova5 = 0;
  Casa* nova6 = 0;
  Casa* nova7 = 0;
  Casa* nova8 = 0;
  Casa* nova9 = 0;
  Casa* nova10 = 0;
  Casa* nova11 = 0;
  Casa* nova12 = 0;
  Casa* nova13 = 0;
  Casa* nova14 = 0;
  Casa* nova15 = 0;
  Casa* nova16 = 0;
  Casa* nova17 = 0;
  Casa* nova18 = 0;
  Casa* nova19 = 0;
  Casa* nova20 = 0;
  Casa* nova21 = 0;
  Casa* nova22 = 0;
  Casa* nova23 = 0;
  Casa* nova24 = 0;
  Casa* nova25 = 0;
  Casa* nova26 = 0;
  Casa* nova27 = 0;
  Casa* nova28 = 0;
  Casa* nova29 = 0;
  Casa* nova30 = 0;
  Casa* nova31 = 0;
  Casa* nova32 = 0;
  Casa* nova33 = 0;
  Casa* nova34 = 0;
  Casa* nova35 = 0;
  Casa* nova36 = 0;
  Casa* nova37 = 0;
  Casa* nova38 = 0;
  Casa* nova39 = 0;
  Casa* nova40 = 0;
  Casa* nova41 = 0;
  Casa* nova42 = 0;
  Casa* nova43 = 0;
  Casa* nova44 = 0;
  Casa* nova45 = 0;
  Casa* nova46 = 0;
  Casa* nova47 = 0;
  Casa* nova48 = 0;
  Casa* nova49 = 0;
  Casa* nova50 = 0;
  Casa* nova51 = 0;
  Casa* nova52 = 0;
  Casa* nova53 = 0;
  Casa* nova54 = 0;
  Casa* nova55 = 0;

  //VERDE

  Casa* nova_verde0 = 0;
  Casa* nova_verde1 = 0;
  Casa* nova_verde2 = 0;
  Casa* nova_verde3 = 0;
  Casa* nova_verde4 = 0;
  Casa* nova_verde5 = 0;

  //AMARELO

  Casa* nova_amarelo0 = 0;
  Casa* nova_amarelo1 = 0;
  Casa* nova_amarelo2 = 0;
  Casa* nova_amarelo3 = 0;
  Casa* nova_amarelo4 = 0;
  Casa* nova_amarelo5 = 0;

  //VERMELHO

  Casa* nova_vermelho0 = 0;
  Casa* nova_vermelho1 = 0;
  Casa* nova_vermelho2 = 0;
  Casa* nova_vermelho3 = 0;
  Casa* nova_vermelho4 = 0;
  Casa* nova_vermelho5 = 0;

  //AZUL

  Casa* nova_azul0 = 0;
  Casa* nova_azul1 = 0;
  Casa* nova_azul2 = 0;
  Casa* nova_azul3 = 0;
  Casa* nova_azul4 = 0;
  Casa* nova_azul5 = 0;

  public:

  std::shared_ptr<std::vector< Casa *>> CaminhoGeral = std::make_shared<std::vector<Casa *>>();
  std::shared_ptr<std::vector< Casa *>> CaminhoAzul = std::make_shared<std::vector<Casa *>>();
  std::shared_ptr<std::vector< Casa *>> CaminhoVerde = std::make_shared<std::vector<Casa *>>();
  std::shared_ptr<std::vector< Casa *>> CaminhoVermelho = std::make_shared<std::vector<Casa *>>();
  std::shared_ptr<std::vector< Casa *>> CaminhoAmarelo = std::make_shared<std::vector<Casa *>>();
  
	/**
	* Função de retorno vazio.  
	* Imprime a formatação ASCII do tabuleiro com as respectivas posições das casas.
	*/ 
  void imprimePosicoesDasCasas();
	
	/**
	* Função de retorno vazio.  
	* Imprime a formatação ASCII do tabuleiro com as peças que estão nas casas.
	*/ 
  void imprimeTabuleiro();

  Tabuleiro();

  ~Tabuleiro();

  Tabuleiro(const Tabuleiro &obj);

};

#endif