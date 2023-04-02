#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //매개변수가 없는 생성자
	Circle(int r); //매개변수가 있는 생성자
	~Circle(); //소멸자
};

Circle::Circle() {
	radius = 10; //매개변수의 값 초기화
	cout << "반지름의 길이가 " << radius << "인 원이 생성되었습니다." << endl;
}

Circle::Circle(int r) {
	radius = r; //매개변수에 값 할당
	cout << "반지름의 길이가 " << radius << " 인 원이 생성되었습니다." << endl;
}

Circle::~Circle() {
	cout << "반지름의 길이가 " << radius << " 인 원이 소멸되었습니다." << endl;
}

int main() {
	Circle circleA;
	Circle circleB(100);
	return 0;
}