#include<iostream>
using namespace std;

void plusone(int& a)//참조자의 사용예. 단, void가 아닌 다른 반환형일 경우, 반환을 반드시 해야 한다는 것에 주의.
{
	a += 1;
}

void multiplyminus(int& a)
{
	a = 0 - a;
}

int main()
{
	int a = 1;
	cout << "a = " << a << endl;
	plusone(a);
	cout << "a + 1 = " << a << endl;
	multiplyminus(a);
	cout << "- ( a + 1 ) = " << a << endl;
	return 0;
}