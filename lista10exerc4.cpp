/*Escreva um programa que manipule um vetor de inteiros de 10 posi��es, o vetor dever�
ser preenchido de forma pseudo-aleat�ria com valores entre 30 e 55, mostrar o vetor
gerado na tela, realizar a troca dos valores no vetor de tal forma que o primeiro passa a ser
o �ltimo, o segundo o pen�ltimo e assim sucessivamente. Mostre o vetor na tela ap�s as
trocas.*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"portuguese");

    int vet[10],aux,i;


    for(int i=0; i<10;i++)
    {
        vet[i]=rand() % 26 + 30;
    }

    for(int i=0; i<10;i++)
    {
        cout << vet[i] << ", ";
    }


    for(int i=0; i<5; i++)
    {
        aux=vet[i];
        vet[i]=vet[9-i];
        vet[9-i]=aux;

    }

    cout << endl;

    for(int i=0; i<10;i++)
    {
        cout << vet[i] << ", ";
    }

}
