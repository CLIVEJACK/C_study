//#include <iostream>
//
//
//class Myclass {
//private:
//	int id;
//	char name[20];
//	int age;
//
//public:
//	Myclass(int id, char name[20], int age) { // Myclass는 생성자 : 생성자는 출력이없다 
//		//this.id = id;		// 객체자기자신을 가리키는 포인터라서 잘못된 표현이다
//		this->id = id;
//		this->age = age;
//		//this->name = name;	// 캐릭터 배열이라서 
//		//this->name = "홍길동"; // 이것도 지원하지 않는 기능임
//		strcpy(this->name, name);	// 배열을 선언한후 문자열을 저장하는경우는 대입연산자 처리로 할 수없다
//	}
//};
//int main()
//{
//
//	return 0;
//}