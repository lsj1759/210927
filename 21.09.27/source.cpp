#include <iostream>

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

int main()
{
	int Number = 0;
	cout << "성적을 입력하세요. : ";
	cin >> Number;

	if ( Number <= 100  &&  Number > 90)
	{
		cout << "A입니다.";
	}
	else if (Number <= 90 && Number > 80)
	{
		cout << "B입니다.";
	}
	else if (Number <= 80 && Number > 70)
	{
		cout << "C입니다.";
	}
	else if (Number <= 60 && Number > 50)
	{
		cout << "D입니다.";
	}
	else if (Number <= 50)
	{
		cout << "F입니다.";
	}

	return 0;
}