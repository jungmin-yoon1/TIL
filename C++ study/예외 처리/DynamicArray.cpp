#include "DynamicArray.h"

DynamicArray::DynamicArray(int arraySize)
{
	//�������� �޸� �Ҵ�
	arr = new int[arraySize];
	//�迭�� ���� ����
	size = arraySize;
}

DynamicArray::~DynamicArray()
{
	//�޸� ����
	delete[] arr;
	arr = 0;
}

//������ ���� �����ϴ� ������
void DynamicArray::SetAt(int index, int value)
{
	//�ε����� ������ ���� ������ ���ܸ� ������.
	if (index < 0 || index >= GetSize())
		throw "Out of Range!!!";
	arr[index] = value;
}

//������ ���� ��ȯ�ϴ� ������
int DynamicArray::GetAt(int index) const
{
	//�ε����� ������ ���� ������ ���ܸ� ����
	if (index < 0 || index >= GetSize())
		throw "Out of Range!!!";
	return arr[index];
}

//�迭�� ���� ��ȯ�ϴ� ������
int DynamicArray::GetSize() const
{
	return size;
}
