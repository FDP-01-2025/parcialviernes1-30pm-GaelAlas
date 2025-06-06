#include <iostream>
using namespace std;

int main(){
    int sueldo=0;
    float impuesto=0, totalPagar=0;

    cout<<"-- Ingrese su sueldo --"<<endl;
    cin>>sueldo;

        //Condicion para que no se ingrese un valor menor a 0
    if(sueldo<0){
        cout<<"Ingrese una cantidad valida"<<endl;
    }
    else{
        //Verificando el rango en que se encuentra
        if(sueldo>2000){
            impuesto=0.15;
            totalPagar=(sueldo*impuesto);
            cout<<"La cantidad a pagar es de : $"<<totalPagar<<endl;
        } else{
            impuesto=0.10;
            totalPagar=(sueldo*impuesto);
            cout<<"La cantidad a pagar es de : $"<<totalPagar<<endl;
        }
    }



    return 0;
}