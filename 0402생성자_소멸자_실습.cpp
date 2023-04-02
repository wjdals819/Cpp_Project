#include <iostream>
using namespace std;

class Circle {
public: 
	int radius;
	Circle(); //�Ű������� ���� ������
	Circle(int r); //�Ű������� �ִ� ������
	double circleSize(); //���� ���̸� ���ϴ� �Լ�
};

Circle::Circle() {
	radius = 10; //�Ű������� �� �ʱ�ȭ
	cout << "�������� ���̰� " << radius << "�� ���� �����Ǿ����ϴ�."<<endl;
}

Circle::Circle(int r) {
	radius = r; //�Ű������� �� �Ҵ�
	cout << "�������� ���̰� " << radius << " �� ���� �����Ǿ����ϴ�."<<endl;
}

double Circle::circleSize() {
	return radius * radius * 3.14;
}

int main() {
	Circle circleA; //�Ű������� ���� ������ ����
	double size = circleA.circleSize();
	cout << "�� A�� ����:" << size<<endl;

	Circle circleB(100);
	size = circleB.circleSize();
	cout << "�� B�� ����:" << size<<endl;
}