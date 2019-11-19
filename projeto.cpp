#include <iostream>
#include<string.h>
using namespace std;


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
    int i=0;
    int j=0;
    while(i<texto.length())
    {
        if(letra==texto[i])
        {
            j++;
        }
        i++;
    }
    return j;
    /*feito*/
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
	int i;
	for(i=0;i<texto.length(); i++)
	{
		if(letra1==texto[i])
		{
			letra2=letra1;
		}
	}
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
    int i=0;
    int j=0;
    while(i<texto.length())
    {
        if(palavra==texto[i])
        {
            j++;
        }
        i++;
    }
    return j;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
	int i;
	for(i=0;i<texto.length(); i++)
	{
		if(palavra1==texto[i])
		{
			palavra2=palavra1;
		}
	}
	
}

int main(){

	string texto, palavra2;
	char letra2;
	cout << "Entre com o texto para fazer o teste:";
	getline(cin, texto);
	cout<<"Quantidade de letras: "<<contaLetras;
	cout<<"Quantidade de palavras: "<<contaPalavras;
	cout<<"substituir palavra: ";
	cin>>palavra2;
	cout<<substituirPalavra;
	cout<<"substituir letra: ";
	cin>>letra2;
	cout<<substituirLetra;



	return 0;
}
