#include "Estatisticas.hpp"

Estatisticas::Estatisticas(){
	
	voltasPraBaseVermelho = 0;
	voltasPraBaseAzul = 0;
	voltasPraBaseVerde = 0;
	voltasPraBaseAmarelo = 0;

	capturasVermelho = 0;
	capturasAzul = 0;
	capturasVerde = 0;
	capturasAmarelo = 0;
	
	unsVermelho = 0;
	unsAzul = 0;
	unsVerde = 0;
	unsAmarelo = 0;
	
	seisVermelho = 0;
	seisAzul = 0;
	seisVerde = 0;
	seisAmarelo = 0;

}

Estatisticas::~Estatisticas(){

}

void Estatisticas::incrementaVoltasPraBaseVermelho(){
	voltasPraBaseVermelho++;
}

void Estatisticas::incrementaVoltasPraBaseAzul(){
	voltasPraBaseAzul++;
}

void Estatisticas::incrementaVoltasPraBaseVerde(){
	voltasPraBaseVerde++;
}

void Estatisticas::incrementaVoltasPraBaseAmarelo(){
	voltasPraBaseAmarelo++;
}

void Estatisticas::incrementaCapturasVermelho(){
	capturasVermelho++;
}

void Estatisticas::incrementaCapturasAzul(){
	capturasAzul++;
}

void Estatisticas::incrementaCapturasVerde(){
	capturasVerde++;
}

void Estatisticas::incrementaCapturasAmarelo(){
	capturasAmarelo++;
}

void Estatisticas::incrementaUnsVermelho(){
	unsVermelho++;
}

void Estatisticas::incrementaUnsAzul(){
	unsAzul++;
}

void Estatisticas::incrementaUnsVerde(){
	unsVerde++;
}

void Estatisticas::incrementaUnsAmarelo(){
	unsAmarelo++;
}

void Estatisticas::incrementaSeisVermelho(){
	seisVermelho++;
}

void Estatisticas::incrementaSeisAzul(){
	seisAzul++;
}

void Estatisticas::incrementaSeisVerde(){
	seisVerde++;
}

void Estatisticas::incrementaSeisAmarelo(){
	seisAmarelo++;
}

void Estatisticas::imprimeEstatisticas(){

	std::cout << "\nJogador \033[1;31mVERMELHO\033[0m capturou " << capturasVermelho << " peças e foi capturado " << voltasPraBaseVermelho << " vezes." ;

	std::cout << "\nJogador \033[1;34mAZUL\033[0m capturou " << capturasAzul << " peças e foi capturado " << voltasPraBaseAzul << " vezes." ;

	std::cout << "\nJogador \033[1;32mVERDE\033[0m capturou " << capturasVerde << " peças e foi capturado " << voltasPraBaseVerde << " vezes." ;

	std::cout << "\nJogador \033[1;33mAMARELO\033[0m capturou " << capturasAmarelo << " peças e foi capturado " << voltasPraBaseAmarelo << " vezes." ;

	if(unsVermelho > unsAzul && unsVermelho > unsVerde && unsVermelho > unsAmarelo){ std::cout << "\nO jogador mais azarado foi o \033[1;31mVERMELHO\033[0m, tendo tirado " << unsVermelho << " vezes o número 1 no dado!" << std::endl; }
	if(unsAzul > unsVermelho && unsAzul > unsVerde && unsAzul > unsAmarelo){ std::cout << "\nO jogador mais azarado foi o \033[1;34mAZUL\033[0m, tendo tirado " << unsAzul << " vezes o número 1 no dado!" << std::endl; }
	if(unsVerde > unsAzul && unsVerde > unsVermelho && unsVerde > unsAmarelo){ std::cout << "\nO jogador mais azarado foi o \033[1;32mVERDE\033[0m, tendo tirado " << unsVerde << " vezes o número 1 no dado!" << std::endl; }
	if(unsAmarelo > unsAzul && unsAmarelo > unsVerde && unsAmarelo > unsVermelho){ std::cout << "\nO jogador mais azarado foi o \033[1;33mAMARELO\033[0m, tendo tirado " << unsAmarelo << " vezes o número 1 no dado!" << std::endl; }

	if(seisVermelho > seisAzul && seisVermelho > seisVerde && seisVermelho > seisAmarelo){ std::cout << "\nO jogador mais sortudo foi o \033[1;31mVERMELHO\033[0m, tendo tirado " << seisVermelho << " vezes o número 6 no dado!" << std::endl; }
	if(seisAzul > seisVermelho && seisAzul > seisVerde && seisAzul > seisAmarelo){ std::cout << "\nO jogador mais sortude foi o \033[1;34mAZUL\033[0m, tendo tirado " << seisAzul << " vezes o número 6 no dado!" << std::endl; }
	if(seisVerde > seisAzul && seisVerde > seisVermelho && seisVerde > seisAmarelo){ std::cout << "\nO jogador mais sortudo foi o \033[1;32mVERDE\033[0m, tendo tirado " << seisVerde << " vezes o número 6 no dado!" << std::endl; }
	if(seisAmarelo > seisAzul && seisAmarelo > seisVerde && seisAmarelo > seisVermelho){ std::cout << "\nO jogador mais sortudo foi o \033[1;33mAMARELO\033[0m, tendo tirado " << seisAmarelo << " vezes o número 6 no dado!" << std::endl; }

}