//#include <iostream>
//#define _CRT_SECURE_NO_WARNINGS
//
//class Person {
//	char* mname;	// 맴버를 나타네가 위해서 m을 넣음
//	int age;
//
//public:
//	Person() {}		// 디폴트 생성자 : 명시적으로 작성해줘야 밑에있는 p변수를 사용가능하다 
//	Person(const char * name, int age) {	// name,age는 스택에저장되고 객체마다 가지고 있어야한다 
//		mname = new char[strlen(name) + 1];
//		strncpy(mname, name, strlen(name) + 1);	
//		//this->name = name; 
//		this->age = age;
//		printf("constructor 호출!!");		// 생성자가 호출되면 프린트가 출력된다
//	}
//	Person(const Person& other) {			// 복사생성자는 본인이 const를 달아줘야함
//		mname = new char[strlen(mname) + 1];
//		strcpy(mname, other.mname);
//		age = other.age;
//		printf("Copy Constructor 호출이다 웅나!");
//	}
//	~Person() {}	// 소멸자 호출
//	void view() {
//		printf(" name: %s, age: %d\n", this->mname, this->age);
//	}
//};
//
//int main()
//{
//	char c[4] = "abc";	// 캐릭터 배열을 넣을때는 마지막에 Null이 들어가야하므로 1칸 많게 넣어야함 ㅇㅇ 
//	//c[0] = 'a';		// 개별적으로 넣을때는 오류가 안다는데 
//	//c[1] = 'b';
//	//c[2] = 'c';
//
//	Person p("홍길동", 50);		// "홍길동"은 값이 변하면 안된다 const를 달아줘야함 그래야 오류가 안남 ㅇㅇ
//	p.view();
//
//	Person p2(p);	// p2는 p의 객체를 디폴트 복사생성 호출됨 그래서 생성자가 2번 나오지 않음
//	p2.view();
//
//	Person p3 = p;
//	p3.view();		// p3도 디폴트 복사 생성자가 호출됨
//
//	return 0;
//}
//
