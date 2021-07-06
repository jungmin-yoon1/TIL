#ifndef DOCWRITER_H
#define DOCWRITER_H

#include <string>
using namespace std;

//문서 저장 클래스 생성
class DocWriter
{
public:
	//생성자
	DocWriter();
	DocWriter(const string& fileName, const string& content);
	//소멸자
	~DocWriter(); 

	//파일 이름을 지정
	void SetFileName(const string& fileName);

	//저장할 텍스트 지정
	void SetContent(const string& content);

	//파일에 텍스트 저장
	void Write();

protected:
	string _fileName; //문서를 저장할 파일의 이름 저장
	string _content; //문서의 내용 저장
};

#endif