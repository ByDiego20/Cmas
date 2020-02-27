#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int main(){
    
    struct Amigo{
           int n_amigo;
           float dinero;
           };
    typedef struct{
            char nombre[20];
            int edad; 
            char email[20];
} DatosPersona;
char salir;
DatosPersona alumno1; 
DatosPersona *p_aux;
p_aux =&alumno1;
std::cout<<"Dime tu nombre: ";
std::cin>>alumno1.nombre;
std::cout<<"\n Hola wey, te llamas" <<alumno1.nombre;

p_aux=(DatosPersona *) malloc(20* sizeof (DatosPersona));



Amigo pepito;//Guardo memoria

std::cout<<"dime tu numero pepito: ";
std::cin<<pepito.n_amigo;
std::cout<<"Dime cuanto dinero tienes: ";
std::cin<<pepito.dinero;
}

// Recupero los datos 

std::cout<<"YO tengo un amigo que se llama pepito";
std::cout<<"\npepito es mi amigo nº" <<epepito.n_amigo;
std::cout<<"\ny tiene " <<pepito.dinero<<"euros.";

}

std::cin>>salir;
}




int main(){
    
    struct Amigo{
           int n_amigo;
           float dinero;
           };
    typedef struct{
            char nombre[20];
            int edad; 
            char email[20];
} DatosPersona;
DatosPersona alumno[3];
int cont; 
//DatosPersona *p_aux;
//p_aux =&alumno1;
std::cout<<"Dime tu nombre: ";
std::cin>>alumno[cont]. nombre;
}
std::cout<<"\n Hola wey, te llamas" <<alumno1.nombre;

p_aux=(DatosPersona *) malloc(20* sizeof (DatosPersona));

