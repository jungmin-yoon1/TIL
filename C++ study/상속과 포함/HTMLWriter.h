#ifndef HTMLWRITER_H
#define HTMLWRITER_H

#include "DocWriter.h" //DocWriter Ŭ���� ��ӹޱ� ����

class HTMLWriter :public DocWriter //��ӹ޴� ���, ��κ� public�� ��
{
public:
	HTMLWriter(); //������
	HTMLWriter(const string& fileName, const string& content); //���ڰ� �ִ� ������ �߰�, �� ���ڵ��� DocWriter Ŭ������ �����ڷ� �������ַ�����
	~HTMLWriter(); //�Ҹ���

	//�ؽ�Ʈ�� ���Ϸ� ����
	void Write();

	//��Ʈ ����
	void SetFont(const string& fontName, int fontSize, const string& fontColor);

protected:
	//�� ������ ������ �� ����� ��Ʈ�� �̸�, ũ��, ���� ���� ������ ��� ������
	string _fontName;
	string _fontColor;
	int _fontSize;

};

#endif