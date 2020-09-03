#include <iostream>
#include <math.h>


using namespace std;
float Division(int n1, int n2) {
    float resultado = 0;
    resultado = n1 /n2;
    return resultado;
}
float Multipliacion(int n1, int n2) {
    float resultado = 0;
    resultado = n1 * n2;
    return resultado;
}
float Elevacion(int n1,int n2){
    float resultado;
    resultado = pow(n1, n2);
    return resultado;
}
float Raiz(int n1,int  n2)
{
    float resultado;
    resultado = pow(n1, 1 / n2);
    return resultado;
}
int main(){
    int seleccion=0;
    do {
        do {
           cout << "ingrese uno de los valores 1.suma 2.Resta 3.Multiplicacion  4.elevacion 5.raiz 6.division 7.salir" << endl;
           cin >> seleccion;
        } while (seleccion > 7 && seleccion < 1);
        if (seleccion == 1)
        {

        }
        else if (seleccion == 2)
        {
            
        }
        else if (seleccion == 3)
        {
            int n1, n2;
            cout << "ingrese el primer valor" << endl;
            cin >> n1;
            cout << "ingrese el segundo valor" << endl;
            cin >> n2;
            cout <<"el resultado de la multipliacion entre "<<n1<<" y "<<n2<<" es "<< Multipliacion(n1, n2)<<endl;
        }
        else if (seleccion == 4)
        {
            int n1, n2;
            cout << "ingrese el  valor" << endl;
            cin >> n1;
            cout << "ingrese el valor al que sera elevado" <<n1<< endl;
            cin >> n2;
            cout << n1 << " elevado a " << n2 << "es igual a" <<Elevacion(n1,n2)<< endl;


        }
        else if (seleccion == 5)
        {
            int n1, n2;
            cout << "ingrese el  valor" << endl;
            cin >> n1;
            cout << "ingrese el valor de la raiz" << n1 << endl;
            cin >> n2;
            cout<<"la raiz " << n2 << "de" << n1 << "es igual a" << Raiz(n1, n2) << endl;
        }
        else if (seleccion == 6)
        {
            int n1, n2
            cout << "ingrese el primer valor" << endl;
            cin >> n1;
            cout << "ingrese el segundo valor" << endl;
            cin >> n2;
            cout << n1 << "divido" << n2 << "es igual a " << Division(n1, n2) << endl;
        }
    } while(seleccion==7);
       
      
    return 0;