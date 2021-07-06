#include "DocWriter.h"

int main()
{
	DocWriter dw; //객체 생성
	dw.SetFileName("test.txt"); //파일 이름 설정
	dw.SetContent("This is a test !");
	dw.Write();
	return 0;
}