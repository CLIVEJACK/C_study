#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);	// 순차적으로 집어넣기
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);


	//printf("%d\n", v[2]);	// 30이 출력됨 배열과 흡사하다
	//printf("%d\n", v.at(6));	// 오버플로우 된다.

	for (auto i = 0; i < v.size(); i++) {
		cout << v[i] << " ";	// 빠름 ㅇㅇ
		cout << v.at(i) << " "; // 안전한편이지만 조끔 느림
	}
	printf("\n");

	vector<int>::iterator it;		// 반복자를 사용한 출력
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	printf("\n");

	// vector크기를 나타내는 표준화된 정수 자료형 // vector의 크기를 나타내는 자료형size_type
	// vector템플릿형식에는 int라는 멤버가 있으며 vector<int>::size_type으로 정의된다
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	printf("\n");

	// 향상된 for문 출력만할거면 이게 깔끔하고 좋다.
	for (auto i : v) {
		cout << i << " ";
	}
	

	return 0;
}