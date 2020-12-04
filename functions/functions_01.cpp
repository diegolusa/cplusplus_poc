#include <iostream>
#include <stdexcept>

using namespace std;

/*
    retor um valor inteiro lido do console dentro do intervalo especificado pelo valor mínimo e máximo informados nos parâmetros
*/
int lerValorInteiro(int valorMinimo, int valorMaximo)
{

    if (valorMinimo > valorMaximo)
        throw invalid_argument("Valor mínimo superior ao valor máximo");

    int x;
    cout << "Informe valor inteiro entre " << valorMinimo << " e "
         << valorMaximo << ": " << endl;
    do
    {
        cout << "-> ";
        cin >> x;
    } while (x < valorMinimo || x > valorMaximo);

    return x;
}

int main()
{
    int a, b, c;

    b = lerValorInteiro(1, 10);
    c = lerValorInteiro(2, 5);
    a = lerValorInteiro(89, 5);
}