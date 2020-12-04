/**
* Autor: Diego A. Lusa
* Versão: 1.0
* Descrição: Demontrar o uso de laços aninhados
**/

#include <iostream>
#include <limits>

#define ROWS 3
#define COLS 3

using namespace std;

int main()
{
    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            while (true)
            {
                cout << "[" << i << "," << j << "]: ";
                cin >> matrix[i][j];
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                break;
            }
}