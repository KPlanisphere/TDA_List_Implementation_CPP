#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <string>
#include"operaciones.h"

TDA::TDA() { //CONSTRUCTOR (INIT)
	ultimo = -1;
}

//DIVERSOS
bool TDA::emptyList() { //VERIFICAR LISTA VACIA
	if (ultimo < primer) 
		return 1;
	else
		return 0;
}
bool TDA::fullList() { //VERIFICAR LISTA LLENA
	if (ultimo == maxim - 1) 
		return 1;
	else
		return 0;
}

void TDA::addLast(int x) { //INSERTAR AL FINAL
	ultimo++; 
	std::cout << "\n\t VALOR #" << ultimo << " = ";
	std::cin >> x; 
	//setLista(ultimo,x); //se ingresa el dato
	lista[ultimo] = x;
}
void TDA::addFirst(int x) { //INSERTAR AL INICIO
	int aux;
	aux = ultimo;
	while (aux >= primer) { 
		lista[aux + 1] = lista[aux];
		aux--;
	}
	std::cout << "\n\t VALOR #" << ultimo << " = ";
	std::cin >> x; 
	lista[primer] = x; 
	ultimo++; 
}

void TDA::deleteFinal() { //ELIMINAR EL ULTIMO
	ultimo--; 
}

void TDA::deleteFirst() { //ELIMINAR EL INICIO
	int aux = primer; 
	while (aux <= ultimo) { 
		lista[aux - 1] = lista[aux];
		aux++;
	}
	ultimo--; 
}

void TDA::print() { //ENLISTAR
	std::cout << "\n\t POS. |  VALOR  " << std::endl;
	int i;
	for (i = 0; i < ultimo + 1; i++) {
		std::cout << "\t  #" << i << "  |  " << lista[i] << std::endl;
	}
}

void TDA::searchEle(int x) { //BUSCAR ELEMENTO
	int a,b=0;
	for (int i = 0; i < ultimo + 1; i++) { 
		if (x == lista[i]) { 
			if (b == 0) {
				std::cout << "\n\t POS. |  VALOR  " << std::endl;
				b = 1;
			}
			std::cout << "\t  #" << i << "  |  " << lista[i] << std::endl;
			a = 1; 
			break;
		}
	}
	if (a != 1) { 
		std::cout << std::endl << "[!] NO HAY VALORES REGISTRADOS [!]" << std::endl; 
	} 
}
void TDA::final() { //ULTIMO ELEMENTO
	std::cout << "\n\t/////// ULTIMO VALOR" << std::endl;
	std::cout << "\n\t POS. |  VALOR  " << std::endl;
	std::cout << "\t  #" << ultimo << "  |  " << lista[ultimo] << std::endl;
}
void TDA::first() { //PRIMER ELEMENTO
	std::cout << "\n\t/////// PRIMER VALOR" << std::endl;
	std::cout << "\n\t POS. |  VALOR  " << std::endl;
	std::cout << "\t  #" << primer << "  |  " << lista[primer] << std::endl;
}