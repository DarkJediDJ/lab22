#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class line
{
protected:
	int L;
public:
	line(int L5) 
	{
		L = L5;
	}
	void show() {
		cout << L << endl;
	}
};

class rectangle : public line
{
protected:
	int L2;
public:
	rectangle( int L4, int L5) : line(L5)
	{
		L2 = L4;
	}
	void show1(){
		show();
		cout << L2 << endl;
	}
	int perimeter() {
		return 2 * (L + L2);
	}
	int square() {
		return L * L2;
	}
};

class triangle : public rectangle {
protected:
	int L3;
public: 
	triangle(int L4, int L5, int L6) : rectangle(L5, L6)
	{
		L3 = L4;
	}
	void show2() {
		show1();
		cout << L3 << endl;
	}
};