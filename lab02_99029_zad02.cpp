#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print(int a)
{
	std::cout << "Integer: " << a << std::endl;
}
void print(char a)
{
	std::cout << "Char: " << a << std::endl;
}
void print(double a, const char p[7])
{
	std::cout << "Double: " << p << "=" << a << std::endl;
}
void print(int* a, const char b[2])
{
	std::cout << "int pointer: " << b << "=" << a << std::endl;
}
void print(const char* a, const char b[5])
{
	std::cout << "String: " << b << "=" << a << " (" << strlen(b) << ") " << std::endl;
}

int main()
{
	print(7);
	print('a');
	print(3.15, "result");
	int* q = (int*)0xffee;
	print(q, "q");
	const char* s = "Tekst";
	print(s, "text");

	system("PAUSE");
	return 0;
}