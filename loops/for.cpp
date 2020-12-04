/**
* Autor: Diego A. Lusa
* Versão: 1.0
* Descrição: Demonstração de uso do laço for
**/

#include <iostream>

using namespace std;

int main()
{
    int f = 0;
    for (int i = 4, j = -2, l = 6; l > j && i < l; i += 2, l++, j--)
        f += i + j + l;
    cout << f;
}