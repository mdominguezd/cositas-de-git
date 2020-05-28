# include <iostream>
# include <typeinfo>
# include <fstream>

using namespace std;

// Funci[on
double dvdt(double t, double v){
        double g = 9.81;

        return -g;
}

// Funcion para calcular el valor de z a lo largo del tiempo
double dzdt(double t, double z, double v){
        return v;
}

int RK4(double t[], double v_0, double z_0, int size){

        int len_t = size ;

        double h = t[1] - t[0];

        cout << "El tamaño del vector t es: " << len_t <<endl << "El tamaño de paso es: " << h << endl;

        double V[len_t];

        V[0] = v_0;

        double Z[len_t];

        Z[0] = z_0;

        for (int i = 0; i < len_t-1; i++){

                // Valores k de runge-kutta para velocidad
                double k1 = dvdt(t[i], V[i]);
                double k2 = dvdt(t[i] + 0.5*h, V[i] + 0.5*k1*h);
                double k3 = dvdt(t[i] + 0.5*h, V[i] + 0.5*k2*h);
                double k4 = dvdt(t[i] + h, V[i] + k3*h);

                // Nuevo valor de velocidad
                V[i+1] = V[i] + ((k1+2*k2+2*k3+k4)*h)/6;
//              cout << "V[" << i << "]" << V[i] << endl;

                // Valores k de runge-kutta para posicion
                double k1z = dzdt(t[i], Z[i], V[i]);
                double k2z = dzdt(t[i] + 0.5*h, Z[i] + 0.5*k1z*h, V[i]);
                double k3z = dzdt(t[i] + 0.5*h, Z[i] + 0.5*k2z*h, V[i]);
                double k4z = dzdt(t[i] + h, Z[i] + k3z*h, V[i]);

                // Nuevo valor de posicion
                Z[i+1] = Z[i] + ((k1z+2*k2z+2*k3z+k4z)*h)/6;
//              cout << "Z[" << i << "]"<< Z[i] <<endl<<endl;

        }

        double val = 0;
        double valZ = 0;
        double valT = 0;
        
        ofstream myfile("datos.txt");
    
        for (int i =0; i<len_t; i++) {
                val = V[i];
                valZ = Z[i];
                valT = t[i];
                myfile << valT << ',' << val << ',' << valZ << endl;
        }


        return 0;
}