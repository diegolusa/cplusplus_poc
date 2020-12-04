#include <iostream>

using namespace std;

int somaValor(int x, int y)
{
    return x + y;
}

int multiplicaValor(int x, int y)
{
    return x * y;
}

int divideValor(int x, int y)
{
    return x / y;
}

void processaVetor(int vetor[], int tam, int (*op)(int, int))
{

    for (int i = 0; i < tam; i++)
    {
        vetor[i] = op(vetor[i], 3);
    }
}

int main()
{
    int vet[] = {1, 2, 3, 4, 5};

    int (*op)(int, int);//pointer to function

    op = divideValor;

    processaVetor(vet, sizeof(vet) / sizeof(int), op);

    for (int i = 0; i < sizeof(vet) / sizeof(int); i++)
    {
        cout << vet[i] << endl;
    }
}
