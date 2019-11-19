#include <iostream>


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
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
}

int main(){

	cout << "Entre com o texto para fazer o teste:";




	return 0;
}
