/**
* Autor: Diego A. Lusa
* Versão: 1.0
* Descrição: Demontrar o uso básico de structs
**/

#include <iostream>
#include <limits>

//definir constantes como diretiva de pré-compilação torna o código mais fácil de manter
#define NR_SMARTPHONES 3

using namespace std;

//comando abaixo especifica a estrutura do novo tipo de dado chamado TSmartPhone
struct TSmartPhone
{
    float preco = 0, peso = 0, tamanhoTela = 0; //podemos definir os campos com valores de inicialização
    string marca, modelo, cor;
    int memoriaRam = 0, memoriaInterna = 0;
};

int main()
{
    //utilizamos o novo tipo para declarar variáveis e parâmetros, inclusive na forma de arrays
    TSmartPhone sps[NR_SMARTPHONES], sp1;

    for (int i = 0; i < NR_SMARTPHONES; i++)
    {
        cout << " Informe os dados do smartphone " << i + 1 << endl;

        cout << "Preço: ";
        //observe que após o operador de indexação utilizamos . (ponto) para especificar o campo que irá receber o valor
        cin >> sps[i].preco;

        cout << "Peso: ";
        cin >> sps[i].peso;

        //limpeza do fluxo do cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Marca: ";
        getline(cin, sps[i].marca);

        cout << "Quantidade memória interna: ";
        cin >> sps[i].memoriaInterna;
    }

    //podemos atribuir valores a campos específicos
    sp1.preco = 1200.00;
    //e podemos atribuir a estrutura na íntegra, quando as variáveis compartilham do mesmo tipo
    sps[0] = sp1;

    //é possível obter o tamanho do vetor dividindo seu tamanho total pelo tamanho de uma unidade
    for (int i = 0; i < sizeof(sps) / sizeof(TSmartPhone); i++)
        cout << "Peso: " << sps[i].peso << " Quantidade memória interna: "
             << sps[i].memoriaInterna << endl;
}