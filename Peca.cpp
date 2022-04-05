#include "Peca.hpp"

Peca::Peca(){
  posicao_ = -1;
  esta_no_caminho_ = false;
	passou_pelo_inicio_ = false;
	token_ = '!';
	numero_ = 0;
}

Peca::~Peca(){
}

int Peca::get_posicao(){
  return posicao_;
} 

void Peca::set_posicao(int nova_posicao){
  posicao_= nova_posicao;
}

void Peca::set_token(int cor){
  if(cor == 1){
    token_ = '@';
  }
  if(cor == 2){
    token_ = '#';
  }
  if(cor == 3){
    token_ = '$';
  }
  if(cor == 4){
    token_ = '%';
  }
}
       	 
char Peca::get_token(){
	return token_; 
}

void Peca::set_numero(int novo_numero){
	numero_ = novo_numero;
}
		
int Peca::get_numero(){
	return numero_; 
} 

bool Peca::get_esta_no_caminho(){
  return esta_no_caminho_;
}

void Peca::set_esta_no_caminho(bool estaOuNao){
  esta_no_caminho_ = estaOuNao;
}


bool Peca::get_passou_pelo_inicio(){
	return passou_pelo_inicio_;
} 

void Peca::set_passou_pelo_inicio(bool passouOuNao){
	passou_pelo_inicio_ = passouOuNao; 
}