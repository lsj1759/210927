#include <iostream> 
#include "���.h"

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

//int main()
////{
////	srand(time(NULL));
////
////	for (int i = 0; i < 10; ++i)
////	{
////		int R = rand();
////
////		cout << R << endl;
////	}
////
////	return 0;
////	
////}
//{
//	//initialize
//	//�迭 �ʱ�ȭ
//	int Number[10];
//	
//	for (int i = 0; i < 10; ++i)
//	{
//		Number[i] = i + 1;
//	}
//
//	//���� �ʱ�ȭ, 0 - Rand_MAX
//	srand(time(NULL));
//
//	//���� ����(shuffle)
//	for (int i = 0; i < 10; ++i)
//	{
//		//0 - 9
//		int R = rand() % 10;
//		//to do
//		int R2 = rand() % 10;
//		int Temp = Number[R];
//		Number[R] = Number[R2];
//		Number[R2] = Temp;
//
//	}
//	
//	//Display
//	//���
//	for (int i = 0; i < 10; ++i)
//	{
//		cout << Number[i] << endl;
//	}
//
//
//	return 0;
//
//}
//����
//��ȯ�� (int, float, bool, void, char) �Լ��̸�(����(void))

//����
//��ȯ�� (int, float, bool, void, char) �Լ��̸�(����(void))
//{
// //to do
// }

//����
//int Add(int A, int B);
//
//
//int main()
//{
//
//	int A = 5;
//	int B = 6;
//
//	cout << Add(A, B) << endl;
//
//	return 0;
//}
//
//
//int Add(int A, int B)
//{
//
//	return A + B;
//}

//pointer
//����
//����* = jnt*, char*, float* > �ּҰ� > �޸� ��ġ ����Ű�� ȭ��ǥ
//���
//*���� = *A > ȭ��ǥ�� ����Ű�� �޸� ��ġ�� ��
//&���� = ������ �޸� ��ġ (����, Address)

//function, call by value (* pointer)
//call by value�� call by reference ����
void Swap(int *A, int *B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;

	cout << *A << endl;
	cout << *B << endl;
}
int main()
{
	int A = 4;
	int B = 5;

	Swap(&A, &B);
	cout << A << endl;
	cout << B << endl;

}



//����
//int Add(int A, int B);
//int Sub(int A, int B);
//int Mul(int A, int B);
//int Div(int A, int B);
//int Mod(int A, int B);
//int main()
//{
//
//	int A = 3;
//	int B = 4;
//
//	cout << Add(A, B) << endl;
//	cout << Sub(A, B) << endl;
//	cout << Mul(A, B) << endl;
//	cout << Div(A, B) << endl;
//	cout << Mod(A, B) << endl;
//}
//
//int Add(int A, int B)
//{
//	return A + B;
//}
//int Sub(int A, int B)
//{
//	return A - B;
//}
//int Mul(int A, int B)
//{
//	return A * B;
//}
//int Div(int A, int B)
//{
//	return A / B;
//}
//int Mod(int A, int B)
//{
//	return A % B;
//}
