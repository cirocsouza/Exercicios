#include<iostream>
#include<locale>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int num[10], i, x, qtd, j, contador;
	cout<<"-------------------------------"<<"\n";
	cout<<"          JOGADOR 1            "<<"\n";
	cout<<"-------------------------------"<<"\n";
	for(i=0;i<10;i+=1)
	{
	cout<<"Digite o "<<i+1<<" n�mero inteiro: "<<"\n";
	cin>>num[i];	
	}
	cout<<"-------------------------------"<<"\n";
	cout<<"           JOGADOR 2           "<<"\n";
	cout<<"-------------------------------"<<"\n";
	contador=0;
	for(i=0;i<3;i++) //loop do n�mero de tentativas.
	{
		cout<<"Digite o n�mero inteiro para tentativa n�mero "<<i+1<<"\n";
		cin>>x;
		for(j=0;j<=2;j++) // loop para verifica��o de uma alternativa
		{
			if(num[j]==x)
			{
			cout << "Parab�ns! Este n�mero est� na posi��o "<<contador<<" do vetor!\n";
			cout << "Voc� acertou na sua " << i+1 << " tentativa!"; 
			exit(0);
			}
			contador++;
		}
		cout << "Ainda n�o foi dessa vez... \n";
	contador=0;
	}
	cout<<"Que pena! Voc� n�o acertou...";
}
