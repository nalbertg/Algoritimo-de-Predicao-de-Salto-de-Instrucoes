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
		tomado(false)
		{
			matrizSaltos.resize(4);
		}

		DoisBit(bool valorInicial) :
		tomado(valorInicial)
		{
			matrizSaltos.resize(4);
		}

		~DoisBit()
		{ /* Empty */ }

		void run(int &argc, char const *argv[]);
	private:
		void lerArquivo(std::string);
		bool predicao();
		void extrairSalto(std::string, std::vector<std::string> &);

		void preditor();

		void clear();

		// variaveis

		// valor inicial da predição
		bool tomado;
		// matriz de vector que armqzena os resultados das predições
		std::vector<std::vector<std::string>> matrizSaltos;
};

#include "DoisBit.inl"

#endif