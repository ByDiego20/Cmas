#include<iostream>

int main(){
    //Definicion de variables
    char salir;
    int num[4];
    int cont;
    float suma_numero;
    float media;
    for(cont=0;cont<=3;cont++){
       std::cout<<"Introduzca un numero: ",cont,":";
       std::cin>>num[cont];
     
}
          
//Sacamos los numeros guardados
std::cout<<"Has metido los siguientes numeros\n";
for(cont=0;cont<=3;cont++){
   std::cout<<num[cont];
   std::cout<<"\n";
}

//Calcular la media
std::cout<<"MEDIA\n";
suma_numero=0;
for(cont=0;cont<=3;cont++){
    suma_numero=suma_numero+num[cont];//Suma acumulada
}

std::cout<<"la suma vale: ";
std::cout<<suma_numero;
media=suma_numero/4;
std::cout<<"\n";
std::cout<<"la media vale: ";
std::cout<<media;

//Mostramos la norma en orden inverso
for(cont=3;cont>=0;cont--){
   std::cout<<num[cont];
}



std::cin>>salir;


}


