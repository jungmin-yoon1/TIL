#include "DocWriter.h"
#include <fstream> //���� ����� �۾��� ���� ofstream ��� �غ�
using namespace std;

DocWriter::DocWriter()
{
	//���� �̸��� �ؽ�Ʈ�� ����Ʈ�� �������� ����
	_fileName = "NoName.txt";
	_content = "There is no content";
}

DocWriter::DocWriter(const string& fileName, const string& content)
{
	_fileName = fileName;
	_content = content;
}

DocWriter::~DocWriter()
{

}

void DocWriter::SetFileName(const string& fileName)
{
	_fileName = fileName;
}

void DocWriter::SetContent(const string& content)
{
	_content = content;
}

void DocWriter::Write()
{
	//���� ����, ���� ������ ���� �ֵ��� �غ�
	ofstream of(_fileName.c_str()); // _fileName�� ������ �̸� ���, c��Ÿ���� ���ڿ��� �Ѱ���
		
	//������ ��� ���
	of << "# Content #\n\n"; //cout ��ü�� ���ڿ� �Ѱ��ֵ��� of ��ü�� ���ڿ��� �Ѱ��ָ� ���Ͽ� ������ �ۼ���

	//���� ���� ����
	of << _content;  

}