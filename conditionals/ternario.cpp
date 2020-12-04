/**
* Autor: Diego A. Lusa
* Versão: 1.0
* Descrição: Demontrar o uso do operador ternário
**/

#include <iostream>

using namespace std;

int main()
{
    int x, y = 5;
    x = y % 2 == 0 ? y * 3 + 5 : y % 5 == 0 ? y * 5 : y - 2;
    cout << x << endl;
}