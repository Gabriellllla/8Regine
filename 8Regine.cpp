#include<iostream>
#include<math.h>
using namespace std;

int n, st[25], nr_sol = 0 , a[25][25];

int valid(int k)
{
	for (int i = 1; i < k; i++)
	{
		if (st[i] == st[k])
			return 0;
		if (abs((float)(st[k] - st[i])) == abs((float)(k - i)))
			return 0;
	}
	return 1;
}

void tipar(int k)
{
	nr_sol++; 
	cout << "solutia" << nr_sol << ": ";
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= k; j++)
			if (st[i] == j)
				cout << "D";
			else
				cout <<" ";
		cout << endl;
	}
	cout << endl;
}

void back()
{
	int k;
	k = 1;
	st[1] = 0;
	while (k > 0)
	{
		if (st[k] < n)
		{
			st[k]++;   //urcam in stiva <=> trecem la urm coloana
			if (valid(k))
				if (k == n)
					tipar(k);
				else
					k = k + 1;
		}
		else
		{
			st[k] = 0;
			k--;
		}
	}
}
int main()
{
	do
	{ 
		cout << "n= "; 
	    cin >> n; 
	} while (n <= 3);
	back();
	return 0;

}
