#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

/* Faça um algoritmo para desenhar um triângulo retângulo na tela. Onde deve ser informado a
altura (indicando o número de caracteres nos lados do triângulo) e exibir o triângulo na tela, usando o
caractere '*'. A altura mínima é 3 e a máxima é de 20.
Exemplo: altura = 6 */

main()
{
    setlocale(LC_ALL,"portuguese");

    int n, l, c;

    cout << "insira um numero entre 3 e 20: ";
    cin >> n;

    if((n >= 3) || (n <= 20))
    {
    for(l = 0; l < n; l++)
    {
        for(c = 0; c <= l; c++)
        {
            cout << "*\t";
        }
        cout << "\n";
    }
    }
    else
    {
        cout << "valor invalido tente novamente :(";
        return(0);
    }
}
