#include "Tabuleiro.hpp"

void Tabuleiro::imprimePosicoesDasCasas(){
	std::cout << " ____________________________________________________________________________________ " << std::endl;
	std::cout << "|                                                                                    |" << std::endl;
	std::cout << "|                                   ____ ____ ____                                   |" << std::endl;
	std::cout << "|                                  |    |    |    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(25)->getPosicao() << " | " << CaminhoGeral->at(26)->getPosicao() << " | " << CaminhoGeral->at(27)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                                  |____|\033[1;31m____\033[0m|\033[1;31m____\033[0m|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;31m|    |    |\033[0m                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(24)->getPosicao() << " \033[1;31m| 0" << CaminhoVermelho->at(0)->getPosicao() << " | " << CaminhoGeral->at(28)->getPosicao() << " |\033[0m                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;31m|____|____|\033[0m                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;31m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(23)->getPosicao() << " \033[1;31m| 0" << CaminhoVermelho->at(1)->getPosicao() << " |\033[0m " << CaminhoGeral->at(29)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;31m|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;31m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(22)->getPosicao() << " \033[1;31m| 0" << CaminhoVermelho->at(2)->getPosicao() << " |\033[0m " << CaminhoGeral->at(30)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;31m|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;31m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(21)->getPosicao() << " \033[1;31m| 0" << CaminhoVermelho->at(3)->getPosicao() << " |\033[0m " << CaminhoGeral->at(31)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                              ____|____\033[1;31m|____|\033[0m____|____                              |" << std::endl;
	std::cout << "|                             |    |    \033[1;31m|    |\033[0m    |    |                             |" << std::endl;
	std::cout << "|                             | " << CaminhoGeral->at(19)->getPosicao() << " | " << CaminhoGeral->at(20)->getPosicao() << " \033[1;31m| 0" << CaminhoVermelho->at(4)->getPosicao() << " |\033[0m " << CaminhoGeral->at(32)->getPosicao() << " | " << CaminhoGeral->at(33)->getPosicao() << " |                             |" << std::endl;
	std::cout << "|     ____ \033[1;33m____\033[0m ____ ____ ____|____|____\033[1;31m|____|\033[0m____|____|____ ____ ____ ____ ____     |" << std::endl;
	std::cout << "|    |    \033[1;33m|    |\033[0m    |    |    |    |    \033[1;31m|    |\033[0m    |    |    |    |    |    |    |    |" << std::endl;
	std::cout << "|    | " << CaminhoGeral->at(13)->getPosicao() << " \033[1;33m| " << CaminhoGeral->at(14)->getPosicao() << " |\033[0m " << CaminhoGeral->at(15)->getPosicao() << " | " << CaminhoGeral->at(16)->getPosicao() << " | " << CaminhoGeral->at(17)->getPosicao() << " | " << CaminhoGeral->at(18)->getPosicao() << " |    \033[1;31m| 0" << CaminhoVermelho->at(5)->getPosicao() << " |\033[0m    | " << CaminhoGeral->at(34)->getPosicao() << " | " << CaminhoGeral->at(35)->getPosicao() << " | " << CaminhoGeral->at(36)->getPosicao() << " | " << CaminhoGeral->at(37)->getPosicao() << " | " << CaminhoGeral->at(38)->getPosicao() << " | " << CaminhoGeral->at(39)->getPosicao() << " |    |" << std::endl;

	std::cout << "|    |____\033[1;33m|____|\033[0m\033[1;33m____\033[0m|\033[1;33m____\033[0m|\033[1;33m____\033[0m|\033[1;33m____\033[0m|\033[1;33m____\033[0m\033[1;31m|____|\033[0m\033[1;34m____\033[0m|\033[1;34m____\033[0m|\033[1;34m____\033[0m|\033[1;34m____\033[0m|\033[1;34m____\033[0m|\033[1;34m____\033[0m|____|    |" << std::endl;

	std::cout << "|    |    \033[1;33m|    |    |    |    |    |    |\033[0m\033[1;34m    |    |    |    |    |    |    |\033[0m    |    |" << std::endl;

	std::cout << "|    | " << CaminhoGeral->at(12)->getPosicao() << " \033[1;33m| 0" << CaminhoAmarelo->at(0)->getPosicao() << " | 0" << CaminhoAmarelo->at(1)->getPosicao() << " | 0" << CaminhoAmarelo->at(2)->getPosicao() << " | 0" << CaminhoAmarelo->at(3)->getPosicao() << " | 0" << CaminhoAmarelo->at(4)->getPosicao() << " | 0" << CaminhoAmarelo->at(5)->getPosicao() << " |\033[0m\033[1;34m    | 0" << CaminhoAzul->at(5)->getPosicao() << " | 0" << CaminhoAzul->at(4)->getPosicao() << " | 0" << CaminhoAzul->at(3)->getPosicao() << " | 0" << CaminhoAzul->at(2)->getPosicao() << " | 0" << CaminhoAzul->at(1)->getPosicao() << " | 0" << CaminhoAzul->at(0)->getPosicao() << " |\033[0m " << CaminhoGeral->at(40)->getPosicao() << " |    |" << std::endl;

	std::cout << "|    |____\033[1;33m|____|____|____|____|____|____|\033[0m\033[1;32m____\033[0m\033[1;34m|____|____|____|____|____|____|\033[0m____|    |" << std::endl;

	std::cout << "|    |    |    |    |    |    |    |    \033[1;32m|    |\033[0m    |    |    |    |    \033[1;34m|    |\033[0m    |    |" << std::endl;

	std::cout << "|    | " << CaminhoGeral->at(11)->getPosicao() << " | " << CaminhoGeral->at(10)->getPosicao() << " | 0" << CaminhoGeral->at(9)->getPosicao() << " | 0" << CaminhoGeral->at(8)->getPosicao() << " | 0" << CaminhoGeral->at(7)->getPosicao() << " | 0" << CaminhoGeral->at(6)->getPosicao() << " |    \033[1;32m| 0" << CaminhoVerde->at(5)->getPosicao() << " |\033[0m    | " << CaminhoGeral->at(46)->getPosicao() << " | " << CaminhoGeral->at(45)->getPosicao() << " | " << CaminhoGeral->at(44)->getPosicao() << " | " << CaminhoGeral->at(43)->getPosicao() << "\033[1;34m |\033[0m " << CaminhoGeral->at(42)->getPosicao() << "\033[1;34m |\033[0m " << CaminhoGeral->at(41)->getPosicao() << " |    |" << std::endl;

	std::cout << "|    |____|____|____|____|____|____|____\033[1;32m|____|\033[0m____|____|____|____|____\033[1;34m|____|\033[0m____|    |" << std::endl;
	std::cout << "|                             |    |    \033[1;32m|    |\033[0m    |    |                             |" << std::endl;
	std::cout << "|                             | 0" << CaminhoGeral->at(5)->getPosicao() << " | 0" << CaminhoGeral->at(4)->getPosicao() << " \033[1;32m| 0" << CaminhoVerde->at(4)->getPosicao() << " |\033[0m " << CaminhoGeral->at(48)->getPosicao() << " | " << CaminhoGeral->at(47)->getPosicao() << " |                             |" << std::endl;
	std::cout << "|                             |____|____\033[1;32m|____|\033[0m____|____|                             |" << std::endl;
	std::cout << "|                                  |    \033[1;32m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | 0" << CaminhoGeral->at(3)->getPosicao() << " \033[1;32m| 0" << CaminhoVerde->at(3)->getPosicao() << " |\033[0m " << CaminhoGeral->at(49)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;32m|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;32m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | 0" << CaminhoGeral->at(2)->getPosicao() << " \033[1;32m| 0" << CaminhoVerde->at(2)->getPosicao() << " |\033[0m " << CaminhoGeral->at(50)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;32m|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;32m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | 0" << CaminhoGeral->at(1)->getPosicao() << " \033[1;32m| 0" << CaminhoVerde->at(1)->getPosicao() << " |\033[0m " << CaminhoGeral->at(51)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                                  |\033[1;32m____|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  \033[1;32m|    |    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  \033[1;32m| 0" << CaminhoGeral->at(0)->getPosicao() << " | 0" << CaminhoVerde->at(0)->getPosicao() << " |\033[0m " << CaminhoGeral->at(52)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                                  \033[1;32m|____|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    |    |    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(55)->getPosicao() << " | " << CaminhoGeral->at(54)->getPosicao() << " | " << CaminhoGeral->at(53)->getPosicao() << " |                                  |" << std::endl;
	std::cout << "|                                  |____|____|____|                                  |" << std::endl;
	std::cout << "|                                                                                    |" << std::endl;
	std::cout << "|____________________________________________________________________________________|" << std::endl;
}

void Tabuleiro::imprimeTabuleiro(){
	std::cout << " ____________________________________________________________________________________ " << std::endl;
	std::cout << "|                                                                                    |" << std::endl;
	std::cout << "|                                   ____ ____ ____                                   |" << std::endl;
	std::cout << "|                                  |    |    |    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(25)->imprimePecas() << " | " << CaminhoGeral->at(26)->imprimePecas() << " | " << CaminhoGeral->at(27)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                                  |____|\033[1;31m____\033[0m|\033[1;31m____\033[0m|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;31m|    |    |\033[0m                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(24)->imprimePecas() << " \033[1;31m| " << CaminhoVermelho->at(0)->imprimePecas() << " \033[1;31m| \033[0m" << CaminhoGeral->at(28)->imprimePecas() << " \033[1;31m|\033[0m                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;31m|____|____|\033[0m                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;31m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(23)->imprimePecas() << " \033[1;31m| " << CaminhoVermelho->at(1)->imprimePecas() << " \033[1;31m|\033[0m " << CaminhoGeral->at(29)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;31m|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;31m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(22)->imprimePecas() << " \033[1;31m| " << CaminhoVermelho->at(2)->imprimePecas() << " \033[1;31m|\033[0m " << CaminhoGeral->at(30)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;31m|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;31m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(21)->imprimePecas() << " \033[1;31m| " << CaminhoVermelho->at(3)->imprimePecas() << " \033[1;31m|\033[0m " << CaminhoGeral->at(31)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                              ____|____\033[1;31m|____|\033[0m____|____                              |" << std::endl;
	std::cout << "|                             |    |    \033[1;31m|    |\033[0m    |    |                             |" << std::endl;
	std::cout << "|                             | " << CaminhoGeral->at(19)->imprimePecas() << " | " << CaminhoGeral->at(20)->imprimePecas() << " \033[1;31m| " << CaminhoVermelho->at(4)->imprimePecas() << " \033[1;31m|\033[0m " << CaminhoGeral->at(32)->imprimePecas() << " | " << CaminhoGeral->at(33)->imprimePecas() << " |                             |" << std::endl;
	std::cout << "|     ____ \033[1;33m____\033[0m ____ ____ ____|____|____\033[1;31m|____|\033[0m____|____|____ ____ ____ ____ ____     |" << std::endl;
	std::cout << "|    |    \033[1;33m|    |\033[0m    |    |    |    |    \033[1;31m|    |\033[0m    |    |    |    |    |    |    |    |" << std::endl;
	std::cout << "|    | " << CaminhoGeral->at(13)->imprimePecas() << " \033[1;33m|\033[0m " << CaminhoGeral->at(14)->imprimePecas() << " \033[1;33m|\033[0m " << CaminhoGeral->at(15)->imprimePecas() << " | " << CaminhoGeral->at(16)->imprimePecas() << " | " << CaminhoGeral->at(17)->imprimePecas() << " | " << CaminhoGeral->at(18)->imprimePecas() << " |    \033[1;31m| " << CaminhoVermelho->at(5)->imprimePecas() << " \033[1;31m|\033[0m    | " << CaminhoGeral->at(34)->imprimePecas() << " | " << CaminhoGeral->at(35)->imprimePecas() << " | " << CaminhoGeral->at(36)->imprimePecas() << " | " << CaminhoGeral->at(37)->imprimePecas() << " | " << CaminhoGeral->at(38)->imprimePecas() << " | " << CaminhoGeral->at(39)->imprimePecas() << " |    |" << std::endl;

	std::cout << "|    |____\033[1;33m|____|\033[0m\033[1;33m____\033[0m|\033[1;33m____\033[0m|\033[1;33m____\033[0m|\033[1;33m____\033[0m|\033[1;33m____\033[0m\033[1;31m|____|\033[0m\033[1;34m____\033[0m|\033[1;34m____\033[0m|\033[1;34m____\033[0m|\033[1;34m____\033[0m|\033[1;34m____\033[0m|\033[1;34m____\033[0m|____|    |" << std::endl;

	std::cout << "|    |    \033[1;33m|    |    |    |    |    |    |\033[0m\033[1;34m    |    |    |    |    |    |    |\033[0m    |    |" << std::endl;

	std::cout << "|    | " << CaminhoGeral->at(12)->imprimePecas() << " \033[1;33m| " << CaminhoAmarelo->at(0)->imprimePecas() << " \033[1;33m| " << CaminhoAmarelo->at(1)->imprimePecas() << " \033[1;33m| " << CaminhoAmarelo->at(2)->imprimePecas() << " \033[1;33m| " << CaminhoAmarelo->at(3)->imprimePecas() << " \033[1;33m| " << CaminhoAmarelo->at(4)->imprimePecas() << " \033[1;33m| " << CaminhoAmarelo->at(5)->imprimePecas() << "\033[1;33m |\033[0m    \033[1;34m| " << CaminhoAzul->at(5)->imprimePecas() << " \033[1;34m| " << CaminhoAzul->at(4)->imprimePecas() << " \033[1;34m| " << CaminhoAzul->at(3)->imprimePecas() << " \033[1;34m| " << CaminhoAzul->at(2)->imprimePecas() << " \033[1;34m| " << CaminhoAzul->at(1)->imprimePecas() << " \033[1;34m| " << CaminhoAzul->at(0)->imprimePecas() << " \033[1;34m|\033[0m " << CaminhoGeral->at(40)->imprimePecas() << " |    |" << std::endl;

	std::cout << "|    |____\033[1;33m|____|____|____|____|____|____|\033[0m\033[1;32m____\033[0m\033[1;34m|____|____|____|____|____|____|\033[0m____|    |" << std::endl;

	std::cout << "|    |    |    |    |    |    |    |    \033[1;32m|    |\033[0m    |    |    |    |    \033[1;34m|    |\033[0m    |    |" << std::endl;

	std::cout << "|    | " << CaminhoGeral->at(11)->imprimePecas() << " | " << CaminhoGeral->at(10)->imprimePecas() << " | " << CaminhoGeral->at(9)->imprimePecas() << " | " << CaminhoGeral->at(8)->imprimePecas() << " | " << CaminhoGeral->at(7)->imprimePecas() << " | " << CaminhoGeral->at(6)->imprimePecas() << " |    \033[1;32m| " << CaminhoVerde->at(5)->imprimePecas() << " \033[1;32m|\033[0m    | " << CaminhoGeral->at(46)->imprimePecas() << " | " << CaminhoGeral->at(45)->imprimePecas() << " | " << CaminhoGeral->at(44)->imprimePecas() << " | " << CaminhoGeral->at(43)->imprimePecas() << " \033[1;34m|\033[0m " << CaminhoGeral->at(42)->imprimePecas() << " \033[1;34m|\033[0m " << CaminhoGeral->at(41)->imprimePecas() << " |    |" << std::endl;

	std::cout << "|    |____|____|____|____|____|____|____\033[1;32m|____|\033[0m____|____|____|____|____\033[1;34m|____|\033[0m____|    |" << std::endl;
	std::cout << "|                             |    |    \033[1;32m|    |\033[0m    |    |                             |" << std::endl;
	std::cout << "|                             | " << CaminhoGeral->at(5)->imprimePecas() << " | " << CaminhoGeral->at(4)->imprimePecas() << " \033[1;32m| " << CaminhoVerde->at(4)->imprimePecas() << " \033[1;32m|\033[0m " << CaminhoGeral->at(48)->imprimePecas() << " | " << CaminhoGeral->at(47)->imprimePecas() << " |                             |" << std::endl;
	std::cout << "|                             |____|____\033[1;32m|____|\033[0m____|____|                             |" << std::endl;
	std::cout << "|                                  |    \033[1;32m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(3)->imprimePecas() << " \033[1;32m| " << CaminhoVerde->at(3)->imprimePecas() << " \033[1;32m|\033[0m " << CaminhoGeral->at(49)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;32m|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;32m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(2)->imprimePecas() << " \033[1;32m| " << CaminhoVerde->at(2)->imprimePecas() << " \033[1;32m|\033[0m " << CaminhoGeral->at(50)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                                  |____\033[1;32m|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    \033[1;32m|    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(1)->imprimePecas() << " \033[1;32m| " << CaminhoVerde->at(1)->imprimePecas() << " \033[1;32m|\033[0m " << CaminhoGeral->at(51)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                                  |\033[1;32m____|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  \033[1;32m|    |    |\033[0m    |                                  |" << std::endl;
	std::cout << "|                                  \033[1;32m| \033[0m" << CaminhoGeral->at(0)->imprimePecas() << "\033[1;32m | " << CaminhoVerde->at(0)->imprimePecas() << "\033[1;32m | \033[0m" << CaminhoGeral->at(52)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                                  \033[1;32m|____|____|\033[0m____|                                  |" << std::endl;
	std::cout << "|                                  |    |    |    |                                  |" << std::endl;
	std::cout << "|                                  | " << CaminhoGeral->at(55)->imprimePecas() << " | " << CaminhoGeral->at(54)->imprimePecas() << " | " << CaminhoGeral->at(53)->imprimePecas() << " |                                  |" << std::endl;
	std::cout << "|                                  |____|____|____|                                  |" << std::endl;
	std::cout << "|                                                                                    |" << std::endl;
	std::cout << "|____________________________________________________________________________________|" << std::endl;


	for (int i = 0; i < static_cast<int>( CaminhoGeral->size() ); i++){
		if (CaminhoGeral->at( static_cast<size_t>(i) )->getNumeroDePecasNaCasa() > 1){
			std::cout << "\nNa casa " << CaminhoGeral->at(static_cast<size_t>(i))->getPosicao() + 1 << " estão as peças: ";
			for (int j = 0; j < static_cast<int>(CaminhoGeral->at(static_cast<size_t>(i))->getNumeroDePecasNaCasa()); j++){
				std::cout << CaminhoGeral->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_token() << CaminhoGeral->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_numero() + 1 << " ";
			}
			std::cout << "\n";
		}
	}

	for (int i = 0; i < static_cast<int>( CaminhoVermelho->size() ); i++){
		if (CaminhoVermelho->at( static_cast<size_t>(i) )->getNumeroDePecasNaCasa() > 1){
			std::cout << "\nNa casa " << CaminhoVermelho->at(static_cast<size_t>(i))->getPosicao() + 1 << " do caminho vermelho estão as peças: ";
			for (int j = 0; j < static_cast<int>(CaminhoVermelho->at(static_cast<size_t>(i))->getNumeroDePecasNaCasa()); j++){
				std::cout << CaminhoVermelho->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_token() << CaminhoVermelho->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_numero() + 1 << " ";
			}
			std::cout << "\n";
		}
	}

	for (int i = 0; i < static_cast<int>( CaminhoAzul->size() ); i++){
		if (CaminhoAzul->at( static_cast<size_t>(i) )->getNumeroDePecasNaCasa() > 1){
			std::cout << "\nNa casa " << CaminhoAzul->at(static_cast<size_t>(i))->getPosicao() + 1 << " do caminho azul estão as peças: ";
			for (int j = 0; j < static_cast<int>(CaminhoAzul->at(static_cast<size_t>(i))->getNumeroDePecasNaCasa()); j++){
				std::cout << CaminhoAzul->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_token() << CaminhoAzul->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_numero() + 1 << " ";
			}
			std::cout << "\n";
		}
	}

	for (int i = 0; i < static_cast<int>( CaminhoVerde->size() ); i++){
		if (CaminhoVerde->at( static_cast<size_t>(i) )->getNumeroDePecasNaCasa() > 1){
			std::cout << "\nNa casa " << CaminhoVerde->at(static_cast<size_t>(i))->getPosicao() + 1 << " do caminho verde estão as peças: ";
			for (int j = 0; j < static_cast<int>(CaminhoVerde->at(static_cast<size_t>(i))->getNumeroDePecasNaCasa()); j++){
				std::cout << CaminhoVerde->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_token() << CaminhoVerde->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_numero() + 1 << " ";
			}
			std::cout << "\n";
		}
	}

	for (int i = 0; i < static_cast<int>( CaminhoAmarelo->size() ); i++){
		if (CaminhoAmarelo->at( static_cast<size_t>(i) )->getNumeroDePecasNaCasa() > 1){
			std::cout << "\nNa casa " << CaminhoAmarelo->at(static_cast<size_t>(i))->getPosicao() + 1 << " do caminho amarelo estão as peças: ";
			for (int j = 0; j < static_cast<int>(CaminhoAmarelo->at(static_cast<size_t>(i))->getNumeroDePecasNaCasa()); j++){
				std::cout << CaminhoAmarelo->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_token() << CaminhoAmarelo->at(static_cast<size_t>(i))->getPecasNaCasa(j).get_numero() + 1 << " ";
			}
			std::cout << "\n";
		}
	}
}

Tabuleiro::Tabuleiro(){
  
	for (int cont = 0; cont < 56; cont++){
    if(cont == 0){
      nova0 = new Casa();
		  nova0->setPosicao(cont);
      nova0->setSegura();
		  CaminhoGeral->push_back(nova0);
    }
    if(cont == 1){
      nova1 = new Casa();
		  nova1->setPosicao(cont);
		  CaminhoGeral->push_back(nova1);
    }
    if(cont == 2){
      nova2 = new Casa();
		  nova2->setPosicao(cont);
		  CaminhoGeral->push_back(nova2);
    }
    if(cont == 3){
      nova3 = new Casa();
		  nova3->setPosicao(cont);
		  CaminhoGeral->push_back(nova3);
    }
    if(cont == 4){
      nova4 = new Casa();
		  nova4->setPosicao(cont);
		  CaminhoGeral->push_back(nova4);
    }
    if(cont == 5){
      nova5 = new Casa();
		  nova5->setPosicao(cont);
		  CaminhoGeral->push_back(nova5);
    }
    if(cont == 6){
      nova6 = new Casa();
		  nova6->setPosicao(cont);
		  CaminhoGeral->push_back(nova6);
    }
    if(cont == 7){
      nova7 = new Casa();
		  nova7->setPosicao(cont);
		  CaminhoGeral->push_back(nova7);
    }
    if(cont == 8){
      nova8 = new Casa();
		  nova8->setPosicao(cont);
		  CaminhoGeral->push_back(nova8);
    }
    if(cont == 9){
      nova9 = new Casa();
		  nova9->setPosicao(cont);
		  CaminhoGeral->push_back(nova9);
    }
    if(cont == 10){
      nova10 = new Casa();
		  nova10->setPosicao(cont);
		  CaminhoGeral->push_back(nova10);
    }
    if(cont == 11){
      nova11 = new Casa();
		  nova11->setPosicao(cont);
		  CaminhoGeral->push_back(nova11);
    }
    if(cont == 12){
      nova12 = new Casa();
		  nova12->setPosicao(cont);
		  CaminhoGeral->push_back(nova12);
    }
    if(cont == 13){
      nova13 = new Casa();
		  nova13->setPosicao(cont);
		  CaminhoGeral->push_back(nova13);
    }
    if(cont == 14){
      nova14 = new Casa();
		  nova14->setPosicao(cont);
      nova14->setSegura();
		  CaminhoGeral->push_back(nova14);
    }
    if(cont == 15){
      nova15 = new Casa();
		  nova15->setPosicao(cont);
		  CaminhoGeral->push_back(nova15);
    }
    if(cont == 16){
      nova16 = new Casa();
		  nova16->setPosicao(cont);
		  CaminhoGeral->push_back(nova16);
    }
    if(cont == 17){
      nova17 = new Casa();
		  nova17->setPosicao(cont);
		  CaminhoGeral->push_back(nova17);
    }
    if(cont == 18){
      nova18 = new Casa();
		  nova18->setPosicao(cont);
		  CaminhoGeral->push_back(nova18);
    }
    if(cont == 19){
      nova19 = new Casa();
		  nova19->setPosicao(cont);
		  CaminhoGeral->push_back(nova19);
    }
    if(cont == 20){
      nova20 = new Casa();
		  nova20->setPosicao(cont);
		  CaminhoGeral->push_back(nova20);
    }
    if(cont == 21){
      nova21 = new Casa();
		  nova21->setPosicao(cont);
		  CaminhoGeral->push_back(nova21);
    }
    if(cont == 22){
      nova22 = new Casa();
		  nova22->setPosicao(cont);
		  CaminhoGeral->push_back(nova22);
    }
    if(cont == 23){
      nova23 = new Casa();
		  nova23->setPosicao(cont);
		  CaminhoGeral->push_back(nova23);
    }
    if(cont == 24){
      nova24 = new Casa();
		  nova24->setPosicao(cont);
		  CaminhoGeral->push_back(nova24);
    }
    if(cont == 25){
      nova25 = new Casa();
		  nova25->setPosicao(cont);
		  CaminhoGeral->push_back(nova25);
    }
    if(cont == 26){
      nova26 = new Casa();
		  nova26->setPosicao(cont);
		  CaminhoGeral->push_back(nova26);
    }
    if(cont == 27){
      nova27 = new Casa();
		  nova27->setPosicao(cont);
		  CaminhoGeral->push_back(nova27);
    }
    if(cont == 28){
      nova28 = new Casa();
		  nova28->setPosicao(cont);
      nova28->setSegura();
		  CaminhoGeral->push_back(nova28);
    }
    if(cont == 29){
      nova29 = new Casa();
		  nova29->setPosicao(cont);
		  CaminhoGeral->push_back(nova29);
    }
    if(cont == 30){
      nova30 = new Casa();
		  nova30->setPosicao(cont);
		  CaminhoGeral->push_back(nova30);
    }
    if(cont == 31){
      nova31 = new Casa();
		  nova31->setPosicao(cont);
		  CaminhoGeral->push_back(nova31);
    }
    if(cont == 32){
      nova32 = new Casa();
		  nova32->setPosicao(cont);
		  CaminhoGeral->push_back(nova32);
    }
    if(cont == 33){
      nova33 = new Casa();
		  nova33->setPosicao(cont);
		  CaminhoGeral->push_back(nova33);
    }
    if(cont == 34){
      nova34 = new Casa();
		  nova34->setPosicao(cont);
		  CaminhoGeral->push_back(nova34);
    }
    if(cont == 35){
      nova35 = new Casa();
		  nova35->setPosicao(cont);
		  CaminhoGeral->push_back(nova35);
    }
    if(cont == 36){
      nova36 = new Casa();
		  nova36->setPosicao(cont);
		  CaminhoGeral->push_back(nova36);
    }
    if(cont == 37){
      nova37 = new Casa();
		  nova37->setPosicao(cont);
		  CaminhoGeral->push_back(nova37);
    }
    if(cont == 38){
      nova38 = new Casa();
		  nova38->setPosicao(cont);
		  CaminhoGeral->push_back(nova38);
    }
    if(cont == 39){
      nova39 = new Casa();
		  nova39->setPosicao(cont);
		  CaminhoGeral->push_back(nova39);
    }
    if(cont == 40){
      nova40 = new Casa();
		  nova40->setPosicao(cont);
		  CaminhoGeral->push_back(nova40);
    }
    if(cont == 41){
      nova41 = new Casa();
		  nova41->setPosicao(cont);
		  CaminhoGeral->push_back(nova41);
    }
    if(cont == 42){
      nova42 = new Casa();
		  nova42->setPosicao(cont);
      nova42->setSegura();
		  CaminhoGeral->push_back(nova42);
    }
    if(cont == 43){
      nova43 = new Casa();
		  nova43->setPosicao(cont);
		  CaminhoGeral->push_back(nova43);
    }
    if(cont == 44){
      nova44 = new Casa();
		  nova44->setPosicao(cont);
		  CaminhoGeral->push_back(nova44);
    }
    if(cont == 45){
      nova45 = new Casa();
		  nova45->setPosicao(cont);
		  CaminhoGeral->push_back(nova45);
    }
    if(cont == 46){
      nova46 = new Casa();
		  nova46->setPosicao(cont);
		  CaminhoGeral->push_back(nova46);
    }
    if(cont == 47){
      nova47 = new Casa();
		  nova47->setPosicao(cont);
		  CaminhoGeral->push_back(nova47);
    }
    if(cont == 48){
      nova48 = new Casa();
		  nova48->setPosicao(cont);
		  CaminhoGeral->push_back(nova48);
    }
    if(cont == 49){
      nova49 = new Casa();
		  nova49->setPosicao(cont);
		  CaminhoGeral->push_back(nova49);
    }
    if(cont == 50){
      nova50 = new Casa();
		  nova50->setPosicao(cont);
		  CaminhoGeral->push_back(nova50);
    }
    if(cont == 51){
      nova51 = new Casa();
		  nova51->setPosicao(cont);
		  CaminhoGeral->push_back(nova51);
    }
    if(cont == 52){
      nova52 = new Casa();
		  nova52->setPosicao(cont);
		  CaminhoGeral->push_back(nova52);
    }
    if(cont == 53){
      nova53 = new Casa();
		  nova53->setPosicao(cont);
		  CaminhoGeral->push_back(nova53);
    }
    if(cont == 54){
      nova54 = new Casa();
		  nova54->setPosicao(cont);
		  CaminhoGeral->push_back(nova54);
    }
    if(cont == 55){
      nova55 = new Casa();
		  nova55->setPosicao(cont);
		  CaminhoGeral->push_back(nova55);
    }
	}
	for (int cont = 0; cont < 6; cont++){//AZUL
    if(cont == 0){
      nova_azul0 = new Casa();
		  nova_azul0->setPosicao(cont);
		  CaminhoAzul->push_back(nova_azul0);
    }
    if(cont == 1){
      nova_azul1 = new Casa();
		  nova_azul1->setPosicao(cont);
		  CaminhoAzul->push_back(nova_azul1);
    }
    if(cont == 2){
      nova_azul2 = new Casa();
		  nova_azul2->setPosicao(cont);
		  CaminhoAzul->push_back(nova_azul2);
    }
    if(cont == 3){
      nova_azul3 = new Casa();
		  nova_azul3->setPosicao(cont);
		  CaminhoAzul->push_back(nova_azul3);
    }
    if(cont == 4){
      nova_azul4 = new Casa();
		  nova_azul4->setPosicao(cont);
		  CaminhoAzul->push_back(nova_azul4);
    }
    if(cont == 5){
      nova_azul5 = new Casa();
		  nova_azul5->setPosicao(cont);
		  CaminhoAzul->push_back(nova_azul5);
    }
	}
	for (int cont = 0; cont < 6; cont++){//VERMELHO
    if(cont == 0){
      nova_vermelho0 = new Casa();
		  nova_vermelho0->setPosicao(cont);
		  CaminhoVermelho->push_back(nova_vermelho0);
    }
    if(cont == 1){
      nova_vermelho1 = new Casa();
		  nova_vermelho1->setPosicao(cont);
		  CaminhoVermelho->push_back(nova_vermelho1);
    }
    if(cont == 2){
      nova_vermelho2 = new Casa();
		  nova_vermelho2->setPosicao(cont);
		  CaminhoVermelho->push_back(nova_vermelho2);
    }
    if(cont == 3){
      nova_vermelho3 = new Casa();
		  nova_vermelho3->setPosicao(cont);
		  CaminhoVermelho->push_back(nova_vermelho3);
    }
    if(cont == 4){
      nova_vermelho4 = new Casa();
		  nova_vermelho4->setPosicao(cont);
		  CaminhoVermelho->push_back(nova_vermelho4);
    }
    if(cont == 5){
      nova_vermelho5 = new Casa();
		  nova_vermelho5->setPosicao(cont);
		  CaminhoVermelho->push_back(nova_vermelho5);
    }
	}
	for (int cont = 0; cont < 6; cont++){//VERDE
    if(cont == 0){
      nova_verde0 = new Casa();
		  nova_verde0->setPosicao(cont);
		  CaminhoVerde->push_back(nova_verde0);
    }
    if(cont == 1){
      nova_verde1 = new Casa();
		  nova_verde1->setPosicao(cont);
		  CaminhoVerde->push_back(nova_verde1);
    }
    if(cont == 2){
      nova_verde2 = new Casa();
		  nova_verde2->setPosicao(cont);
		  CaminhoVerde->push_back(nova_verde2);
    }
    if(cont == 3){
      nova_verde3 = new Casa();
		  nova_verde3->setPosicao(cont);
		  CaminhoVerde->push_back(nova_verde3);
    }
    if(cont == 4){
      nova_verde4 = new Casa();
		  nova_verde4->setPosicao(cont);
		  CaminhoVerde->push_back(nova_verde4);
    }
    if(cont == 5){
      nova_verde5 = new Casa();
		  nova_verde5->setPosicao(cont);
		  CaminhoVerde->push_back(nova_verde5);
    }
	}

	for (int cont = 0; cont < 6; cont++){//AMARELO
    if(cont == 0){
      nova_amarelo0 = new Casa();
		  nova_amarelo0->setPosicao(cont);
		  CaminhoAmarelo->push_back(nova_amarelo0);
    }
    if(cont == 1){
      nova_amarelo1 = new Casa();
		  nova_amarelo1->setPosicao(cont);
		  CaminhoAmarelo->push_back(nova_amarelo1);
    }
    if(cont == 2){
      nova_amarelo2 = new Casa();
		  nova_amarelo2->setPosicao(cont);
		  CaminhoAmarelo->push_back(nova_amarelo2);
    }
    if(cont == 3){
      nova_amarelo3 = new Casa();
		  nova_amarelo3->setPosicao(cont);
		  CaminhoAmarelo->push_back(nova_amarelo3);
    }
    if(cont == 4){
      nova_amarelo4 = new Casa();
		  nova_amarelo4->setPosicao(cont);
		  CaminhoAmarelo->push_back(nova_amarelo4);
    }
    if(cont == 5){
      nova_amarelo5 = new Casa();
		  nova_amarelo5->setPosicao(cont);
		  CaminhoAmarelo->push_back(nova_amarelo5);
    }
	}
}

Tabuleiro::~Tabuleiro(){
  CaminhoGeral->clear();
  CaminhoAzul->clear();
  CaminhoVerde->clear();
  CaminhoAmarelo->clear();
  CaminhoVermelho->clear();
  //VERDE
  delete nova_verde0;
  delete nova_verde1;
  delete nova_verde2;
  delete nova_verde3;
  delete nova_verde4;
  delete nova_verde5;
  //AMARELO
  delete nova_amarelo0;
  delete nova_amarelo1;
  delete nova_amarelo2;
  delete nova_amarelo3;
  delete nova_amarelo4;
  delete nova_amarelo5;
  //VERMELHO
  delete nova_vermelho0;
  delete nova_vermelho1;
  delete nova_vermelho2;
  delete nova_vermelho3;
  delete nova_vermelho4;
  delete nova_vermelho5;
  //AZUL
  delete nova_azul0;
  delete nova_azul1;
  delete nova_azul2;
  delete nova_azul3;
  delete nova_azul4;
  delete nova_azul5;
  //GERAL
  delete nova0;
  delete nova1;
  delete nova2;
  delete nova3;
  delete nova4;
  delete nova5;
  delete nova6;
  delete nova7;
  delete nova8;
  delete nova9;
  delete nova10;
  delete nova11;
  delete nova12;
  delete nova13;
  delete nova14;
  delete nova15;
  delete nova16;
  delete nova17;
  delete nova18;
  delete nova19;
  delete nova20;
  delete nova21;
  delete nova22;
  delete nova23;
  delete nova24;
  delete nova25;
  delete nova26;
  delete nova27;
  delete nova28;
  delete nova29;
  delete nova30;
  delete nova31;
  delete nova32;
  delete nova33;
  delete nova34;
  delete nova35;
  delete nova36;
  delete nova37;
  delete nova38;
  delete nova39;
  delete nova40;
  delete nova41;
  delete nova42;
  delete nova43;
  delete nova44;
  delete nova45;
  delete nova46;
  delete nova47;
  delete nova48;
  delete nova49;
  delete nova50;
  delete nova51;
  delete nova52;
  delete nova53;
  delete nova54;
  delete nova55;

}

Tabuleiro::Tabuleiro(const Tabuleiro &obj){
    
    //VERDE
    nova_verde0 = new Casa();
    nova_verde0 = obj.nova_verde0;
    nova_verde1 = new Casa();
    nova_verde1 = obj.nova_verde1;
    nova_verde2 = new Casa();
    nova_verde2 = obj.nova_verde2;
    nova_verde3 = new Casa();
    nova_verde3 = obj.nova_verde3;
    nova_verde4 = new Casa();
    nova_verde4 = obj.nova_verde4;
    nova_verde5 = new Casa();
    nova_verde5 = obj.nova_verde5;
    //AMARELO
    nova_amarelo0 = new Casa();
    nova_amarelo0 = obj.nova_amarelo0;
    nova_amarelo1 = new Casa();
    nova_amarelo1 = obj.nova_amarelo1;
    nova_amarelo2 = new Casa();
    nova_amarelo2 = obj.nova_amarelo2;
    nova_amarelo3 = new Casa();
    nova_amarelo3 = obj.nova_amarelo3;
    nova_amarelo4 = new Casa();
    nova_amarelo4 = obj.nova_amarelo4;
    nova_amarelo5 = new Casa();
    nova_amarelo5 = obj.nova_amarelo5;
    //VERMELHO
    nova_vermelho0 = new Casa();
    nova_vermelho0 = obj.nova_vermelho0;
    nova_vermelho1 = new Casa();
    nova_vermelho1 = obj.nova_vermelho1;
    nova_vermelho2 = new Casa();
    nova_vermelho2 = obj.nova_vermelho2;
    nova_vermelho3 = new Casa();
    nova_vermelho3 = obj.nova_vermelho3;
    nova_vermelho4 = new Casa();
    nova_vermelho4 = obj.nova_vermelho4;
    nova_vermelho5 = new Casa();
    nova_vermelho5 = obj.nova_vermelho5;
    //AZUL
    nova_azul0 = new Casa();
    nova_azul0 = obj.nova_azul0;
    nova_azul1 = new Casa();
    nova_azul1 = obj.nova_azul1;
    nova_azul2 = new Casa();
    nova_azul2 = obj.nova_azul2;
    nova_azul3 = new Casa();
    nova_azul3 = obj.nova_azul3;
    nova_azul4 = new Casa();
    nova_azul4 = obj.nova_azul4;
    nova_azul5 = new Casa();
    nova_azul5 = obj.nova_azul5;
    //GERAL
    nova0 = new Casa();
    nova0 = obj.nova0;
    nova1 = new Casa();
    nova1 = obj.nova1;
    nova2 = new Casa();
    nova2 = obj.nova2;
    nova3 = new Casa();
    nova3 = obj.nova3;
    nova4 = new Casa();
    nova4 = obj.nova4;
    nova5 = new Casa();
    nova5 = obj.nova5;
    nova6 = new Casa();
    nova6 = obj.nova6;
    nova7 = new Casa();
    nova7 = obj.nova7;
    nova8 = new Casa();
    nova8 = obj.nova8;
    nova9 = new Casa();
    nova9 = obj.nova9;
    nova10 = new Casa();
    nova10 = obj.nova10;
    nova11 = new Casa();
    nova11 = obj.nova11;
    nova12 = new Casa();
    nova12 = obj.nova12;
    nova13 = new Casa();
    nova13 = obj.nova13;
    nova14 = new Casa();
    nova14 = obj.nova14;
    nova15 = new Casa();
    nova15 = obj.nova15;
    nova16 = new Casa();
    nova16 = obj.nova16;
    nova17 = new Casa();
    nova17 = obj.nova17;
    nova18 = new Casa();
    nova18 = obj.nova18;
    nova19 = new Casa();
    nova19 = obj.nova19;
    nova20 = new Casa();
    nova20 = obj.nova20;
    nova21 = new Casa();
    nova21 = obj.nova21;
    nova22 = new Casa();
    nova22 = obj.nova22;
    nova23 = new Casa();
    nova23 = obj.nova23;
    nova24 = new Casa();
    nova24 = obj.nova24;
    nova25 = new Casa();
    nova25 = obj.nova25;
    nova26 = new Casa();
    nova26 = obj.nova26;
    nova27 = new Casa();
    nova27 = obj.nova27;
    nova28 = new Casa();
    nova28 = obj.nova28;
    nova29 = new Casa();
    nova29 = obj.nova29;
    nova30 = new Casa();
    nova30 = obj.nova30;
    nova31 = new Casa();
    nova31 = obj.nova31;
    nova32 = new Casa();
    nova32 = obj.nova32;
    nova33 = new Casa();
    nova33 = obj.nova33;
    nova34 = new Casa();
    nova34 = obj.nova34;
    nova35 = new Casa();
    nova35 = obj.nova35;
    nova36 = new Casa();
    nova36 = obj.nova36;
    nova37 = new Casa();
    nova37 = obj.nova37;
    nova38 = new Casa();
    nova38 = obj.nova38;
    nova39 = new Casa();
    nova39 = obj.nova39;
    nova40 = new Casa();
    nova40 = obj.nova40;
    nova41 = new Casa();
    nova41 = obj.nova41;
    nova42 = new Casa();
    nova42 = obj.nova42;
    nova43 = new Casa();
    nova43 = obj.nova43;
    nova44 = new Casa();
    nova44 = obj.nova44;
    nova45 = new Casa();
    nova45 = obj.nova45;
    nova46 = new Casa();
    nova46 = obj.nova46;
    nova47 = new Casa();
    nova47 = obj.nova47;
    nova48 = new Casa();
    nova48 = obj.nova48;
    nova49 = new Casa();
    nova49 = obj.nova49;
    nova50 = new Casa();
    nova50 = obj.nova50;
    nova51 = new Casa();
    nova51 = obj.nova51;
    nova52 = new Casa();
    nova52 = obj.nova52;
    nova53 = new Casa();
    nova53 = obj.nova53;
    nova54 = new Casa();
    nova54 = obj.nova54;
    nova55 = new Casa();
    nova55 = obj.nova55; 
}