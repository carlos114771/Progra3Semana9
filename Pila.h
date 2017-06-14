#ifndef PILA_H
#define PILA_H
#include <vector>
using namespace std;
template <class T>
class Pila{
	private:
		vector<T>datos;
	public:
		void push(T);
		T pop();
		T top();

};

#endif