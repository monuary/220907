#include<iostream>
using namespace std;

void plusone(int& a)//�������� ��뿹. ��, void�� �ƴ� �ٸ� ��ȯ���� ���, ��ȯ�� �ݵ�� �ؾ� �Ѵٴ� �Ϳ� ����.
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