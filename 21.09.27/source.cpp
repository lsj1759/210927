#include <iostream>

using namespace std;

/*int main()
{
	//�� ����
	// >, <, >=, <=. ++, !=
	
	int Number = 0;
	
	Reinput:
	cin >> Number;
	// 1 <= Number <= 9
	// �� ������
	// And &&
	// Or ||
	// Not !
	if (1 <= Number && Number <= 9)
	{
		cout << "�����ܿ� ������ ���Դϴ�." << endl;
	}
	else
	{
		cout << "���ڸ� �ٽ� �Է����ּ���.(1 ~ 9)" << endl;
		goto Reinput;
	}
	
	
	
	return 0;
}*/

int main()
{
	int Number = 0;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> Number;

	if (Number %2 == 1)
	{
		cout << "Ȧ�� �Դϴ�." << endl;
	}
	else
	{
		cout << "¦���Դϴ�." << endl;
	}
}