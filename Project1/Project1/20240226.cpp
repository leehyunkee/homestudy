/*#include <iostream>

void hw1_1_1(void);
void hw1_1_2(void);


int main(void)

{
	hw1_1_1();
	hw1_1_2();

}
void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
	
}	 //a와 b를 바꾸기 위한 식_아래동일 (포인터를 사용해줘야 바뀜)
void swap(char* a, char* b)
{
	char c = *a;
	*a = *b;
	*b = c;
}
void swap(double* a, double* b)
{
	double c = *a;
	*a = *b;
	*b = c;
}
void hw1_1_1(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'B';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
	
	
}


int BoxVolume(int length, int width, int height) //int 형식으로 반환값이 존재하기 때문에 int 함수 사용
{
	return length * width * height;
}
int BoxVolume(int length, int width)
{
	return length * width * 1;
}
int BoxVolume(int length)
{
	return length * 1*1;
}
void hw1_1_2(void)
{
	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,d] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,d,d] : " << BoxVolume(7) << std::endl;
}


*/