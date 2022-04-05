#include "Jogador.hpp"
#include "Tabuleiro.hpp"
#include "Casa.hpp"
#include "Dado.hpp"
#include "Players.hpp"
#include <memory>
#include <locale>
#include "Turno.hpp"
#include "Estatisticas.hpp"

int main(){

  //declarando o turno
  std::shared_ptr<Turno> turno = std::make_shared<Turno>();
  //declara o tabuleiro
  std::shared_ptr<Tabuleiro> tabuleiro = std::make_shared<Tabuleiro>();

  //declarando os jogadores
  std::shared_ptr<Players> jogadores = std::make_shared<Players>();

  while(turno->get_turno() == 0){
    //inserindo numero de jogadores reais
    std::locale loc;
    std::string numeroDeJogadores = "50"; 
    
    escolhaNumeroDeJogadores: 

    numeroDeJogadores.clear();
    std::cout << "Insira o número de jogadores: ";
    std::cin >> numeroDeJogadores;
    if( isdigit(numeroDeJogadores[0], loc) ){
      if(std::stoi(numeroDeJogadores) < 0 || std::stoi(numeroDeJogadores) > 4){
        std::cout << "Valor inseriu um valor inválido. " << std::endl;
        numeroDeJogadores.clear();
        goto escolhaNumeroDeJogadores;
      }
    }else{
      std::cout << "Você inseriu um valor inválido. ";
      numeroDeJogadores.clear();
      goto escolhaNumeroDeJogadores;
    }
  //imprimindo tabuleiro
	tabuleiro->imprimePosicoesDasCasas();
  
  //atribuindo cores aos jogadores reais
  jogadores->atribui_caracteristicas_ao_jogador(std::stoi(numeroDeJogadores));

  turno->set_turno();

  }  
  while (turno->get_turno() < 5){

    while (turno->get_turno() == 1){ //vez do vermelho
      if(!jogadores->jogada(jogadores->vermelho, tabuleiro))
        turno->set_turno();
    }

		if(jogadores->checaVencedor(jogadores->vermelho) == 1){
			turno->haVencedor();
		}

    while (turno->get_turno() == 2){ //vez do azul
      if(!jogadores->jogada(jogadores->azul, tabuleiro))
        turno->set_turno();
    }

		if(jogadores->checaVencedor(jogadores->azul) == 2){
			turno->haVencedor();
		}

    while (turno->get_turno() == 3){ //vez do verde
      if(!jogadores->jogada(jogadores->verde, tabuleiro))
        turno->set_turno();
    }    

		if(jogadores->checaVencedor(jogadores->verde) == 3){
			turno->haVencedor();
		}

    while (turno->get_turno() == 4){ //vez do amarelo
      if(!jogadores->jogada(jogadores->amarelo, tabuleiro))
        turno->set_turno();
    }

		if(jogadores->checaVencedor(jogadores->amarelo) == 4){
			turno->haVencedor();
		}		
  }
  
	jogadores->telaVencedor();
  return 0;
}
