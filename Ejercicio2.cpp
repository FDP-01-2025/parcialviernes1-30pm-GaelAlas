#include <iostream>
using namespace std;

int main(){
int num=0;

    for(int i=1; i<=100; i++){
        num=i;
        
        if(num%3==0){
        cout<<"El numero: "<<i<<" es divisible por 3"<<endl;
        }
        else if(num%5==0){
        cout<<"El numero: "<<i<<" es divisible por 5"<<endl;
        }
      

    }



    return 0;
}