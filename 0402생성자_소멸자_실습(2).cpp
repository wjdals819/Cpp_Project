#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //���� ������
	Circle(int r); //Ÿ�� ������
	double circleSize(); //���� ���̸� ���ϴ� �Լ�
};

Circle::Circle():Circle(1) {}//���� ������
Circle::Circle(int r) {
	radius = r;
	cout << "�������� " << radius << "�� ���� �����Ǿ����ϴ�." << endl;
}

double Circle::circleSize() {
	return radius * radius * 3.14;
}

int main() {
	Circle circleA; //�Ű������� ���� ������ ����
	double size = circleA.circleSize();
	cout << "�� A�� ����:" << size << endl;

	Circle circleB(100);
	size = circleB.circleSize();
	cout << "�� B�� ����:" << size << endl;
}