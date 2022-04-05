#include "Players.hpp"

Players::Players(){
  vermelho = std::make_shared<Jogador>(1);
  azul = std::make_shared<Jogador>(2);
  verde = std::make_shared<Jogador>(3);
  amarelo = std::make_shared<Jogador>(4);
	estatisticas = std::make_shared<Estatisticas>();
  cor_vermelha = 0;
  cor_azul = 0;
  cor_verde = 0;
  cor_amarela = 0;
}

Players::~Players(){
}

Players::Players(const Players &obj): Jogador(obj){
	vermelho = std::make_shared<Jogador>(1);
  azul = std::make_shared<Jogador>(2);
  verde = std::make_shared<Jogador>(3);
  amarelo = std::make_shared<Jogador>(4);
	vermelho = obj.vermelho;
	azul = obj.azul;
	verde = obj.verde;
	amarelo = obj.amarelo;
  cor_vermelha = obj.cor_vermelha;
  cor_azul = obj.cor_azul;
  cor_verde = obj.cor_verde;
  cor_amarela = obj.cor_amarela;
}

int Players::get_cor(std::shared_ptr<Jogador> player){
  int temp = player->get_cor();
  return temp; 
}

void Players::atribui_caracteristicas_ao_jogador(int num_jogadores){
	for (int i = 0; i < num_jogadores; i++){

		std::string temporaria;
		temporaria.clear();
		std::cout << "Entre com o nome do Jogador: ";
		std::cin >> temporaria;

		escolha: 
		std::cout << "\n";
    if(cor_vermelha == 0 && cor_azul == 0 && cor_verde == 0 && cor_amarela == 0){// 0 0 0 0
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 1 para VERMELHO, 2 para AZUL, 3 para VERDE e 4 para AMARELO:\n\n";
    }else if(cor_vermelha == 1 && cor_azul == 0 && cor_verde == 0 && cor_amarela == 0){// 1 0 0 0
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 2 para AZUL, 3 para VERDE e 4 para AMARELO:\n\n";
    }else if(cor_vermelha == 0 && cor_azul == 1 && cor_verde == 0 && cor_amarela == 0){// 0 1 0 0
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 1 para VERMELHO, 3 para VERDE e 4 para AMARELO:\n\n";
    }else if(cor_vermelha == 0 && cor_azul == 0 && cor_verde == 1 && cor_amarela == 0){// 0 0 1 0
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 1 para VERMELHO, 2 para AZUL e 4 para AMARELO:\n\n";
    }else if(cor_vermelha == 0 && cor_azul == 0 && cor_verde == 0 && cor_amarela == 1){// 0 0 0 1
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 1 para VERMELHO, 2 para AZUL e 3 para VERDE:\n\n";
    }else if(cor_vermelha == 1 && cor_azul == 1 && cor_verde == 0 && cor_amarela == 0){// 1 1 0 0
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 3 para VERDE e 4 para AMARELO:\n\n";
    }else if(cor_vermelha == 1 && cor_azul == 0 && cor_verde == 1 && cor_amarela == 0){// 1 0 1 0
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 2 para AZUL e 4 para AMARELO:\n\n";
    }else if(cor_vermelha == 1 && cor_azul == 0 && cor_verde == 0 && cor_amarela == 1){// 1 0 0 1
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 2 para AZUL e 3 para VERDE:\n\n";
    }else if(cor_vermelha == 0 && cor_azul == 1 && cor_verde == 1 && cor_amarela == 0){// 0 1 1 0
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 1 para VERMELHO e 4 para AMARELO:\n\n";
    }else if(cor_vermelha == 0 && cor_azul == 1 && cor_verde == 0 && cor_amarela == 1){// 0 1 0 1
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 1 para VERMELHO e 3 para VERDE:\n\n";
    }else if(cor_vermelha == 0 && cor_azul == 0 && cor_verde == 1 && cor_amarela == 1){// 0 0 1 1
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 1 para VERMELHO e 2 para AZUL:\n\n";
    }else if(cor_vermelha == 1 && cor_azul == 1 && cor_verde == 1 && cor_amarela == 0){// 1 1 1 0
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 4 para AMARELO:\n\n";
    }else if(cor_vermelha == 1 && cor_azul == 1 && cor_verde == 0 && cor_amarela == 1){// 1 1 0 1
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 3 para VERDE:\n\n";
    }else if(cor_vermelha == 1 && cor_azul == 0 && cor_verde == 1 && cor_amarela == 1){// 1 0 1 1
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 2 para AZUL, 3 para VERDE:\n\n";
    }else if(cor_vermelha == 0 && cor_azul == 1 && cor_verde == 1 && cor_amarela == 1){// 0 1 1 1
		  std::cout << temporaria << ", escolha sua cor: \n\n\nDigite 1 para VERMELHO:\n\n";
    }
    
		std::locale loc;
		std::string nova_cor;
		std::cin >> nova_cor;
	
		if( isdigit(nova_cor[0], loc) ){
			if(std::stoi(nova_cor) < 0 || std::stoi(nova_cor) > 4){
				std::cout << "\nVocê inseriu um valor inválido. " << std::endl;
				nova_cor.clear();
				goto escolha;	
			}
			if(std::stoi(nova_cor) == 1 && cor_vermelha == 1){
				std::cout << "Esta cor já foi escolhida.Escolha outra cor." << std::endl;
				goto escolha; 
			}else if(std::stoi(nova_cor) == 1){
				vermelho->set_jogador(true);
				vermelho->setNome(temporaria);
				cor_vermelha++;
			}
			if(std::stoi(nova_cor) == 2 && cor_azul == 1){
				std::cout << "Esta cor já foi escolhida.Escolha outra cor." << std::endl;
				goto escolha; 
			}else	if (std::stoi(nova_cor) == 2){
				azul->set_jogador(true);
				azul->setNome(temporaria);
				cor_azul++;
			}
			if(std::stoi(nova_cor) == 3 && cor_verde == 1){
				std::cout << "Esta cor já foi escolhida.Escolha outra cor." << std::endl;
				goto escolha; 
			}else	if (std::stoi(nova_cor) == 3){
				verde->set_jogador(true);
				verde->setNome(temporaria);
				cor_verde++;
			}
			if(std::stoi(nova_cor) == 4 && cor_amarela == 1){
				std::cout << "Esta cor já foi escolhida.Escolha outra cor." << std::endl;
				goto escolha; 
			}else	if (std::stoi(nova_cor) == 4){
				amarelo->set_jogador(true);
				amarelo->setNome(temporaria);
				cor_amarela++;
			}
		}else{
			std::cout << "\nVocê inseriu um valor inválido. ";
			nova_cor.clear();
			goto escolha;
		}
	}
}

bool Players::movePeca(std::shared_ptr<Jogador> player, Peca peca, Casa *CasaAntiga, Casa *CasaNova){
	
  if(CasaNova->estaVazia() || CasaNova->ehSegura()){
        
    CasaAntiga->tiraPeca(peca);
    CasaNova->colocaPeca(peca);
    player->setPosicaoPecasDoJogador( peca.get_numero() , CasaNova->getPosicao() );

		return false;
	}
	else{ 
		if(CasaNova->getNumeroDePecasNaCasa() == 1){
			
			if( CasaNova->getPecasNaCasa(0).get_token() == player->get_token() ){ 
				CasaAntiga->tiraPeca(peca);
				CasaNova->colocaPeca(peca);
				player->setPosicaoPecasDoJogador( peca.get_numero(), CasaNova->getPosicao() ); 
				return false;
			}
			else{ 

				if(peca.get_token() == '@' ){ 
					std::cout << "\n\033[1;31mVERMELHO " << peca.get_token() << peca.get_numero() + 1 <<  "\033[0m COMEU ";
					estatisticas->incrementaCapturasVermelho();
				}
				if(peca.get_token() == '#' ){ 
					std::cout << "\n\033[1;34mAZUL " << peca.get_token() << peca.get_numero() + 1 <<  "\033[0m COMEU ";
					estatisticas->incrementaCapturasAzul();
				}
				if(peca.get_token() == '$' ){
					std::cout << "\n\033[1;32mVERDE " << peca.get_token() << peca.get_numero() + 1 <<  "\033[0m COMEU ";
					estatisticas->incrementaCapturasVerde();
				}
				if(peca.get_token() == '%' ){
					std::cout << "\n\033[1;33mAMARELO " << peca.get_token() << peca.get_numero() + 1<<  "\033[0m COMEU ";
					estatisticas->incrementaCapturasAmarelo();
				}

				if( amarelo->get_token() == CasaNova->getPecasNaCasa(0).get_token()){
					std::cout << "\033[1;33mAMARELO " << CasaNova->getPecasNaCasa(0).get_token() << CasaNova->getPecasNaCasa(0).get_numero() + 1 << "\033[0m!!!" << std::endl;
					amarelo->voltaPecaPraBase( amarelo->get_PecasDoJogador( CasaNova->getPecasNaCasa(0).get_numero()) );
					estatisticas->incrementaVoltasPraBaseAmarelo();
				}
				if (vermelho->get_token() == CasaNova->getPecasNaCasa(0).get_token()){
					std::cout << "\033[1;31mVERMELHO " << CasaNova->getPecasNaCasa(0).get_token() << CasaNova->getPecasNaCasa(0).get_numero() + 1 << "\033[0m!!!" << std::endl;
					vermelho->voltaPecaPraBase( vermelho->get_PecasDoJogador( CasaNova->getPecasNaCasa(0).get_numero()) );
					estatisticas->incrementaVoltasPraBaseVermelho();
				}
				if (azul->get_token() == CasaNova->getPecasNaCasa(0).get_token()){
					std::cout << "\033[1;34mVERMELHO " << CasaNova->getPecasNaCasa(0).get_token() << CasaNova->getPecasNaCasa(0).get_numero() + 1 << "\033[0m!!!" << std::endl;
					azul->voltaPecaPraBase(azul->get_PecasDoJogador( CasaNova->getPecasNaCasa(0).get_numero()));
					estatisticas->incrementaVoltasPraBaseAzul();
				}
				if (verde->get_token() == CasaNova->getPecasNaCasa(0).get_token()){
					std::cout << "\033[1;32mVERDE " << CasaNova->getPecasNaCasa(0).get_token() << CasaNova->getPecasNaCasa(0).get_numero() + 1 << "\033[0m!!!" << std::endl;
					verde->voltaPecaPraBase(verde->get_PecasDoJogador( CasaNova->getPecasNaCasa(0).get_numero()));
					estatisticas->incrementaVoltasPraBaseVerde();
				}

				CasaNova->tiraPeca( CasaNova->getPecasNaCasa(0) );

				CasaAntiga->tiraPeca(peca);
				CasaNova->colocaPeca(peca);
				player->setPosicaoPecasDoJogador(peca.get_numero(), CasaNova->getPosicao()); 
				return true;
			}
			return false;
		}
		else{ 
			CasaAntiga->tiraPeca(peca);
			CasaNova->colocaPeca(peca);
			player->setPosicaoPecasDoJogador(CasaNova->getPecasNaCasa( CasaNova->getNumeroDePecasNaCasa() - 1 ).get_numero(), CasaNova->getPosicao()); 
      return false;
		}
	}
	return false;
}


/* 
CASO 1 
Jogador tirou 6 no dado e têm quatro peças na base. 
	Só há uma jogada possível: a de tirar uma peça. 
*/

void Players::Caso1(std::shared_ptr<Jogador> player, std::shared_ptr<Tabuleiro> tabuleiro){

    if(player->get_cor() == 1){ std::cout << "\nVocê pode movimentar: \033[1;31m"; }
    if(player->get_cor() == 2){ std::cout << "\nVocê pode movimentar: \033[1;34m"; }
    if(player->get_cor() == 3){ std::cout << "\nVocê pode movimentar: \033[1;32m"; }
    if(player->get_cor() == 4){ std::cout << "\nVocê pode movimentar: \033[1;33m"; }

	for (int i = 0; i < player->getPecasBase(); i++){
		std::cout << " " << player->get_PecasDoJogador(i).get_numero() + 1 << " ";
	}

	std::locale loc;
	std::string num = "50"; 
    
	escolhaPecaCaso1: 

	num.clear();
	std::cout << "\033[0mEscolha uma peça: ";
	std::cin >> num;
	if( isdigit(num[0], loc) ){
		if(std::stoi(num) < 0 || std::stoi(num) > 4){
			std::cout << "Você inseriu um valor inválido. " << std::endl;
			num.clear();
			goto escolhaPecaCaso1;
		}
	}else{
		std::cout << "Você inseriu um valor inválido. ";
		num.clear();
		goto escolhaPecaCaso1;
	}

	player->tiraPecaDaBase(std::stoi(num) - 1, player->get_PosicaoInicial());
	
	tabuleiro->CaminhoGeral->at( static_cast<size_t> (player->get_PosicaoInicial()))->colocaPeca(player->get_PecasDoJogador(std::stoi(num) - 1));
	tabuleiro->imprimeTabuleiro(); 
}

void Players::computador_Caso1(std::shared_ptr<Jogador> computador, std::shared_ptr<Tabuleiro> tabuleiro){
    
    //sorteia peça
    int num = computador->escolhePeca();

    computador->tiraPecaDaBase(num - 1, computador->get_PosicaoInicial());

    tabuleiro->CaminhoGeral->at( static_cast<size_t>( computador->get_PosicaoInicial() ) )->colocaPeca( computador->get_PecasDoJogador(num - 1) ); 
		
		tabuleiro->imprimeTabuleiro();
}

/* 
CASO 2
Jogador tirou 6 no dado e têm menos do que quatro peças na base.
	Jogador pode escolher movimentar uma peça do tabuleiro ou tirar uma peça da base. 
*/
void Players::Caso2(std::shared_ptr<Jogador> player, std::shared_ptr<Tabuleiro> tabuleiro, int faceDoDado, bool comeu){
    
    if(player->get_cor() == 1){ std::cout << "\nVocê pode movimentar: \033[1;31m"; }
    if(player->get_cor() == 2){ std::cout << "\nVocê pode movimentar: \033[1;34m"; }
    if(player->get_cor() == 3){ std::cout << "\nVocê pode movimentar: \033[1;32m"; }
    if(player->get_cor() == 4){ std::cout << "\nVocê pode movimentar: \033[1;33m"; }

		int possibilidades[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++){
        if( !( player->get_PecasDoJogador(i).get_esta_no_caminho() ) ){
            std::cout << " " << player->get_PecasDoJogador(i).get_numero() + 1 << " ";
						possibilidades[i] = player->get_PecasDoJogador(i).get_numero() + 1; 
        }
    }

	std::locale loc;
	std::string num = "50"; 
    
	escolhaPecaCaso2: 
	num.clear();
	std::cout << "\033[0m\nEscolha uma peça: ";
	std::cin >> num;
	if( isdigit(num[0], loc) ){
		if(std::stoi(num) == 0){
			std::cout << "\nVocê inseriu um valor inválido. " << std::endl;
			num.clear();
			goto escolhaPecaCaso2;
		}else if( (std::stoi(num) != possibilidades[0]) && (std::stoi(num) != possibilidades[1]) && (std::stoi(num) != possibilidades[2]) && (std::stoi(num) != possibilidades[3]) ){
			std::cout << "\nVocê inseriu um valor inválido. " << std::endl;
			num.clear();
			goto escolhaPecaCaso2;
		}
	}else{
		std::cout << "\nVocê inseriu um valor inválido. ";
		num.clear();
		goto escolhaPecaCaso2;
	}
	
	if( player->get_PecasDoJogador(std::stoi(num) - 1).get_posicao() == -1 ){
		
		player->tiraPecaDaBase(std::stoi(num) - 1, player->get_PosicaoInicial());
		tabuleiro->CaminhoGeral->at(static_cast<size_t>(player->get_PosicaoInicial()))->colocaPeca(player->get_PecasDoJogador(std::stoi(num) - 1));

	}
	else{
    //caso o num sorteado esteja fora da base
    int posicaoAntiga = player->get_PecasDoJogador(std::stoi(num) - 1).get_posicao();
    int posicaoFutura = posicaoAntiga + faceDoDado;
        
    if ( (player->get_PecasDoJogador(std::stoi(num) - 1).get_passou_pelo_inicio() == false) && ( posicaoAntiga + faceDoDado >= static_cast<int>( tabuleiro->CaminhoGeral->size() ) ) ){
      //caso o jogador ainda não tenha passado pela casa 0 do tabuleiro, ele tem que fazer esse "pulo" aqui
      posicaoFutura -= static_cast<int>( tabuleiro->CaminhoGeral->size() );
      player->setPassouPeloInicio(std::stoi(num)-1, true);

      comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura)));
    }else{
      if( player->get_PecasDoJogador(std::stoi(num) - 1).get_passou_pelo_inicio() && posicaoFutura > player->get_PosicaoFinal() ){
        //caso o jogador já tenha passado pelo início e a sua movimentação agora ultrapasse a sua última casa antes de entrar no caminho
        //aqui ele sai do caminho geral e entra no caminho colorido
        posicaoFutura = posicaoFutura - player->get_PosicaoFinal() - 1;
        if(player->get_cor() == 1){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVermelho->at( static_cast<size_t>(posicaoFutura) )); }
        if(player->get_cor() == 2){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAzul->at( static_cast<size_t>(posicaoFutura) )); }
        if(player->get_cor() == 3){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVerde->at( static_cast<size_t>(posicaoFutura) )); }
        if(player->get_cor() == 4){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAmarelo->at( static_cast<size_t>(posicaoFutura) )); }
        player->setEstaNoCaminho(std::stoi(num)-1, true);
      }else{
        if(player->get_PecasDoJogador(std::stoi(num) - 1).get_esta_no_caminho()){
          //caso ele esteja no meio do caminho colorido
          if(player->get_cor() == 1){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoVermelho->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVermelho->at( static_cast<size_t>(posicaoFutura) )); }
          if(player->get_cor() == 2){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoAzul->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAzul->at( static_cast<size_t>(posicaoFutura) )); }
          if(player->get_cor() == 3){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoVerde->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVerde->at( static_cast<size_t>(posicaoFutura) )); }
          if(player->get_cor() == 4){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoAmarelo->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAmarelo->at( static_cast<size_t>(posicaoFutura) )); }            
        }else{
          //caso ele esteja no caminho geral do tabuleiro e a jogada não requeira nenhum tratamento especial
          //apenas move a peça
          comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura) ));
        }
      }
    }
	}   
  tabuleiro->imprimeTabuleiro();
}

void Players::computador_Caso2(std::shared_ptr<Jogador> computador, std::shared_ptr<Tabuleiro> tabuleiro, int faceDoDado, bool comeu){
    
  int num = 0, numeroDeSorteios = 0;

  while(num == 0 && numeroDeSorteios < 50){
      
    num = computador->escolhePeca();

    if( computador->get_PecasDoJogador(num - 1).get_posicao() == -1 ){

      computador->tiraPecaDaBase(num - 1, computador->get_PosicaoInicial());
      tabuleiro->CaminhoGeral->at(static_cast<size_t>(computador->get_PosicaoInicial()))->colocaPeca(computador->get_PecasDoJogador(num - 1));
    }
    else{
      int posicaoAntiga = computador->get_PecasDoJogador(num - 1).get_posicao();
      int posicaoFutura = posicaoAntiga + faceDoDado;
          
      if ( (computador->get_PecasDoJogador(num - 1).get_passou_pelo_inicio() == false) && ( posicaoAntiga + faceDoDado >= static_cast<int>( tabuleiro->CaminhoGeral->size() ) ) ){
          posicaoFutura -= static_cast<int>( tabuleiro->CaminhoGeral->size() );
          computador->setPassouPeloInicio(num-1, true);

          comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura) ));
      
      }else{

        if( ( computador->get_PecasDoJogador(num - 1).get_passou_pelo_inicio() ) && ( posicaoFutura > static_cast<int>(computador->get_PosicaoFinal()) ) ){
          posicaoFutura = posicaoFutura - computador->get_PosicaoFinal() - 1;
          if(computador->get_cor() == 1){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVermelho->at( static_cast<size_t>(posicaoFutura) )); }
          if(computador->get_cor() == 2){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAzul->at( static_cast<size_t>(posicaoFutura) )); }
          if(computador->get_cor() == 3){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVerde->at( static_cast<size_t>(posicaoFutura) )); }
          if(computador->get_cor() == 4){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAmarelo->at( static_cast<size_t>(posicaoFutura) )); }
          computador->setEstaNoCaminho(num-1, true);

        }else{
          if(computador->get_PecasDoJogador(num - 1).get_esta_no_caminho()){
            if(posicaoFutura > 5){
                num = 0;
            }else{

              if(computador->get_cor() == 1){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoVermelho->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVermelho->at( static_cast<size_t>(posicaoFutura) )); }
              if(computador->get_cor() == 2){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoAzul->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAzul->at( static_cast<size_t>(posicaoFutura) )); }
              if(computador->get_cor() == 3){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoVerde->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVerde->at( static_cast<size_t>(posicaoFutura) )); }
              if(computador->get_cor() == 4){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoAmarelo->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAmarelo->at( static_cast<size_t>(posicaoFutura) )); }               
            }
          }else{
            comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura) ));
          }
        }
      }
    }   
    numeroDeSorteios++;
  }
  if(numeroDeSorteios == 50){std::cout << "NÃO HÁ JOGADAS DISPONÍVEIS!!!";}
  tabuleiro->imprimeTabuleiro();
}

/* 
CASO 3 
Jogador tirou algum número diferente de 6 no dado (e tem menos do que quatro peças na base).
	Deve escolher uma peça do tabuleiro para movimentar.  
*/

bool Players::Caso3(std::shared_ptr<Jogador> player, std::shared_ptr<Tabuleiro> tabuleiro, int faceDoDado, bool comeu){

    int nao_move = 0;
    for(int i = 0; i < 4; i++){
      if(player->get_PecasDoJogador(i).get_esta_no_caminho() || player->get_PecasDoJogador(i).get_posicao() == -1){
        nao_move++;
      }
    }
    if(nao_move == 4){
      for(int i = 0; i < 4; i++){
        if((player->get_PecasDoJogador(i).get_posicao() + faceDoDado) != 5){
          std::cout << "\nNAO EXISTEM MOVIMENTOS DISPONIVEIS." << std::endl;
        }
        sleep(1);
        return false;
      }
    }

    if(player->get_cor() == 1){ std::cout << "\nVocê pode movimentar: \033[1;31m"; }
    if(player->get_cor() == 2){ std::cout << "\nVocê pode movimentar: \033[1;34m"; }
    if(player->get_cor() == 3){ std::cout << "\nVocê pode movimentar: \033[1;32m"; }
    if(player->get_cor() == 4){ std::cout << "\nVocê pode movimentar: \033[1;33m"; }
		int possibilidades[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++){
			if( (player->get_PecasDoJogador(i).get_posicao() != -1) && !( (player->get_PecasDoJogador(i).get_esta_no_caminho() == true) && (player->get_PecasDoJogador(i).get_posicao() + faceDoDado > 5))){
				std::cout << " " << player->get_PecasDoJogador(i).get_numero() + 1 << " ";
				possibilidades[i] = player->get_PecasDoJogador(i).get_numero() + 1;
			}
    }

    std::locale loc;
		std::string num = "50"; 
			
		escolhaPecaCaso3: 
		num.clear();
		std::cout << "\033[0m\nEscolha uma peça: ";
		std::cin >> num;
		if( isdigit(num[0], loc) ){
			if(std::stoi(num) == 0){
				std::cout << "\nVocê inseriu um valor inválido. " << std::endl;
				num.clear();
				goto escolhaPecaCaso3;
			}else if( (std::stoi(num) != possibilidades[0]) && (std::stoi(num) != possibilidades[1]) && (std::stoi(num) != possibilidades[2]) && (std::stoi(num) != possibilidades[3]) ){
				std::cout << "\nVocê inseriu um valor inválido. " << std::endl;
				num.clear();
				goto escolhaPecaCaso3;
			}
		}else{
			std::cout << "\nVocê inseriu um valor inválido. ";
			num.clear();
			goto escolhaPecaCaso3;
		}
		
    int posicaoAntiga = player->get_PecasDoJogador(std::stoi(num) - 1).get_posicao();
    int posicaoFutura = posicaoAntiga + faceDoDado;

    if ( (player->get_PecasDoJogador(std::stoi(num) - 1).get_passou_pelo_inicio() == false) && ( posicaoAntiga + faceDoDado >= static_cast<int>( tabuleiro->CaminhoGeral->size() ) ) ){
      posicaoFutura -= static_cast<int>( tabuleiro->CaminhoGeral->size() );
      player->setPassouPeloInicio(std::stoi(num)-1, true);
      comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura) ));
    }else{
      if( player->get_PecasDoJogador(std::stoi(num) - 1).get_passou_pelo_inicio() && posicaoFutura > player->get_PosicaoFinal() ){
        posicaoFutura = posicaoFutura - player->get_PosicaoFinal() - 1;
        if(player->get_cor() == 1){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVermelho->at( static_cast<size_t>(posicaoFutura) )); }
        if(player->get_cor() == 2){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAzul->at( static_cast<size_t>(posicaoFutura) )); }
        if(player->get_cor() == 3){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVerde->at( static_cast<size_t>(posicaoFutura) )); }
        if(player->get_cor() == 4){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAmarelo->at( static_cast<size_t>(posicaoFutura) )); }
        player->setEstaNoCaminho(std::stoi(num)-1, true);
      }else{
        if(player->get_PecasDoJogador(std::stoi(num) - 1).get_esta_no_caminho()){
          if(player->get_cor() == 1){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoVermelho->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVermelho->at( static_cast<size_t>(posicaoFutura) )); }
          if(player->get_cor() == 2){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoAzul->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAzul->at( static_cast<size_t>(posicaoFutura) )); }
          if(player->get_cor() == 3){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoVerde->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVerde->at( static_cast<size_t>(posicaoFutura) )); }
          if(player->get_cor() == 4){ comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoAmarelo->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAmarelo->at( static_cast<size_t>(posicaoFutura) )); }            
        }else{
          comeu = movePeca(player, player->get_PecasDoJogador(std::stoi(num)-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura) ));
        }
      }
  }
	tabuleiro->imprimeTabuleiro();
  return comeu; 
}

bool Players::computador_Caso3(std::shared_ptr<Jogador> computador, std::shared_ptr<Tabuleiro> tabuleiro, int faceDoDado, bool comeu){
  int num = 0, numeroDeSorteios = 0;

  while(num == 0 && numeroDeSorteios < 50){
        
    num = computador->escolhePeca();

    int posicaoAntiga = computador->get_PecasDoJogador(num - 1).get_posicao();
    int posicaoFutura = posicaoAntiga + faceDoDado;

    if( computador->get_PecasDoJogador(num-1).get_posicao() == -1 ){
      num = 0;
    }else{
      if( (computador->get_PecasDoJogador(num-1).get_esta_no_caminho())){
        if(posicaoFutura > 5){
          num = 0;
        }else{
          if(computador->get_cor() == 1){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoVermelho->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVermelho->at( static_cast<size_t>(posicaoFutura) )); }
          if(computador->get_cor() == 2){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoAzul->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAzul->at( static_cast<size_t>(posicaoFutura) )); }
          if(computador->get_cor() == 3){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoVerde->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVerde->at( static_cast<size_t>(posicaoFutura) )); }
          if(computador->get_cor() == 4){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoAmarelo->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAmarelo->at( static_cast<size_t>(posicaoFutura) )); }            
        }	
      }else{
        if(computador->get_PecasDoJogador(num-1).get_passou_pelo_inicio()){
          if(posicaoFutura > static_cast<int>( computador->get_PosicaoFinal()) ){
            posicaoFutura = posicaoFutura - static_cast<int>(computador->get_PosicaoFinal()) - 1;

            if(computador->get_cor() == 1){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVermelho->at( static_cast<size_t>(posicaoFutura) )); }
            if(computador->get_cor() == 2){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAzul->at( static_cast<size_t>(posicaoFutura) )); }
            if(computador->get_cor() == 3){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoVerde->at( static_cast<size_t>(posicaoFutura) )); }
            if(computador->get_cor() == 4){ comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoAmarelo->at( static_cast<size_t>(posicaoFutura) )); }

            computador->setEstaNoCaminho(num-1, true);

            }else{
              comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura)));
            }

            }else{
              if( posicaoFutura >= static_cast<int>(tabuleiro->CaminhoGeral->size())){
                
                posicaoFutura-= static_cast<int>(tabuleiro->CaminhoGeral->size());
                comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura)));

                computador->setPassouPeloInicio(num-1, true);
                                                            
              }else{
                comeu = movePeca(computador, computador->get_PecasDoJogador(num-1), tabuleiro->CaminhoGeral->at(static_cast<size_t>(posicaoAntiga)), 	tabuleiro->CaminhoGeral->at( static_cast<size_t>(posicaoFutura)));
              }
          }
			}
		}
		numeroDeSorteios++;
  }
  if(numeroDeSorteios==50){ std::cout<< "NÂO HÁ JOGADAS DISPONÍVEIS!!!" << std::endl; }
               
  tabuleiro->imprimeTabuleiro(); 
  return comeu;
}

int Players::jogada(std::shared_ptr<Jogador> player, std::shared_ptr<Tabuleiro> tabuleiro){

    if(player->ehJogador()){

				int faceDoDado = 0;
				static bool comeu = false;

				faceDoDado = jogaDado();
       
			  if(player->get_cor() == 1){
					std::cout << "\033[1;31m" << player->imprimeNome() + "_" + player->get_token() << "\033[0m obteve " << faceDoDado << " no dado!" << std::endl;
					if(faceDoDado==6){estatisticas->incrementaSeisVermelho();}
					if(faceDoDado==1){estatisticas->incrementaUnsVermelho();}
				}
        if(player->get_cor() == 2){
					std::cout << "\033[1;34m" << player->imprimeNome() + "_" + player->get_token() << "\033[0m obteve "<< faceDoDado << " no dado!" << std::endl;
					if(faceDoDado==6){estatisticas->incrementaSeisAzul();}
					if(faceDoDado==1){estatisticas->incrementaUnsAzul();}
				}
        if(player->get_cor() == 3){
					std::cout << "\033[1;32m" << player->imprimeNome() + "_" + player->get_token() << "\033[0m obteve "<< faceDoDado << " no dado!" << std::endl;
					if(faceDoDado==6){estatisticas->incrementaSeisVerde();}
					if(faceDoDado==1){estatisticas->incrementaUnsVerde();}
				}
        if(player->get_cor() == 4){
					std::cout << "\033[1;33m" << player->imprimeNome() + "_" + player->get_token() << "\033[0m obteve "<< faceDoDado << " no dado!" << std::endl;
					if(faceDoDado==6){estatisticas->incrementaSeisAmarelo();}
					if(faceDoDado==1){estatisticas->incrementaUnsAmarelo();}
				}	
        
        if (player->getPecasBase() == 4){
            if (faceDoDado == 6){ 
							Caso1(player, tabuleiro);
              return 1;
						}else{
              return 0;
            }
        }else{
            if(faceDoDado == 6){ 
                Caso2(player, tabuleiro, faceDoDado, comeu); 
                return 1;
            }else{
                return Caso3(player, tabuleiro, faceDoDado, comeu);
            }
        }
    }else{

        int faceDoDado = player->jogaDado();
        bool comeu = false;

        if(player->get_cor() == 1){
					std::cout << "\033[1;31m" << player->imprimeNome() + "_" + player->get_token() << "\033[0m obteve " << faceDoDado << " no dado!" << std::endl; sleep(2);
					if(faceDoDado==6){estatisticas->incrementaSeisVermelho();}
					if(faceDoDado==1){estatisticas->incrementaUnsVermelho();}
				}
        if(player->get_cor() == 2){
					std::cout << "\033[1;34m" << player->imprimeNome() + "_" + player->get_token() << "\033[0m obteve " << faceDoDado << " no dado!" << std::endl; sleep(2);
					if(faceDoDado==6){estatisticas->incrementaSeisAzul();}
					if(faceDoDado==1){estatisticas->incrementaUnsAzul();}
				}
        if(player->get_cor() == 3){
					std::cout << "\033[1;32m" << player->imprimeNome() + "_" + player->get_token() << "\033[0m obteve " << faceDoDado << " no dado!" << std::endl; sleep(2);
					if(faceDoDado==6){estatisticas->incrementaSeisVerde();}
					if(faceDoDado==1){estatisticas->incrementaUnsVerde();}
				}
        if(player->get_cor() == 4){
					std::cout << "\033[1;33m" << player->imprimeNome() + "_" + player->get_token() << "\033[0m obteve " << faceDoDado << " no dado!" << std::endl; sleep(2);
					if(faceDoDado==6){estatisticas->incrementaSeisAmarelo();}
					if(faceDoDado==1){estatisticas->incrementaUnsAmarelo();}
				}

        if(player->getPecasBase() == 4){
            if(faceDoDado == 6){
              computador_Caso1(player, tabuleiro);  
              sleep(1);
              return 1;
            }
            else{
              return 0; 
            }
        }else{
            if(faceDoDado == 6){
                computador_Caso2(player, tabuleiro, faceDoDado, comeu);
								sleep(1);
                return 1;
            }else{
								sleep(1);
                return computador_Caso3(player, tabuleiro, faceDoDado, comeu);
            }
        }   
    }
    return 1;
}


int Players::checaVencedor(std::shared_ptr<Jogador> player){
	int num;
	if(player->get_token() == '@'){ num = 1; }
	if(player->get_token() == '#'){ num = 2; }
	if(player->get_token() == '$'){ num = 3; }
	if(player->get_token() == '%'){ num = 4; }

	if(  (player->get_PecasDoJogador(0).get_esta_no_caminho() && player->get_PecasDoJogador(0).get_posicao() == 5) && (player->get_PecasDoJogador(1).get_esta_no_caminho() && player->get_PecasDoJogador(1).get_posicao() == 5) && (player->get_PecasDoJogador(2).get_esta_no_caminho() && player->get_PecasDoJogador(2).get_posicao() == 5) && (player->get_PecasDoJogador(3).get_esta_no_caminho() && player->get_PecasDoJogador(3).get_posicao() == 5) ){ return num; }
	return 0; 
}

void Players::telaVencedor(){
	if(checaVencedor(vermelho) == 1){
		std::cout << "\033[1;31m____    ____  _______ .______      .___  ___.  _______  __       __    __    ______   \n\\   \\  /   / |   ____||   _  \\     |   \\/   | |   ____||  |     |  |  |  |  /  __  \\  \n \\   \\/   /  |  |__   |  |_)  |    |  \\  /  | |  |__   |  |     |  |__|  | |  |  |  | \n  \\      /   |   __|  |      /     |  |\\/|  | |   __|  |  |     |   __   | |  |  |  | \n   \\    /    |  |____ |  |\\  \\----.|  |  |  | |  |____ |  `----.|  |  |  | |  `--'  | \n    \\__/     |_______|| _| `._____||__|  |__| |_______||_______||__|  |__|  \\______/  \n\n\n" << std::endl;

		std::cout << "                                                                 \n____    ____  _______ .__   __.   ______  _______  __    __  \n\\   \\  /   / |   ____||  \\ |  |  /      ||   ____||  |  |  | \n \\   \\/   /  |  |__   |   \\|  | |  ,----'|  |__   |  |  |  | \n  \\      /   |   __|  |  . `  | |  |     |   __|  |  |  |  | \n   \\    /    |  |____ |  |\\   | |  `----.|  |____ |  `--'  | \n    \\__/     |_______||__| \\__|  \\______||_______| \\______/  \n\n\n\0330m" << std::endl;
																														
	}
	if(checaVencedor(azul) == 2){
		std::cout << "\033[1;34m     ___       ________   __    __   __      \n    /   \\     |       /  |  |  |  | |  |     \n   /  ^  \\    `---/  /   |  |  |  | |  |     \n  /  /_\\  \\      /  /    |  |  |  | |  |     \n /  _____  \\    /  /----.|  `--'  | |  `----.\n/__/     \\__\\  /________| \\______/  |_______|\n\n\n" << std::endl; 
	
		std::cout << "                                                                 \n____    ____  _______ .__   __.   ______  _______  __    __  \n\\   \\  /   / |   ____||  \\ |  |  /      ||   ____||  |  |  | \n \\   \\/   /  |  |__   |   \\|  | |  ,----'|  |__   |  |  |  | \n  \\      /   |   __|  |  . `  | |  |     |   __|  |  |  |  | \n   \\    /    |  |____ |  |\\   | |  `----.|  |____ |  `--'  | \n    \\__/     |_______||__| \\__|  \\______||_______| \\______/  \n\n\n\033[0m" << std::endl;
																				
	}

	if(checaVencedor(verde) == 3){
		std::cout<< "\033[1;32m____    ____  _______ .______       _______   _______ \n\\   \\  /   / |   ____||   _  \\     |       \\ |   ____|\n \\   \\/   /  |  |__   |  |_)  |    |  .--.  ||  |__   \n  \\      /   |   __|  |      /     |  |  |  ||   __|  \n   \\    /    |  |____ |  |\\  \\----.|  '--'  ||  |____ \n    \\__/     |_______|| _| `._____||_______/ |_______|\n\n\n" << std::endl;
    
		std::cout << "                                                                 \n____    ____  _______ .__   __.   ______  _______  __    __  \n\\   \\  /   / |   ____||  \\ |  |  /      ||   ____||  |  |  | \n \\   \\/   /  |  |__   |   \\|  | |  ,----'|  |__   |  |  |  | \n  \\      /   |   __|  |  . `  | |  |     |   __|  |  |  |  | \n   \\    /    |  |____ |  |\\   | |  `----.|  |____ |  `--'  | \n    \\__/     |_______||__| \\__|  \\______||_______| \\______/  \n\n\n\033[0m" << std::endl;

	}
	if(checaVencedor(amarelo) == 4){
		std::cout << "\033[1;33m	   ___      .___  ___.      ___      .______       _______  __        ______   \n    /   \\     |   \\/   |     /   \\     |   _  \\     |   ____||  |      /  __  \\  \n   /  ^  \\    |  \\  /  |    /  ^  \\    |  |_)  |    |  |__   |  |     |  |  |  | \n  /  /_\\  \\   |  |\\/|  |   /  /_\\  \\   |      /     |   __|  |  |     |  |  |  | \n /  _____  \\  |  |  |  |  /  _____  \\  |  |\\  \\----.|  |____ |  `----.|  `--'  | \n/__/     \\__\\ |__|  |__| /__/     \\__\\ | _| `._____||_______||_______| \\______/  \n\n\n" << std::endl;

		std::cout << "                                                                 \n____    ____  _______ .__   __.   ______  _______  __    __  \n\\   \\  /   / |   ____||  \\ |  |  /      ||   ____||  |  |  | \n \\   \\/   /  |  |__   |   \\|  | |  ,----'|  |__   |  |  |  | \n  \\      /   |   __|  |  . `  | |  |     |   __|  |  |  |  | \n   \\    /    |  |____ |  |\\   | |  `----.|  |____ |  `--'  | \n    \\__/     |_______||__| \\__|  \\______||_______| \\______/  \n\n\n\033[0m" << std::endl;
                                                              
	}

	std::cout << "\n\n\n\n" << std::endl;
	getEstatisticas();
  
	
}

void Players::getEstatisticas(){
	estatisticas->imprimeEstatisticas();
}																										
