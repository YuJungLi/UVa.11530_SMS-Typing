#include <iostream>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	char a;
	int n, temp, cnt = 0, table[26] = { 1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4 };
	cin >> n;
	temp = n;
	getchar();
	while (temp--)
	{
		cout << "Case #" << n - temp << ": ";
		while (a = getchar())
		{
			if (a == '\n')
			{
				cout << cnt << endl;
				cnt = 0;
				break;
			}
			else
			{
				if (a == ' ')
					cnt++;
				else
					cnt += table[a - 'a'];
			}
		}
	}
	return 0;
}