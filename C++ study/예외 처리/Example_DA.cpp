#include "DynamicArray.h"
#include <iostream>
using namespace std;

void UseArray(DynamicArray& arr);

int main()
{

	//ũ�Ⱑ 10�� �迭 ��ü�� ����
	DynamicArray arr(10);

	UseArray(arr);

	return 0;
}

void UseArray(DynamicArray& arr)
{
	try
	{
		arr.SetAt(5, 100);
		arr.SetAt(8, 100);
		arr.SetAt(10, 100);
	}
	catch (const char* ex)
	{
		cout << "���� ����: " << ex << endl;
	}
}