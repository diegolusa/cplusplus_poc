#include "lib_02.h"
#include <iostream>

int pares::contaPares(int valores[], int tam){
    int conta_pares=0;
    for(int i=0;i<tam;i++)
        if(*(valores + i)%2==0)
            conta_pares++;
    return conta_pares;

}

void pares::digaOi(){
    std::cout <<"diga oi da Lib 02"<<std::endl;
}

int pares::contaImpares(int valores[], int tam){
     int pares = pares::contaPares(valores, tam);
     return tam - pares;
}