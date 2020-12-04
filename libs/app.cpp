#include <iostream>
#include "lib_01.h"
#include "lib_02.h"
#include <stdlib.h>

using namespace std;
using namespace lib01;
using namespace pares;


int main(int argc, char* argv[]){

     int vet[argc-1];

     for(int i=1; i<argc; i++){
         //cout << argv[i] << endl;
         vet[i]=atoi(argv[i]);
     }
     cout <<"Pares: " << contaPares(vet,argc-1) <<endl;
     cout <<"Ímpares: "<< contaImpares(vet,argc-1) <<endl;


}