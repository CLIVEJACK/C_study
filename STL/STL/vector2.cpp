//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> arr;	//크기가 0인 벡터선언
//	vector<int> v(10);	// 크기라 10인 벡터 선언
//	vector<int> v1 = { 1, 2, 3, 4, 5 }; //크기가 5
//
//	cout << "arr size: " << arr.size() << endl;
//	cout << "v(10) size: " << v.size() << endl;
//	cout << "v1 size: " << v1.size() << endl;
//
//	for (int i = 0; i < 10; i++) {
//		printf("v[%d]: %d", i, v[i]);
//	}
//	printf("\n");
//	for (auto i : v1) {		// 범위기반 for/향상된 for문
//		cout << i << endl;
//	}
//
//	cout << "v1의 첫번째 요소값: " << *v1.begin() << endl;			// 간접참조여서 *를 써야한다
//	cout << "v1의 마지막 요소값: " << *(v1.end() -1) << endl;// end는 마지막 원소 전의 값을 불러온다 그래서 -1을해야함
//
//	return 0;
//}
///*
//	범위기반 for문의 i는 요소값을 가져와서 복사하여 저장한다.
//	i는 인덱스가 아니다.
//	v.begin()은 첫번째 주소 리턴
//	v.end()은 마지막 다음 주소를 리턴
//*/
//
//
//
