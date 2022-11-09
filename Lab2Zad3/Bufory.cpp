#include "Bufor.h"
#include <iostream>

using namespace std;

Bufor::Bufor(int size1) {
	size = size1;
	index = 0;
	tab = new int[size];
	tab[index] = 0;
}
Bufor::Bufor() {
	int n = 10;
	index = 0;
	tab = new int[n];
	tab[index] = 0;
}
Bufor::~Bufor() {
	if (tab) delete[] tab;
}
void Bufor::add(int value) {
	tab[getIndex()] = value;
}
int Bufor::getIndex() {
	for (int i = 0; i < size; i++) {
		if (tab[i] == NULL)
			return i;
	}
}
int Bufor::getSize() {
	return size;
}
int Bufor::getTab(int i) {
	return tab[i];
}
int Bufor::getFirst() {
	return index;
}
void Bufor::setFirst(int value) {
	tab[index] = value;
}
void Bufor::setTab(int pos, int value) {
	tab[pos] = value;
}
void Bufor::show() {
	for (int i = 0; i < size; i++) {
		cout << tab[i];
		cout << endl;
	}
}

MeanBufor::MeanBufor() {
}
MeanBufor::MeanBufor(int size1):Bufor(size1) {
}
MeanBufor::~MeanBufor(){
}
double MeanBufor::calculate() {
	if (getSize() <= 0) {
		return 0;
	}
	int suma = 0;
	int srednia = 0;
	for (int i = 0; i < getSize(); i++) {
		suma = suma + getTab(i);
	}
	srednia = suma / getSize();
	return srednia;
}

MaxBufor::MaxBufor() {
}
MaxBufor::MaxBufor(int size1) :Bufor(size1) {
}
MaxBufor::~MaxBufor() {
}
double MaxBufor::calculate() {
	int max = 0;
	for (int i = 0; i < getSize(); i++) {
		if (getTab(i) > max)
			max = getTab(i);
	}
	return max;
}
void MaxBufor::add(int value) {
	if (getIndex() < getSize()) {
		Bufor::add(value);
	}
	else
		cout << "nie ma miejsca w tablicy";
}

