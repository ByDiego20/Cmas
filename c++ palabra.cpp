#include<iostream>
/*un programa que lea una palabra y se devuelva la inicial*/

int main(){
    char palabra[10];
    char salir;
    int cont;
    
    std::cout<<"Dime tu nombre: ";
    std::cin>> palabra;
    std::cout<<"\n te llamas ";
    
    std::cout<<"\n la primera letra de tu nombre es la: ";
    std::cout<<palabra[0];
    std::cout<<"\n Animadora: \n";
    
    for(cont=0;cont<=9;cont++){
       std::cout<<palabra[cont];
       std::cout<<"\n";
    }

std::cout<<palabra;
std::cin>>salir;

}
