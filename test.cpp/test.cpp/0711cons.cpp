//// 1 cons
//// 다형성 오버로딩 == 템플릿 같이 떠올리면 됨 
//// 함수 오버로딩 
//// 동적 형태의 오버로딩 
//
//
//#define _crt_secure_no_warnings
//#include <iostream>
//#include <string>
//using namespace std;
//
//class person {
//	char name[30];	
//	int age;
//public:
//	person() {}		// 디폴트 생성자 : 명시적으로 작성해줘야 밑에있는 p변수를 사용가능하다 
//	person(const char * name, int age) {	// name,age는 스택에저장되고 객체마다 가지고 있어야한다 
//		strcpy(this->name, name);
//		//this->name = name; 
//		this->age = age;
//		printf("constructor 호출!!");		// 생성자가 호출되면 프린트가 출력된다
//	}
//	~person() {}	// 소멸자 호출
//	void view() {
//		printf(" name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	/*person p;
//	p.view();*/
//
//	person p("홍길동", 50);		// "홍길동"은 값이 변하면 안된다 const를 달아줘야함 그래야 오류가 안남 ㅇㅇ
//	p.view();
//
//	person p2(p);	// p2는 p의 객체를 디폴트 복사생성 호출됨 그래서 생성자가 2번 나오지 않음
//	p2.view();
//
//	person p3 = p;
//	p3.view();		// p3도 디폴트 복사 생성자가 호출됨
//
//
//	return 0;
//}
//
//// 복사 생성자는 객체를 복사하지만 멤버함수는 1나뿐이기 때문에 코드영역에서 공유한다