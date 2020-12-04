/**
* Autor: Diego A. Lusa
* Versão: 1.0
* Descrição: Contar as ocorrências de números informados pelo usuário
**/


#include <iostream>


using namespace std;

struct TNumero
{
    int numero;
    bool contabilizado = false;//flag que indica se o número foi contabilizado
};

struct TContagem
{
    int numero = 0;
    int contagem = 0;
};

int main()
{
    int tam_vet;

    cout << "Informe a quantidade de valores: ";
    cin >> tam_vet;
    
    TNumero valores[tam_vet];
    TContagem contagem[tam_vet];//provável desperdício de memória

    for (int i = 0; i < tam_vet; i++)
    {
        cout << "Posição[" << i << "]: ";
        cin >> valores[i].numero;
    }

    //controla o índice de números e suas respectivas contagens
    int controla_contagem = 0;

    for (int i = 0; i < tam_vet; i++)
    {
        //se ainda não foi contabilizado    
        if (!valores[i].contabilizado)
        {
            //é um número a ser contado
            contagem[controla_contagem].numero = valores[i].numero;
            contagem[controla_contagem].contagem++;//já temos 1 ocorrência dele
            valores[i].contabilizado = true;//essa posição não precisar contabilizada novamente

            //percorremos o vetor novamente
            for (int j = 0; j < tam_vet; j++)
            {
                //se o valor for igual, mas em outra posição
                if (j != i && valores[i].numero == valores[j].numero )
                {
                    valores[j].contabilizado = true;//essa posição não precisar contabilizada novamente
                    contagem[controla_contagem].contagem++;//contamos a nova ocorrência
                }
            }
            controla_contagem++;
        }
    }

    for (int i = 0; i < controla_contagem; i++){
        cout << contagem[i].numero <<" - " << contagem[i].contagem << endl;
    }

}