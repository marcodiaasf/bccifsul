/*5 - Escrever um programa que manipule um vetor vet[10] de n�meros float, representando
as notas de 10 alunos de um turma de algoritmos 1. Ap�s preencher o vetor com todas as
notas o programa dever� exibir:
- Maior e menor nota da turma
- M�dia da turma
- Percentual de alunos Aprovados (nota >= 6.0)
- Percentual de alunos Reprovados (nota < 6.0)*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));//para que os n�meros RANDOMICOS gerados sejam diferentes a cada execu��o.

    int i;
    float maior, menor, ap, soma=0;
    float vet[10];

    for( i=0; i<10; i++)//ta preenchendo o vetor
    {
         vet[i]= (rand() % 101) /10.0;//10.0 para ser numero com virgula
    }
    for(int i=0; i<10;i++)//FUNDAMENTAL USAR INT NESSE
    {
        cout << vet[i] << ", ";//exibindo as notas na sa�da

    }

    for (i=0;i<10;i++)//la�o para realizar as opera��es com o vetor e seus elementos gerados
        {
            if(i == 0)//verificando se � a primeira nota, j� que o vetor 10 inicia no 0 e termina no 9
            {
                maior = vet[i];//inicializando o maior
                menor = vet[i];//inicializando o menor

            }


            if (vet[i] > maior)//comparando as notas para atualizar a variavel com o maior
            {
                maior = vet[i];
            }

            if (vet[i] < menor)//comparando as notas para atualizar a variavel com o menor
            {
                menor = vet[i];
            }
            if(vet[i] >= 6)//se nota maior que 6, aprovados aumenta
            {
                ap++;
            }
        }
        for(i=0; i<10;i++)
        {
            soma+=vet[i];//calcular a soma de todas as notas
        }
 cout << "\nmaior nota: " << maior << "\nmenor nota: " << menor << endl;
 cout << "a media da turma �: " << soma/10 << endl;
 cout << "quantidade de alunos aprovados: " << 10 * ap << "%" << endl;
 cout << "quantidade de alunos reprovados: " << 10 * (10-ap)<< "%" << endl;
}


/*vet[0] = rand() % 100;
// valor no intervalo de 0 a 99
vet[0] = rand() % 100 + 1;
// valor no intervalo de 1 a 100
vet[0] = rand() % 30 + 1985;
// valor no intervalo 1985-2014
vet[3] = rand() % 3 - 1;
// valor no intervalo -1 at� 2 */
