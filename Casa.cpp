#include "Casa.hpp"
#include <iostream>

Casa::Casa(){
  posicao_ = 0;
  casaSegura = false;
}

Casa::~Casa(){
}

void Casa::colocaPeca(Peca peca){
	PecasNaCasa.push_back(peca);	
}

void Casa::tiraPeca(Peca peca){
	for(int i = 0; i < static_cast<int>(PecasNaCasa.size()); i++){
		if( ( PecasNaCasa.at(static_cast<size_t>(i)).get_token() == peca.get_token() ) && (PecasNaCasa.at(static_cast<size_t>(i)).get_numero() == peca.get_numero())){

			PecasNaCasa.erase( PecasNaCasa.begin() + static_cast<size_t>(i) );
		}
	}
}

bool Casa::ehSegura(){
	return casaSegura;
}

void Casa::setSegura(){
	casaSegura = true;
}

bool Casa::estaVazia(){
	if(PecasNaCasa.size() == 0){ return true;}
	else{ return false; }
}

void Casa::setPosicao(int nova){
  posicao_ = nova;
}

int Casa::getPosicao(){
  return posicao_;
}

std::string Casa::imprimePecas(){

	if(PecasNaCasa.size() == 0){
		return "  ";
	}
	if(PecasNaCasa.size() == 1){

		char temp1 = PecasNaCasa.at(0).get_token();
		int temp2 = PecasNaCasa.at(0).get_numero() + 1;
		std::string id = "";

  	if(PecasNaCasa.at(0).get_token()  == '@'){
    	id += "\033[1;31m";
  	}
		if(PecasNaCasa.at(0).get_token() == '#'){
			id += "\033[1;34m";
		}
		if(PecasNaCasa.at(0).get_token() == '$'){
			id += "\033[1;32m";
		}
		if(PecasNaCasa.at(0).get_token() == '%'){
			id += "\033[1;33m";
		}

		id.insert(id.end(), temp1); 
		id += std::to_string(temp2);
		id += "\033[0m";
		return id;
	}
	if(PecasNaCasa.size() > 1){
		std::string id = "";
		if(getPosicao() < 10){
			id.insert(id.begin(), '0');
			id+= std::to_string(getPosicao() + 1);
			return id;
		}else{
			return std::to_string( getPosicao() + 1);
		}
	}
	return 0;
}

Peca Casa::getPecasNaCasa(int pos){
	return PecasNaCasa.at(static_cast<size_t>(pos));
}

int Casa::getNumeroDePecasNaCasa(){
	return static_cast<int>( PecasNaCasa.size() ); 
}