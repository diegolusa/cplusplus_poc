#include <iostream>

using namespace std;

struct numero
{
    int num;
    bool contabilizado = false;
};

struct conta
{
    int num = 0;
    int contagem = 0;
};

int main()
{
    int tam = 0;

    cout << "Digite o tamanho do vetor:";
    cin >> tam;

    numero val[tam];
    conta contagem[tam];

    for (int i = 0; i < tam; i++)
    {
        cout << "Digite o valor para cada vetor:";
        cin >> val[i].num;
    }

    //contagem
    int cont_conta = 0;
    for (int i = 0; i < tam; i++)
    {

        if (!val[i].contabilizado)
        {
            contagem[cont_conta].num = val[i].num;
            contagem[cont_conta].contagem++;
            val[i].contabilizado = true;

            for (int j = 0; j < tam; j++)
            {
                if (j != i && val[i].num == val[j].num)
                {
                    val[j].contabilizado = true;
                    contagem[cont_conta].contagem++;
                }
            }
            cont_conta++;
        }
    }
    cout << " ---------------------------------------" << endl;
    cout << "RELACAO DE VALORES E QUANTIDADES:" << endl;
    for (int i = 0; i < cont_conta; i++)
    {
        cout << "NR: " << contagem[i].num << " = " << contagem[i].contagem << endl;
    }

    return 0;
}
