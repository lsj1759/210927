#include <iostream>

using namespace std;

int main()
{
	int Number = 0;

	cout << "출력할 구구단을 입력하세요. : ";
	cin >> Number;
	for (int i = 0; i <= 9; i++)
	{
		cout << Number << " X " << i << " = " << Number * i << endl;
	}

	cout << endl;
	cout << "----------------------------------------------" << endl;
	cout << endl;
	
	for (int j = 1; j <= 9; j++)
	{
		for (int i = 1; i <= 9; i++)
		{
			cout << j << " X " << i << " = " << j * i << endl;
		}
	}
 



	return 0;
}