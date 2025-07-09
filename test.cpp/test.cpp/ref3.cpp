//#include <iostream>
//#include <string>
//
//int main()
//{
//	int a = 1; // a는 int형식에 대한 인스턴스 == 인스턴스 : 클래스에서 생성되는 객체이다 
//	std::string str;	// str은 string형식에 대한 인스턴스
//
//	int b = 10; // 객체 냄새는 안난다, C 스타일 
//	int b1(10); // 인스턴스 C가 생성과 동시에 10으로 초기화가 된다, C++스타일
//
//	int c(a);  //a 의 값을 복사해서 c라는 객체를 생성
//	int c1 = a;
//	auto d(c);	// auto는 변수에 맞춰서 형이 자동 결정
//
//	int n = 10;
//	int& ref = n;
//	ref = 20;
//	std::cout << n << std::endl;
//	int* pn = &n;
//	*pn = 30;
//	std::cout << n << std::endl;
//
//	return 0;
//}