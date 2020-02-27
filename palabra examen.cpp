#include<iostream>
#include<stdio.h>
#include<stdlib.h>

//Apartado  a) del examen
 int devuelve_longitud(char aux[]){;
        int cont=0;
        int longitud=0;
        while(aux[cont]!='\0'){
             longitud++;
             cont++; 
}
return (longitud);
}


int main(){ 
    char *palabras[5];
    int cont;
    int longitud;
    char aux[20];
    int veces;
    char *p_aux;
    char salir;
   
   //Leo cinco palabras
    for(cont=0;cont<5;cont++){
    std::cout<<"palabra: ";
    std::cin>>aux;
    longitud=devuelve_longitud(aux);
}
    
    //Apartado b) del examen
    //Orden de las palabras
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
    
