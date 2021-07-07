//접근 제어 : protected와 private 키워드 차이점 알아보기

//public: 모든 곳으로부터의 접근을 허용
//protected: 자신의 멤버 함수 & 자식 클래스의 멤버 함수로부터의 접근만 허용
//private: 자신의 멤버 함수외에는 접근 불가

//가이드라인
//외부로부터 숨겨야 하는 멤버는 protected로 지정
//그 밖의 경우는 public으로 지정
//반드시 자식 클래스에 숨기고 싶다면 private로 지정

class Parent
{
private:
	int priv;

protected:
	int prot;

public:
	int pub;
};

class Child :public Parent
{
public:
	void AccessParents()
	{
		int n;

		//부모의 멤버에 접근을 시도
		n = priv; //실패
		n = prot; //성공
		n = pub; //성공
	}
};

int main()
{
	Parent pa;
	// 객체의 멤버에 접근을 시도
	int n;

	//클래스 외부에서 접근하면 public으로 지정된 멤버만 접근 가능
	n = pa.priv; //실패 
	n = pa.prot; //실패
	n = pa.pub; //성공

	return 0;
}