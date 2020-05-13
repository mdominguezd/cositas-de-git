#include <iostream>
using namespace std;

int factorial(int F) {
    
    int k = 1;
    int f = 1;
    
    while(k < F){
        
        k++;
        
        f = f*k;
    }

    return f;
}

int main() {
    
    cout << "Dame el numero del que quieres saber el factorial" << endl;
    
    int numero;
    
    cin >> numero;
    
    int f;
    
    f = factorial(numero);
        
    cout << "El factorial de " << numero << " es: " << f << endl;
    
}


