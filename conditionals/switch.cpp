/**
* Autor: Diego A. Lusa
* Versão: 1.0
* Descrição: Demontrar o uso do comando switch
**/

#include <iostream>

using namespace std;

int main()
{
    int pontuacao;

    if (cin >> pontuacao)
    {
        switch (pontuacao)
        {
        case 1 ... 20:
            cout << "Insuficiente" << endl;
            break;
        case 21 ... 40:
            cout << "Regular" << endl;
            break;
        case 41 ... 60:
            cout << "Satisfatório" << endl;

        case 61 ... 100:
            cout << "Excelente" << endl;
            break;
        default:
            cout << "Intervalo inválido" << endl;
            break;
        }
    }
}