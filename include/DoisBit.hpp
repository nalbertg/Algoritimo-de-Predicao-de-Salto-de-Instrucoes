#ifndef _UMBIT_HPP_
#define _UMBIT_HPP_

#include <vector>
#include <string>
#include <fstream>

#include "Erro.hpp"

/*
*	@brief 		
*	@param 		
*	@return 	
*/
class DoisBit {
	public:
		DoisBit() :
		tomado("N")
		{
			matrizSaltos.resize(4);
			resultadosPredicoes.resize(8);
		}

		DoisBit(std::string valorInicial) :
		tomado(valorInicial)
		{
			matrizSaltos.resize(4);
			resultadosPredicoes.resize(8);
		}

		~DoisBit()
		{ /* Empty */ }

		void run(int &argc, char const *argv[]);
	private:
		void lerArquivo(std::string);
		bool predicao();
		void extrairSalto(std::string, std::vector<std::string> &);

		void testeCorrelacao(int, int, std::vector<int>, std::string &);

		void preditor();

		void clear();

		// variaveis

		// valor inicial da predição
		std::string tomado;
		// matriz de vector que armazena oque foi lido no arquivo
		std::vector<std::vector<std::string>> matrizSaltos;
		// matriz de vector que armazena os resultados das predições
		std::vector<std::vector<std::string>> resultadosPredicoes;
};

#include "DoisBit.inl"

#endif