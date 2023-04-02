#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //위임 생성자
	Circle(int r); //타겟 생성자
	double circleSize(); //원의 넓이를 구하는 함수
};

Circle::Circle():Circle(1) {}//위임 생성자
Circle::Circle(int r) {
	radius = r;
	cout << "반지름이 " << radius << "인 원이 생성되었습니다." << endl;
}

double Circle::circleSize() {
	return radius * radius * 3.14;
}

int main() {
	Circle circleA; //매개변수가 없는 생성자 생성
	double size = circleA.circleSize();
	cout << "원 A의 면적:" << size << endl;

	Circle circleB(100);
	size = circleB.circleSize();
	cout << "원 B의 면적:" << size << endl;
}