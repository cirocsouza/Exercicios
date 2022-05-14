#include<iostream>
#include<locale>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int numImpar, num[20], i, cont1, cont2, cont3;
	numImpar = 0;
	cont1=0;
	cont2=0;
	cont3=0;
	cout << "Face do dado" << "\t" << "Resto da divisão por 2 \n";
	for(i=0;i<20;i++) //Loop lançamento de dados 20x
	{
		unsigned seed = time(0)+i;
    	srand(seed);
    	num[i]=1 + rand()%6;
		cout << num[i] << "     \t     " << num[i]%2 <<"\n"; // teste para saber se é impar ou par.
		if(num[i]%2!=0)
		{
			numImpar++;
		}
		if(num[i]==1)
		{
			cont1++;
		}
		if(num[i]==3)
		{
			cont2++;
		}
		if(num[i]==5)
		{
			cont3++;
		}
	}
	cout <<"A face 1 saiu "<< cont1 << " vezes \n";
	cout <<"A face 3 saiu "<< cont2 << " vezes \n";
	cout <<"A face 5 saiu "<< cont3 << " vezes \n";
	cout << "A quantidade de lançamentos ímpares é = " << numImpar;
}
