#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <stdio.h>
#include <string>
#include"operaciones.h"

int pause,ultimo = -1;
TDA lista;

int main(){
	int x=0, op; 
	do {
		std::cout << "\n\t-- OPCIONES DE LISTA --" << std::endl;
		std::cout << "\n\t[1]  INSERTAR AL FINAL" << std::endl;
		std::cout << "\t[2]  INSERTAR AL INICIO" << std::endl;
		std::cout << "\t[3]  ELIMINAR EL ULTIMO" << std::endl;
		std::cout << "\t[4]  ELIMINAR EL PRIMERO" << std::endl;
		std::cout << "\t[5]  ENLISTAR" << std::endl;
		std::cout << "\t[6]  VERIFICAR LISTA VACIA" << std::endl;
		std::cout << "\t[7]  VERIFICAR LISTA LLENA" << std::endl;
		std::cout << "\t[8]  BUSCAR" << std::endl;
		std::cout << "\t[9]  DEVOLVER ULTIMO" << std::endl;
		std::cout << "\t[10] SALIR" << std::endl;
		std::cout << ">> ";
		std::cin >> op;
		system("cls");
		switch (op) {
		case 1: //INSERTAR AL FINAL
			if (lista.fullList() == 1) //VERIFICAR LISTA LLENA
				std::cout << "\n[!] LISTA LLENA [!]"<< std::endl;
			else {
				std::cout << "\n/////// INSERTAR AL FINAL " << std::endl;
				lista.addLast(x);	
			}
			break;
		case 2: //INSERTAR AL INICIO
			if (lista.fullList() == 1) //VERIFICAR LISTA LLENA
				std::cout << "\n[!] LISTA LLENA [!]" << std::endl;
			else {
				std::cout << "\n/////// INSERTAR AL INICIO " << std::endl; 
				lista.addFirst(x);
			}
			break;
		case 3: //ELIMINAR EL ULTIMO
			if (lista.emptyList() == 1) //VERIFICAR LISTA VACIA
				std::cout << "\n[!] LISTA VACIA [!]" << std::endl;
			else {
				std::cout << "\n/////// ELIMINAR ULTIMO" << std::endl;
				std::cout << "\n\n[!] SE ELIMINO EL ULTIMO ELEMENTO [!]" << std::endl;
				lista.deleteFinal(); 
			}
			break;
		case 4: //ELIMINAR EL PRIMERO
			if (lista.emptyList() == 1) //VERIFICAR LISTA VACIA
				std::cout << "\n[!] LISTA VACIA [!]" << std::endl; 
			else {
				std::cout << "\n/////// ELIMINAR PRIMERO" << std::endl;
				std::cout << "\n\n[!] SE ELIMINO EL PRIMER ELEMENTO [!]" << std::endl;
				lista.deleteFirst(); 
			}
			break;
		case 5: //LISTAR
			if (lista.emptyList() == 1)
				std::cout << "\n[!] LISTA VACIA [!]" << std::endl;  //VERIFICAR LISTA LLENA
			else {
				std::cout << "\n/////// LISTA" << std::endl;
				lista.print(); 
			}
			break;
		case 6: //LISTA LLENA
			if (lista.emptyList() == 1)  //VERIFICAR LISTA VACIA
				std::cout << "\n[!] LISTA VACIA [!]"<< std::endl;
			else
				if (lista.fullList() == 1) //VERIFICAR LISTA LLENA
					std::cout << "\n[!] LISTA LLENA [!]" << std::endl;
				else
					std::cout << "\nLa lista esta en proceso de ser completada" << std::endl;
			break;
		case 7: //LISTA VACIA
			if (lista.fullList() == 1)  //VERIFICAR LISTA LLENA
				std::cout << "\n[!] LISTA LLENA [!]" << std::endl;
			else
				std::cout << "\nLa lista esta en proceso de ser completada" << std::endl;
			break;
		case 8: //BUSCAR ELEMENTO
			if (lista.emptyList() == 1)  //VERIFICAR LISTA VACIA
				std::cout << "\n[!] LISTA LLENA [!]" << std::endl;
			else {
				std::cout << "\nEscriba el dato que busca: ";
				std::cin >> x; 
				lista.searchEle(x);
			}
			break;
		case 9: //ULTIMO ELEMENTO
			if (lista.emptyList() == 1)  //VERIFICAR LISTA VACIA
				std::cout << "\n[!] LISTA VACIA [!]" << std::endl;
			else
				lista.final(); 
			break;
		case 10: //SALIR
			std::cout << "\n\n\tGRACIAS POR USAR NUESTRO SERVICIOS" << std::endl; 
			std::cout << "\tPLANISPHERE - FCC BUAP";
			pause = std::cin.get(); //PAUSE
			break;
		default:
			std::cout << "\n[!] INGRESE UNA OPCION VALIDA [!]" << std::endl;
			break;
		}
		pause = std::cin.get(); //PAUSE
		if (op != 10) {
			std::cout << "\nPULSE ENTER PARA CONTINUAR...";
		pause = std::cin.get(); //PAUSE
			system("cls");
		}
	} while (op != 10); 
	return 0;
}
