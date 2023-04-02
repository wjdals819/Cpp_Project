#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //�Ű������� ���� ������
	Circle(int r); //�Ű������� �ִ� ������
	~Circle(); //�Ҹ���
};

Circle::Circle() {
	radius = 10; //�Ű������� �� �ʱ�ȭ
	cout << "�������� ���̰� " << radius << "�� ���� �����Ǿ����ϴ�." << endl;
}

Circle::Circle(int r) {
	radius = r; //�Ű������� �� �Ҵ�
	cout << "�������� ���̰� " << radius << " �� ���� �����Ǿ����ϴ�." << endl;
}

Circle::~Circle() {
	cout << "�������� ���̰� " << radius << " �� ���� �Ҹ�Ǿ����ϴ�." << endl;
}

int main() {
	Circle circleA;
	Circle circleB(100);
	return 0;
}