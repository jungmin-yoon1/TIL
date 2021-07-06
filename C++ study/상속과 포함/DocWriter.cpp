#include "DocWriter.h"
#include <fstream> //파일 입출력 작업을 위한 ofstream 사용 준비
using namespace std;

DocWriter::DocWriter()
{
	//파일 이름과 텍스트를 디폴트로 지정시켜 놓음
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
	//파일 열기, 파일 생성후 내용 넣도록 준비
	ofstream of(_fileName.c_str()); // _fileName에 보관된 이름 사용, c스타일의 문자열로 넘겨줌
		
	//간단한 헤더 출력
	of << "# Content #\n\n"; //cout 객체에 문자열 넘겨주듯이 of 객체에 문자열을 넘겨주면 파일에 내용이 작성됨

	//문서 내용 저장
	of << _content;  

}