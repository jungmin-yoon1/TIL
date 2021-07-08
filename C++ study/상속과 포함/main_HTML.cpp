// HTML & DocWriter h, cpp 이용
#include "HTMLWriter.h"
#include "DocWriter.h"

int main()
{
	//HTML Writer 객체 생성
	HTMLWriter hw("test.html", "This is HTMLWriter content");

	//DocWriter 클래스의 포인터로 객체를 가리킴
	DocWriter* pdW = &hw; //부모 객체의 포인터로 자식 객체를 가리키는 경우는 가능, 역은 성립 불가
	//DocWriter& dw=hw; // DocWriter 클래스의 레퍼런스로 객체 참조 

	//파일에 저장
	pdW->Write(); //DocWriter::Write() 함수가 호출됨, 실제 객체가 무엇이던간에 상관없이 포인터의 타입을 기준으로 호출될 함수 결정됨

	return 0;
}