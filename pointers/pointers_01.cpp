#include <iostream>

using namespace std;

int main(){

    int tam_amostra, op;
    int* amostra = nullptr;

    while (true)
    {
        cout <<"Opção: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout <<"Tamanho: ";


            cin >> tam_amostra;
            
            if (amostra!= nullptr)
                delete amostra;
                
            amostra = new int[tam_amostra];
            for(int i=0;i<tam_amostra;i++){
               cout <<"Valor: ";
               cin>> amostra[i];


            }

            break;
        

        case 2:
            for(int i=0;i<tam_amostra;i++)
                cout <<amostra[i] <<endl;

            break;
            
        default:
            break;
        }
    }
    



}