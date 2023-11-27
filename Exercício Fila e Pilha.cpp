#include <iostream>
#include <string.h>
using namespace std;

struct insere
{
    char nome[40];
    char cidade[20];
    char endereco[40];
    insere *ant;
    insere *pro;
};
typedef insere *ponteiro;

void exibefila(ponteiro primeiro)
{
    ponteiro aux;
    aux = primeiro;
    while (aux != NULL)
    {
        cout << "\n";
        cout << aux->nome;
        cout << "\n";
        cout << aux->cidade;
        cout << "\n";
        cout << aux->endereco;
        aux = aux->pro;
        cout << "\n";
    }
}

void exibepilha(ponteiro ultimo)
{
    ponteiro aux;
    aux = ultimo;
    while (aux != NULL)
    {
        cout << "\n";
        cout << aux->nome;
        cout << "\n";
        cout << aux->cidade;
        cout << "\n";
        cout << aux->endereco;
        aux = aux->ant;
        cout << "\n";
    }
}

int main()
{
    ponteiro iniciofila, insereanterior, auxiliarinsere, ult;
    char opc;
    char cliente[40];
    char city[20];
    char end[40];
    char resp = 'S';
    iniciofila = NULL;
    insereanterior = NULL;
    ult = NULL;
    auxiliarinsere = NULL;
    cout << "\nEscolha F para fila ou P para pilha: \n";
    cin >> opc;
    while (toupper(resp == 'S'))
    {
        cout << "\nInforme o nome: \n";
        cin >> cliente;
        fflush(stdin);
        cout << "\nInforme a cidade: \n";
        cin >> city;
        fflush(stdin);
        cout << "\nInforme o endereco: \n";
        cin >> end;
        if (toupper(opc == 'F'))
        {
            auxiliarinsere = new insere;
            strcpy(auxiliarinsere->nome, cliente);
            strcpy(auxiliarinsere->cidade, city);
            strcpy(auxiliarinsere->endereco, end);
            auxiliarinsere->pro = NULL;
            if (iniciofila == NULL)
            {
                iniciofila = auxiliarinsere;
            }
            else
            {
                insereanterior->pro = auxiliarinsere;
            }
            insereanterior = auxiliarinsere;
        }
        else if (toupper(opc == 'P'))
        {
            auxiliarinsere = new insere;
            strcpy(auxiliarinsere->nome, cliente);
            strcpy(auxiliarinsere->cidade, city);
            strcpy(auxiliarinsere->endereco, end);
            auxiliarinsere->ant = NULL;
            if (ult != NULL)
            {
                auxiliarinsere->ant = ult;
            }
            ult = auxiliarinsere;
        }
        cout << "Informe S para continuar \n ";
        fflush(stdin);
        cin >> resp;
    }
    auxiliarinsere = ult;
    exibefila(iniciofila);
    exibepilha(ult);
    system("pause");
}