#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int k,n;

	S=0;
	n= 1;

	while (n <= 25)
	{
		P = 1;
		k = 1;
		
		while (k<=n)
		{
		
			P *= cos(k+n);
			k++;

		}
		S += cos(n) + P; 
		n++;
	}
	cout << "1)S= " << S << endl;
	
	S = 0;
	n = 1;

	do
	{
		P = 1;
		k = 1;
		
		do
		{
			P *= cos(k + n);
			k++;

		} while (k <= n);
		S += cos(n) + P;
		n++;

	} while (n<= 25);

	cout <<"2)S= "<< S << endl;

	S = 0;
	for (n = 1; n <= 25; n++)
		{
		P = 1;
		for ( k = 1; k <= n; k++)
			{
			P *= cos(k + n);

			}
		S += cos(n) + P;
		}
		cout << "3)S=" << S << endl;


		S = 0;
		for (n = 25; n>=1 ; n--)
		{
			P = 1;
			for (k = n; k >=1; k--)
			{
				P *= cos(k + n);

			}
			S += cos(n) + P;
		}
		cout << "4)S=" << S << endl;

		return 0;

}