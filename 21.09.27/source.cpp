#include <iostream>
#include <cstdlib>
#include <ctime>

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

//int main()
//{
//	int Number = 0;
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> Number;
//
//	if (Number %2 == 1)
//	{
//		cout << "Ȧ�� �Դϴ�." << endl;
//	}
//	else
//	{
//		cout << "¦���Դϴ�." << endl;
//	}
//}

//int main()
//{
//	int Number = 0;
//	cout << "������ �Է��ϼ���. : ";
//	cin >> Number;
//
//	if ( Number <= 100  &&  Number > 90)
//	{
//		cout << "A�Դϴ�.";
//	}
//	else if (Number <= 90 && Number > 80)
//	{
//		cout << "B�Դϴ�.";
//	}
//	else if (Number <= 80 && Number >= 70)
//	{
//		cout << "C�Դϴ�.";
//	}
//	else if (Number <= 60 && Number > 50)
//	{
//		cout << "D�Դϴ�.";
//	}
//	else if (Number <= 50)
//	{
//		cout << "F�Դϴ�.";
//	}
//
//	return 0;
//}

//int main()
//{
//	int Score = 0;
//	char Grade;
//
//	cin >> Score;
//
//	switch (Score)
//	{
//
//	case 100:
//	{
//		Grade = 'A';
//		break;
//	}
//	case 90:
//	{
//		Grade = 'B';
//		break;
//	}
//	case 80:
//	{
//		Grade = 'C';
//		break;
//	}
//	default:
//	{
//		Grade = 'D';
//	}
//
//	}
//
//	cout << Grade; 
//
//
//	return 0;
//}

//int main()
//{
//	int Number[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		Number[i] = i + 1;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << Number[i] << endl;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int A = 10;
//	int B = 20;
//	
//
//	//Process
//	//to do
//	int C = A;
//	A = B;
//	B = C;
//	
//	cout << A << endl;
//	cout << B << endl;
//	//20
//	//10
//}

int main()
//{
//	srand(time(NULL));
//
//	for (int i = 0; i < 10; ++i)
//	{
//		int R = rand();
//
//		cout << R << endl;
//	}
//
//	return 0;
//	
//}
{
	//�迭 �ʱ�ȭ
	int Number[10];
	
	for (int i = 0; i < 10; ++i)
	{
		Number[i] = i + 1;
	}

	//���� �ʱ�ȭ, 0 - Rand_MAX
	srand(time(NULL));

	//���� ����
	for (int i = 0; i < 10; ++i)
	{
		//0 - 9
		int R = rand() % 10;
		//to do
		int R2 = rand() % 10;
		int Temp = Number[R];
		Number[R] = Number[R2];
		Number[R2] = Temp;

	}
	

	//���
	for (int i = 0; i < 10; ++i)
	{
		cout << Number[i] << endl;
	}


	return 0;

}