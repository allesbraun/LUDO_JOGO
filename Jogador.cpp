#include "Jogador.hpp"
#include "Peca.hpp"

Jogador::Jogador(){}
Jogador::~Jogador(){}

Jogador::Jogador(const Jogador &obj): Tabuleiro(obj){
	peca_ = std::make_shared<Peca>();
	PecasNaBase = obj.PecasNaBase;
	peca_ = obj.peca_; 
	jogador = obj.jogador;
	nome = obj.nome;
	cor = obj.cor;
	PecasDoJogador = obj.PecasDoJogador; 
 	posicao_inicial_ = obj.posicao_inicial_;
	posicao_final_ = obj.posicao_final_;
	token_ = obj.token_;
}

Jogador::Jogador(int nova_cor){
	set_jogador(false);
	setNome("Computador");
	PecasNaBase = 4;
	set_cor(nova_cor);
  set_token(nova_cor);
	set_PosicaoInicial();
	set_PosicaoFinal();

	if(nova_cor == 3){
    for(int i = 0; i < PecasNaBase; i++){
      peca_ = std::make_shared<Peca>();
      peca_->set_numero(i);
      peca_->set_token(nova_cor);
      peca_->set_passou_pelo_inicio(true);
      PecasDoJogador.push_back(*peca_);
		}
	}else{
		for(int i = 0; i < PecasNaBase; i++){
			peca_ = std::make_shared<Peca>();
			peca_->set_numero(i);
			peca_->set_token(nova_cor);
			PecasDoJogador.push_back(*peca_);
		}
	}
}

void Jogador::setPassouPeloInicio(int num, bool estado){
	PecasDoJogador.at( static_cast<size_t>(num) ).set_passou_pelo_inicio(estado);
}

void Jogador::setEstaNoCaminho(int num, bool estado){
	PecasDoJogador.at( static_cast<size_t>(num) ).set_esta_no_caminho(estado);
}

void Jogador::setNome(std::string novoNome){
	nome.clear();
	nome = novoNome; 
}

bool Jogador::ehJogador(){
	return jogador; 
}

void Jogador::set_jogador(bool novo){
	jogador = novo;
}

std::string Jogador::imprimeNome(){
  return nome; 
}

int Jogador::getPecasBase(){
  return PecasNaBase;
}

void Jogador::tiraPecaDaBase(int num, int nova_posicao){
	PecasNaBase--; 
	PecasDoJogador.at(static_cast<size_t>(num)).set_posicao(nova_posicao);
}

void Jogador::set_cor(int nova_cor){
  cor = nova_cor;
}

int Jogador::get_cor(){
	return cor; 
}

Peca Jogador::get_PecasDoJogador(int pos){
	return PecasDoJogador.at(static_cast<size_t>(pos));
}

void Jogador::setPosicaoPecasDoJogador(int num, int pos){
	PecasDoJogador.at( static_cast<size_t>(num) ).set_posicao(pos);
}

void Jogador::set_PosicaoInicial(){
  if(get_cor() == 1){
    posicao_inicial_ = 28;//vermelho  
  }
  if(get_cor() == 2){
    posicao_inicial_ = 42;//azul  
  }
  if(get_cor() == 3){
    posicao_inicial_ = 0;//verde  
  }
  if(get_cor() == 4){
    posicao_inicial_ = 14;//amarelo 
  }
}

int Jogador::get_PosicaoInicial(){
  return posicao_inicial_;
}

void Jogador::set_PosicaoFinal(){
	if(get_cor() == 1){
    posicao_final_ = 25; //vermelho
  }
  if(get_cor() == 2){
    posicao_final_ = 40; //azul
  }
  if(get_cor() == 3){
    posicao_final_ = 54; //verde
  }
  if(get_cor() == 4){
    posicao_final_ = 12; //amarelo
  }
}

int Jogador::get_PosicaoFinal(){
	return posicao_final_; 
}

void Jogador::set_token(int nova_cor){
  
	switch(nova_cor){
    case 1:
    token_ = '@';
    break;

    case 2:
    token_ = '#';
    break;

    case 3:
    token_ = '$';
    break;

    case 4:
    token_ = '%';
    break;

    default:
    break;
  }
}

char Jogador::get_token(){
  return token_;
}

void Jogador::voltaPecaPraBase(Peca peca){
	PecasNaBase++;
	setPosicaoPecasDoJogador(peca.get_numero(), -1);
	setEstaNoCaminho(peca.get_numero(), false);
	setPassouPeloInicio(peca.get_numero(), false);
	if(peca.get_token() == '$'){setPassouPeloInicio(peca.get_numero(), false);}
}



