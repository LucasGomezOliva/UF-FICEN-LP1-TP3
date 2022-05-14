#include "cINCUCAI.h"
cINCUCAI::cINCUCAI() {
	this->ListaDonantesINCUCAI = new cListaDonantes(100, false);
	this->ListaReceptoresINCUCAI = new cListaReceptores(100, false);
	this->ListaDeCentrosDeSaludINCUCAI = new cListaCentrosDeSalud(30, false);
}
cINCUCAI::~cINCUCAI() {
	delete ListaDonantesINCUCAI;
	delete ListaReceptoresINCUCAI;
	delete ListaDeCentrosDeSaludINCUCAI;
}

bool cINCUCAI::RecibirPaciente(cPaciente* Paciente) {

	cDonante* DonanteAuxiliar = dynamic_cast<cDonante*> (Paciente);
	if (DonanteAuxiliar != NULL) {
		cout << "El paciente es un donante" << endl;
		*(ListaDonantesINCUCAI) + DonanteAuxiliar;
		// metodo buscar los posibles receptores -- devolver sublista por cada organo a donar
		BuscarPosiblesReceptores(DonanteAuxiliar);
		//
	}

	cReceptor* ReceptorAuxiliar = dynamic_cast<cReceptor*> (Paciente);
	if (ReceptorAuxiliar != NULL) {
		cout << "El paciente es un receptor" << endl;
		*(ListaReceptoresINCUCAI) + ReceptorAuxiliar;
		//buscar coincidencia en la lista de donantes
		//devolver cPaciente que correspode al match
	}

	return true;
}

void cINCUCAI::BuscarPosiblesReceptores(cDonante* Donante) {
	//devolver sublista por cada organo a donar
}

string cINCUCAI::ToStringINCUCAI() const {
	return "\n ----INCUCAI----";
}
void cINCUCAI::imprimir() const {
	cout << ToStringINCUCAI() << endl;
}