//
//  main.cpp
//  terreno
//
//  Created by Dave on 28/07/20.
//  Copyright © 2020 Dave. All rights reserved.
//

#include <iostream>
using namespace std;

class Terreno{
public:
    Terreno(int _ancho,int _largo, int _puerta,char const _nombre[]){
        ancho= _ancho;
        largo = _largo;
        puerta = _puerta;
        strcpy(nombre, _nombre);
    };
    char nombre[15];
    int ancho;
    int largo;
    int puerta;
    int area();
    int perimetro();
    int alambrada(int hilos);
    
};
int Terreno::area(){
    int superficie = ancho * largo;
    return superficie;
}
int Terreno::perimetro(){
    int circunferencia = (ancho + largo) * 2;
    return circunferencia;
}

int Terreno::alambrada(int hilos){
    int cerca = (hilos * (perimetro() - puerta));
    return cerca;
}


int main() {
    
    Terreno lotes[3]= {Terreno(21,77,5, "LLANO"), Terreno(20,20,4, "SAMUEL"), Terreno (11, 18,3, "POZO")};
    
    for(int i = 0; i < 3 ; i++){
        cout<<lotes[i].nombre<< endl;
        cout<<"area: ";
        cout << lotes[i].area()<<endl;
        cout << "perimetro: ";
        cout << lotes[i].perimetro() << endl;
        cout << "alambrada: ";
        cout << lotes[i].alambrada(7)<<endl;
        cout << "puerta : ";
        cout << lotes[i].puerta<<endl;
    }
    return 0;
}
