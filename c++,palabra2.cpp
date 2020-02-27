#include<iostream>
/*un programa que lea una palabra y se devuelva la inicial*/

int main(){
    char palabra[20];
    char salir;
    int cont;
    int longitud=0;//inicio la variable
    
    std::cout<<"Dime tu nombre: ";
    std::cin>> palabra;
    std::cout<<"\n te llamas ";
    //Dirty trick
    /*
    for(cont=0);palabra(cont¡='\0';cont++)}
        longitud++;
}
*/
    while(palabra[cont]¡='\0'){
    std::cout<<"\n la primera letra de tu nombre es la: ";
    std::cout<<palabra[0];
    std::cout<<"\n Animadora: \n";
    
    for(cont=0;cont<=19;cont++){
       std::cout<<palabra[cont];
       std::cout<<"\n";
    }
    //contamos cuantas letras tiene un lindo nombre
    for(cont=0;cont<=19;cont++){
       if(palabra[cont]¡='\0'){
       longitud=longitud+1;
       }
}
std::cout<<"El nombre de: ";
std::cout<<palabra;
std::cout<<"tiene";
std::cout<<longitud;
std::cout<<"letras";



std::cout<<palabra;
std::cin>>salir;

}


