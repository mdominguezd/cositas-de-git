# include <iostream>
# include <fstream>
# include <math.h>

using namespace std;



int main(void){
	int a;
	float x;
	double y;
	
	// Arreglo estático
	float z1[10]; //32b o 4 bytes
	float z2[] = {0,1,2,3,4,5,6}; // definicion por asignacion
	
	for (int a = 0; a < 10; a++)
		z1[a] = (float) 2*a;
		
	for (int a = 1; a < 10; a=a+2)
		cout<<"Z1["<<a<<"]: "<<z1[a]<<endl;
		
	int j = 10;
	cout << "La variable j = " << j << " y se encuentra en " << &j << endl;
	
	// Apuntadores (Se guara la direccion de memoria de j)
	int *k;
	k = &j;
	cout<<"j se encuentra en "<<k<<endl;
	
	// de-referenciacion
	cout<<"5*j="<<(5*(*k))<<endl;
	
	// Algo para enredarse
	cout<<"?? Que hay al lado de j? ="<<*(k+2)<<endl;
	cout<<"?? Que hay al lado de j? ="<<*(k-2)<<endl;
	
	cout<<"Z1 y Z2 son apuntadores"<<endl;
	cout<<z1<<endl;
	cout<<z2<<endl;
	
	cout<<"Que hay en Z1[0]"<<*z1<<endl;
	cout<<"Que hay en Z1[3]"<<*(z1+3)<<endl;
	cout<<"Que hay en Z1[10]"<<*(z1+10)<<endl;
	cout<<"Que hay en Z1[11]"<<*(z1+11)<<endl;
//	cout<<"Que hay en Z1[12]"<<*(z1+12)<<endl;
	cout<<"Que hay en Z1[13]"<<*(z1+13)<<endl;
	
	// Vamos a interactuar con el usuario
//	cout<<"Escriba un numero para creacion del vector"; cin>>j;
	
	
	// Asignacion dinamica
	// Crear apuntador
	float *z; 
	// Crear memoria y asignarle la referencia del apuntador
	z = new float(j); // Lo crea en el HEAP, 
	cout<<"La referencia de Z es:"<<z<<endl;
	cout << "Que hay en Z[0]"<<z[0]<<endl;
//	Se debe borrar la memria
	delete z; z = NULL;
	cout<<"La referencia de z es:"<<z<<endl;
	cout << "Que hay en Z[0]"<<z[0]<<endl;
	
	double arr[] = {1,1.232412,3,4,412,2.421,415.1,1,1,1};
	
	cout << "-->"<< sizeof(arr)/sizeof(arr[0])<<endl;
	
	cout << "H" << arr[1]-arr[0] << endl;
	
	return 0;
}

