#include <iostream>
 
using namespace std;
 
int a[15][15], angle, w, h;
 
int main()
{ 
	
	cin >> w >> h;
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> angle;
	
	switch (angle)
	{
		case 0:
			cout << w << ' ' << h << '\n';
			for (int i = 1; i <= h; i++)
			{
				for (int j = 1; j <= w; j++)
				{
					cout << a[i][j] << ' ';
				}
				cout << '\n';
			}
			break;
		case 90:
			cout << h << ' ' << w << '\n';
			for (int j = 1; j <= w; j++)
			{
				for (int i = h; i >= 1; i--)
				{
					cout << a[i][j] << ' ';
				}
				cout << '\n';
			}
			break;
		case 180:
			cout << w << ' ' << h << '\n';
			for (int i = h; i >= 1; i--)
			{
				for (int j = w; j >= 1; j--)
				{
					cout << a[i][j] << ' ';
				}
				cout << '\n';
			}
			break;
		case 270:
			cout << h << ' ' << w << '\n';
			for (int j = w; j >= 1; j--)
			{
				for (int i = 1; i <= h ; i++)
				{
					cout << a[i][j] << ' ';
				}
				cout << '\n';
			}
			break;
		default:
			break;
	}
	
	return 0;
}
