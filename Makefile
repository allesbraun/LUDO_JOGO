# Compilador
CC = g++ -std=c++17 -g

# Flags de compilacao
FLAGS	= -W -Wall -Wextra -Werror -Wshadow -Wconversion -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wsign-conversion -Wsign-promo -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused

# Variaveis do tipo executavel
O = *.o

#Nome do executavel
EXE = exe

# Comando para limpar arquivo
RM = rm -rf

# Comando para pegar todos os .cpp da pasta do Makefile
APPNAME = $(wildcard *.cpp)

# Compila e executa o programa e depois apaga todos os arquivos .o e o
# executavel criado
all: run clean

# Limpa o terminal de verdade
limpa:
	tput reset

# Compila e executa o programa
run:
	$(CC) $(FLAGS) -c $(APPNAME)
	$(CC) $(FLAGS) -o $(EXE) $(O)
	./$(EXE)

# Apaga todos os arquivos .o e o executavel criado
clean:
	$(RM) $(O)
	$(RM) $(EXE)

.PHONY: all clean
#------------------------------------------------------------------------------#
