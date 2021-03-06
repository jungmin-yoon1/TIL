#include "HTMLWriter.h"
#include <fstream>  //파일 입출력 작업을 위한 ofstream 사용 준비
using namespace std;

HTMLWriter::HTMLWriter()
{
	//디폴트 파일 이름만 바꾸기
	_fileName = "NoName.html";

	//디폴트 폰트 지정
	_fontName = "굴림";
	_fontSize = 3;
	_fontColor = "black";
}

HTMLWriter::HTMLWriter(const string& fileName, const string& content)
	: DocWriter(fileName, content)  //초기화 리스트를 사용해 부모 클래스 생성자 호출
{
	//디폴트 폰트 지정
	_fontName = "굴림";
	_fontSize = 3;
	_fontColor = "black";
}

HTMLWriter::~HTMLWriter()
{

}

//파일에 텍스트 저장
void HTMLWriter::Write()
{
	//파일 열기
	ofstream of(_fileName.c_str());

	//HTML 헤더 부분을 저장
	of << "<HTML><HEAD><TITLE>This document was generated by HTMLWriter</TITLE></HEAD><BODY>";
	of << "<H1>Content</H1>";

	//폰트 태그 시작
	of << "<Font name = '" << _fontName << "'size = '" << _fontSize << "'color = '" << _fontColor << "'>";

	//텍스트를 저장
	of << _content;

	//폰트 태그를 닫음
	of << "</FONT>";

	//HTML을 마무리
	of << "</BODY></HTML>";
}

//폰트를 지정
void HTMLWriter::SetFont(const string& fontName, int fontSize, const string& fontColor)
{
	_fontName = fontName;
	_fontSize = fontSize;
	_fontColor = fontColor;
}
