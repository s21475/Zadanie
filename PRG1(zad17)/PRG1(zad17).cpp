#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int x, k;
	int xx=1, kk=1, nk=1, wynik;
	cout << "Ilu elementowy jest zbior? " << endl;
	cin >> x;
	cout << "Ile elementow ma byc w podzbiorach? " << endl;
	cin >> k;
	for(int i =1;i<=n;i++)
	{
		xx *= i;
	}
	
	
	
	//Druga silnia działa poprawnie
	for(int i=1;i<=k;i++)
	{
		kk *= i;
	}
	for (int i = 1; i <=(n-k); i++)
	{
		nk *= i;
	}
	wynik = xx / (kk * nk);
	cout << wynik;


	
}



	cout <<"Program działa poprawnie. Ale jest nic nie wart!"


	//Wywołanie gotowe

}

