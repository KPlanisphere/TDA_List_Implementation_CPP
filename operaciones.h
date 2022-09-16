#pragma once
#include<iostream>
#include<stdlib.h>
#include <string>
#include <stdio.h>

#define maxim 5 //LIMITE
#define primer 0 //PRIMER ELEMENTO
extern int ultimo; //ULTIMO

class TDA {
private:  //atributos de la lista
	int lista[maxim];
public:  
	TDA();
	bool emptyList();
	bool fullList();
	void addLast(int x);
	void addFirst(int x);
	void deleteFinal();
	void deleteFirst();
	void print();
	void searchEle(int x);
	void final();
	void first();
};