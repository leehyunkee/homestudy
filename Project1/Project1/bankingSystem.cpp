#include <iostream>
using namespace std;
void menu(void)
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2.입금" << endl;
	cout << "3.출금" << endl;
	cout << "4.계좌정보 전체출력" << endl;
	cout << "5.프로그램 종료" << endl;
	cout << "선택: ";
}
typedef struct
{
	int accID;
	int balance;
	char cusName[100];

}Account;
Account accArr[100];//account 저장을 위한 배열
int accNum = 0;		//갯수


void MakeAccount(void)
{
	int id;
	char name[100];
	int withdraw;

	cout << "[계좌개설]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "이름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> withdraw;

}
int main()
{
	while (true)
	{

		int num;
		menu();
		cin >> num;
		if (num == 5)
		{
			break;
		}
		else if (num == 1)
		{
			MakeAccount();
		}
	}
}