//���� ���� : protected�� private Ű���� ������ �˾ƺ���

//public: ��� �����κ����� ������ ���
//protected: �ڽ��� ��� �Լ� & �ڽ� Ŭ������ ��� �Լ��κ����� ���ٸ� ���
//private: �ڽ��� ��� �Լ��ܿ��� ���� �Ұ�

//���̵����
//�ܺηκ��� ���ܾ� �ϴ� ����� protected�� ����
//�� ���� ���� public���� ����
//�ݵ�� �ڽ� Ŭ������ ����� �ʹٸ� private�� ����

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

		//�θ��� ����� ������ �õ�
		n = priv; //����
		n = prot; //����
		n = pub; //����
	}
};

int main()
{
	Parent pa;
	// ��ü�� ����� ������ �õ�
	int n;

	//Ŭ���� �ܺο��� �����ϸ� public���� ������ ����� ���� ����
	n = pa.priv; //���� 
	n = pa.prot; //����
	n = pa.pub; //����

	return 0;
}