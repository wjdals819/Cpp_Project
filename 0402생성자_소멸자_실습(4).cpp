#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //������1
	Circle(int r); //������2
	~Circle(); //�Ҹ���
};

Circle::Circle() {
	radius = 10;
	cout << "�������� " << radius << " �� ���� �����Ǿ����ϴ�." << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "�������� " << radius << " �� ���� �����Ǿ����ϴ�." << endl;
}

Circle::~Circle() {
	cout << "�������� " << radius << " �� ���� �Ҹ�Ǿ����ϴ�." << endl;
}


void func() {
	Circle fCircleC(1000); //������ü�� ������ �������� 1000�� ��
	Circle fCircleD(2000); //������ü�� ������ �������� 2000�� ��
}

int main() {
	Circle circleE; //������ü�� ������ �������� 10�� ��
	Circle circleF(20);//������ü�� ������ �������� 20�� ��
	func(); //func�Լ� ����
}

