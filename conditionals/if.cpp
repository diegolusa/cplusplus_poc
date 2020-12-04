/**
* Autor: Diego A. Lusa
* Versão: 1.0
* Descrição: Demontrar o uso do comando if/ese
**/

#include <iostream>
using namespace std;

int main()
{
    int x = 3, y = 9;

    if ((x * y) > 30)
    {
        x += 3;
        y -= 30;
    }
    else
        x += 20;
    y -= 10;

    cout << (x + y) << endl;
}