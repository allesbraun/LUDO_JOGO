#include "Turno.hpp"

Turno::Turno(){
  turno_ = 0;
  vencedor_ = false;
}
Turno::~Turno(){

}
void Turno::set_turno(){
  if(turno_ < 4){
    turno_++;
  }else if(turno_ == 4 && !get_vencedor()){
    turno_ = 1;
  }else if(turno_ == 4 && get_vencedor()){
    turno_++;
  }else{
    turno_ = 0;
  }
}
int Turno::get_turno(){
  return turno_;
}

void Turno::haVencedor(){
  vencedor_ = true;
	turno_ = 5;
}

bool Turno::get_vencedor(){
  return vencedor_;
}
