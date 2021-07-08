//#include <string>
//using namespace std;
//
////학부생 클래스
//class UnderGradStudent
//{
//public:
//	string name; //이름
//	string department; //학부
//
//	void Warn() //학사 경고
//	{
//
//	}
//};
//
////기숙사생 클래스
//class DormStudent
//{
//public:
//	string building; //기숙사 명
//	int roomNumber; //방 번호
//
//	void Warn() //벌점 부과
//	{
//
//	}
//};
//
//class UnderGrad_DormStudent :
//	public UnderGradStudent,
//	public DormStudent
//{
//public:
//
//};
//
//int main()
//{
//	//기숙사생이면서 학부생인 사람의 정보 생성
//	UnderGrad_DormStudent std;
//	std.name = "Hyun C. Lee";
//	std.department = "Info & Computer Engineering";
//	std.building = "NamJeKwan";
//	std.roomNumber = 1529;
//	std.UnderGradStudent::Warn(); //학사 경고
//	std.DormStudent::Warn(); //벌점 부과
//
//	return 0;
//}