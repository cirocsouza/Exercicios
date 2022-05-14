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
	cout<<"Digite o "<<i+1<<" número inteiro: "<<"\n";
	cin>>num[i];	
	}
	cout<<"-------------------------------"<<"\n";
	cout<<"           JOGADOR 2           "<<"\n";
	cout<<"-------------------------------"<<"\n";
	contador=0;
	for(i=0;i<3;i++) //loop do número de tentativas.
	{
		cout<<"Digite o número inteiro para tentativa número "<<i+1<<"\n";
		cin>>x;
		for(j=0;j<=2;j++) // loop para verificação de uma alternativa
		{
			if(num[j]==x)
			{
			cout << "Parabéns! Este número está na posição "<<contador<<" do vetor!\n";
			cout << "Você acertou na sua " << i+1 << " tentativa!"; 
			exit(0);
			}
			contador++;
		}
		cout << "Ainda não foi dessa vez... \n";
	contador=0;
	}
	cout<<"Que pena! Você não acertou...";
}
