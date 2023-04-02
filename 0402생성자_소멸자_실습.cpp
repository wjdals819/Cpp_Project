#include <iostream>
using namespace std;

class Circle {
public: 
	int radius;
	Circle(); //매개변수가 없는 생성자
	Circle(int r); //매개변수가 있는 생성자
	double circleSize(); //원의 넓이를 구하는 함수
};

Circle::Circle() {
	radius = 10; //매개변수의 값 초기화
	cout << "반지름의 길이가 " << radius << "인 원이 생성되었습니다."<<endl;
}

Circle::Circle(int r) {
	radius = r; //매개변수에 값 할당
	cout << "반지름의 길이가 " << radius << " 인 원이 생성되었습니다."<<endl;
}

double Circle::circleSize() {
	return radius * radius * 3.14;
}

int main() {
	Circle circleA; //매개변수가 없는 생성자 생성
	double size = circleA.circleSize();
	cout << "원 A의 면적:" << size<<endl;

	Circle circleB(100);
	size = circleB.circleSize();
	cout << "원 B의 면적:" << size<<endl;
}