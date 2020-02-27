#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int devuelve_longitud(char aux[]){
    int cont=0;
    int longitud=0;
    while(aux[cont]!='\0'){
         longitud++;
         cont++;
}
return (longitud);
}

    
int main(){
    char *palabras[4];
    int cont;
    char aux[20];
    char salir;
    int longitud;
    int veces;
    char *p_aux;
    //Leo cuatro palabras
    for(cont=0;cont<4;cont++){
    std::cout<<"palabra: ";
    std::cin>>aux;
    longitud=devuelve_longitud(aux);
    //palabra[cont]= (char*)malloc(longitud*sizeof(char)));//Reserva
}
std::cout<<"\n Lista de palabras\n";
for(cont=0;cont<4;cont++){
   printf("*%s\n",palabras[cont]);
    
}
//Ordenamos por el metodo de la burbuja
for(veces=1;veces<4;veces++){
   for(cont=0;cont<4;cont++){
      if(strcmp(palabras[cont],palabras[cont+1])<0){
        p_aux=palabras[cont];
        palabras[cont]=palabras[cont+1];
        palabras[cont+1]=p_aux;
        }
        }
}
    std::cin>>salir;
}
    
