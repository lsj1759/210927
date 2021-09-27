#include <iostream> 
#include "헤더.h"

using namespace std;

/*int main()
{
	//비교 연산
	// >, <, >=, <=. ++, !=
	
	int Number = 0;
	
	Reinput:
	cin >> Number;
	// 1 <= Number <= 9
	// 논리 연산자
	// And &&
	// Or ||
	// Not !
	if (1 <= Number && Number <= 9)
	{
		cout << "구구단에 적합한 수입니다." << endl;
	}
	else
	{
		cout << "숫자를 다시 입력해주세요.(1 ~ 9)" << endl;
		goto Reinput;
	}
	
	
	
	return 0;
}*/

//int main()
//{
//	int Number = 0;
//	cout << "숫자를 입력하세요 : ";
//	cin >> Number;
//
//	if (Number %2 == 1)
//	{
//		cout << "홀수 입니다." << endl;
//	}
//	else
//	{
//		cout << "짝수입니다." << endl;
//	}
//}

//int main()
//{
//	int Number = 0;
//	cout << "성적을 입력하세요. : ";
//	cin >> Number;
//
//	if ( Number <= 100  &&  Number > 90)
//	{
//		cout << "A입니다.";
//	}
//	else if (Number <= 90 && Number > 80)
//	{
//		cout << "B입니다.";
//	}
//	else if (Number <= 80 && Number >= 70)
//	{
//		cout << "C입니다.";
//	}
//	else if (Number <= 60 && Number > 50)
//	{
//		cout << "D입니다.";
//	}
//	else if (Number <= 50)
//	{
//		cout << "F입니다.";
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
//	//배열 초기화
//	int Number[10];
//	
//	for (int i = 0; i < 10; ++i)
//	{
//		Number[i] = i + 1;
//	}
//
//	//난수 초기화, 0 - Rand_MAX
//	srand(time(NULL));
//
//	//숫자 섞기(shuffle)
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
//	//출력
//	for (int i = 0; i < 10; ++i)
//	{
//		cout << Number[i] << endl;
//	}
//
//
//	return 0;
//
//}
//선언
//반환형 (int, float, bool, void, char) 함수이름(인자(void))

//구현
//반환형 (int, float, bool, void, char) 함수이름(인자(void))
//{
// //to do
// }

//선언
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
//선언
//변수* = jnt*, char*, float* > 주소값 > 메모리 위치 가르키는 화살표
//사용
//*변수 = *A > 화살표가 가르키는 메모리 위치의 값
//&변수 = 변수의 메모리 위치 (번지, Address)

//function, call by value (* pointer)
//call by value로 call by reference 구현
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



//선언
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
