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
