#include <iostream>
using namespace std;
void menu(void)
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3.���" << endl;
	cout << "4.�������� ��ü���" << endl;
	cout << "5.���α׷� ����" << endl;
	cout << "����: ";
}
typedef struct
{
	int accID;
	int balance;
	char cusName[100];

}Account;
Account accArr[100];//account ������ ���� �迭
int accNum = 0;		//����


void MakeAccount(void)
{
	int id;
	char name[100];
	int withdraw;

	cout << "[���°���]" << endl;
	cout << "���� ID: ";
	cin >> id;
	cout << "�̸�: ";
	cin >> name;
	cout << "�Աݾ�: ";
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