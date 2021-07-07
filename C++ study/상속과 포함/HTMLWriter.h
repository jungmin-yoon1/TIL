#ifndef HTMLWRITER_H
#define HTMLWRITER_H

#include "DocWriter.h" //DocWriter 클래스 상속받기 위함

class HTMLWriter :public DocWriter //상속받는 방법, 대부분 public을 씀
{
public:
	HTMLWriter(); //생성자
	HTMLWriter(const string& fileName, const string& content); //인자가 있는 생성자 추가, 이 인자들을 DocWriter 클래스의 생성자로 전달해주려고함
	~HTMLWriter(); //소멸자

	//텍스트를 파일로 저장
	void Write();

	//폰트 지정
	void SetFont(const string& fontName, int fontSize, const string& fontColor);

protected:
	//웹 문서로 저장할 때 사용할 폰트의 이름, 크기, 색상 등을 보관할 멤버 변수들
	string _fontName;
	string _fontColor;
	int _fontSize;

};

#endif