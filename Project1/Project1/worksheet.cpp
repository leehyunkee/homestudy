#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

void hw1_1(void);
void hw1_2(void);
void hw1_3(void);
void hw1_4(void);

int main()
{
	//hw1_1();
	//hw1_2();
	//hw1_3();
	hw1_4();
	
		

	return 0;
	
}

void hw1_1(void)
{
	std::cout << "hello world " << "im hk" << std::endl;
	int num1, num2, num3, num4, num5; //���� 5���� ���� ���� ����


	std::cout << "1��° ���� �Է�: ";
	std::cin >> num1;					//num@�� ���� �Է�

	std::cout << "2��° ���� �Է�: ";
	std::cin >> num2;

	std::cout << "3��° ���� �Է�: ";
	std::cin >> num3;

	std::cout << "4��° ���� �Է�: ";
	std::cin >> num4;

	std::cout << "5��° ���� �Է�: ";
	std::cin >> num5;

	int add = num1 + num2 + num3 + num4 + num5;	//�հ� ���� ����

	std::cout << "�հ�: " << add << std::endl;

}
void hw1_2(void)
{
	char name[100], phone[100];		//�̸��� ��ȭ��ȣ�� ��� ���� �迭 ���� ����

	std::cout << "what is your name: ";
	std::cin >> name;

	std::cout << "what is your phone num:";
	std::cin >> phone;

	std::cout << "your name is " << name << " your phone number is " << phone << std::endl;


}
void hw1_3(void)
{
	int num;		//�������� ���� ���� ���� ����
	std::cout << "������ ����� ���� ���ڸ� �Է��Ͻÿ�: ";
	std::cin >> num;	//�����Է�

	for (int i = 1; i < 10; i++)		//1�ܺ��� 9�ܱ��� ������ ���� �ݺ��� ���
	{
		std::cout << i << "x" << num << "=" << i * num << std::endl;
	}
}
void hw1_4(void)
{
	int salary, money;
	
	
	while (true)
	{
		std::cout <<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> money;
		salary = money * 0.12 + 50;	//�޿�����

		if (money == -1)		//-1�� ġ�� ����
			break;

		std::cout << "�̹� �� �޿�: " << salary << std::endl;
		
	}
}