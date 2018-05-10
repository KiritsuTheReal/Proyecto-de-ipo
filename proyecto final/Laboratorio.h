

#ifndef LABORATORIO_H_
#define LABORATORIO_H_
#include<string>

using namespace std;

class Laboratorio {
private:
	string estado;
    string equipo;
    float tiempo;
    float valor;

public:
	Laboratorio();
	virtual ~Laboratorio();

	void DarEstado (string estado){

	}

	string ObtenerEstado (){

	}

	void DarEquipo (string equipo){

	}

	string ObtenerEquipo (){

	}

	void DarTiempo (float tiempo){

	}

	float ObtenerTiempo(){

	}

	void DarValor (float valor){

	}

	float ObtenerValor (){

	}
};

#endif /* LABORATORIO_H_ */
