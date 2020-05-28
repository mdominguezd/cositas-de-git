# include <iostream>
# include "funciones.h"
# include <typeinfo>
# include <fstream>

using namespace std;


int main(void){
	
	double Tfinal = 4.48;
	float paso = 0.01;
	
	int N = Tfinal/paso;
	
	double T[N] ;
	
	for (int i = 0; i < N; i++)
		T[i] = i*paso;
	
	int tamano = sizeof(T)/sizeof(*T); //Para hallar longitud de un arreglo
	
	int ans;
	
	ans = RK4(T, 20, 8.5, tamano);
	
	return 0;
}


