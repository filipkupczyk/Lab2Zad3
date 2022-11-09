#ifndef BUFOR_H_INCLUDED
#define BUFOR_H_INCLUDED
#include <iostream>

using namespace std;

class Bufor {
	private:
		int* tab;
		int size;
		int index;
	public:
		Bufor();
		Bufor(int size1);
		virtual ~Bufor();
		virtual void add(int value);
		virtual double calculate() = 0;
		int getIndex();
		int getSize();
		int getTab(int i);
		int getFirst();
		void setFirst(int value);
		void setTab(int pos, int value);
		void show();
};

class MeanBufor : public Bufor {
	public:
		MeanBufor();
		MeanBufor(int size1);
		virtual ~MeanBufor();
		virtual double calculate() override;
};

class MaxBufor : public Bufor {
	public:
		MaxBufor();
		MaxBufor(int size1);
		virtual ~MaxBufor();
		virtual double calculate() override;
		virtual void add(int value) override;

};
#endif
