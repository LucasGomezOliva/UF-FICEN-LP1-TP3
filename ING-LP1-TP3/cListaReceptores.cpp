#include "cListaReceptores.h"
cListaReceptores::cListaReceptores() : cListaTemplate<cReceptor>() {

}

cListaReceptores::cListaReceptores(unsigned int TamanioLista, bool on_delete_erase) : cListaTemplate<cReceptor>(TamanioLista, on_delete_erase) {

}

cListaReceptores::~cListaReceptores() {

}

cReceptor* cListaReceptores::QuitarReceptor(cOrgano* OrganoRecibir) {
	for (unsigned int i = 0; i < CA; i++) {
		if (Array[i] != NULL) {
			return NULL;
		}
	}
}

cReceptor* cListaReceptores::BuscarReceptor(string NombreRecpetor) {
	for (unsigned int i = 0; i < CA; i++) {
		if (Array[i]->GetNombre()==NombreRecpetor){
			return Array[i];
		}
	}
	return NULL;
}

void cListaReceptores::InformarDatosReceptor(string Nombre) {
	for (unsigned int i = 0; i < CA; i++) {
		if (Array[i]->GetNombre() == Nombre) {
			Array[i]->imprimir();
		}
	}
}

