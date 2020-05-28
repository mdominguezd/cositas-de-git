# include <iostream>
# include "funciones.h"
# include <typeinfo>

using namespace std;


int main(void){
	
	int Tfinal = 4;
	float paso = 0.1;
	
	int N = Tfinal/paso;
	
	double T[N] ;
	
	for (int i = 0; i < N; i++)
		T[i] = i*paso;
	
	int tamano = sizeof(T)/sizeof(*T); //Para hallar longitud de un arreglo
	
	double * v;
	v = RK4(T, 20, 8.5, tamano);
	
	cout << *(v + 35)<< endl << endl;
	cout << *(v + 36)<< endl << endl;
	cout << *(v + 37)<< endl << endl;
	cout << *(v + 38)<< endl << endl;	
	
	return 0;
}


