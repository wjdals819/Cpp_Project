#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //생성자1
	Circle(int r); //생성자2
	~Circle(); //소멸자
};

Circle::Circle() {
	radius = 10;
	cout << "반지름이 " << radius << " 인 원이 생성되었습니다." << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름이 " << radius << " 인 원이 생성되었습니다." << endl;
}

Circle::~Circle() {
	cout << "반지름이 " << radius << " 인 원이 소멸되었습니다." << endl;
}


void func() {
	Circle fCircleC(1000); //지역객체로 생성된 반지름이 1000인 원
	Circle fCircleD(2000); //지역객체로 생성된 반지름이 2000인 원
}

int main() {
	Circle circleE; //지역객체로 생성된 반지름이 10인 원
	Circle circleF(20);//지역객체로 생성된 반지름이 20인 원
	func(); //func함수 실행
}

