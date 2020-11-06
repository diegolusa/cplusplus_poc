/**
* Autor: Diego A. Lusa
* Versão: 1.0
* Descrição: Demontrar o uso básico do container vector
**/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector é uma classe container que implementa, na perspectiva da POO, uma coleção de objetos. Na linha abaixo, declaramos uma coleção chamada população para receber valores inteiros
    vector<int> populacao;
    //push_back adiciona novo elemento ao final do vetor
    populacao.push_back(500);
    populacao.push_back(600);
    populacao.push_back(700);
    populacao.push_back(800);
    populacao.push_back(900);

    //a variação do laço for para intervalos pode ser utilizada para percorrer os elementos de vector
    for (auto i : populacao)
        cout << i << endl;

    return 0;
}