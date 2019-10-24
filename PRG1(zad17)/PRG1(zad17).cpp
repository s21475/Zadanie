#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int n, k;
	int nn=1, kk=1, nk=1, wynik;
	cout << "Ilu elementowy jest zbior? " << endl;
	cin >> n;
	cout << "Ile elementow ma byc w podzbiorach? " << endl;
	cin >> k;
	for(int i =1;i<=n;i++)
	{
		nn *= i;
	}
	for(int i=1;i<=k;i++)
	{
		kk *= i;
	}
	for (int i = 1; i <=(n-k); i++)
	{
		nk *= i;
	}
	wynik = nn / (kk * nk);
	cout << wynik;

	//Wywołanie gotowe
	
}