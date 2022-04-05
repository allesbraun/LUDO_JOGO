#include "Dado.hpp"

int Dado::jogaDado(){
  std::random_device rd;
  std::mt19937 gen(rd()); 
  std::uniform_int_distribution<> distrib(1, 6);
  return distrib(gen);
}
int Dado::escolhePeca(){
  std::random_device rd;
  std::mt19937 gen(rd()); 
  std::uniform_int_distribution<> distrib(1, 4);
  return distrib(gen);
}

