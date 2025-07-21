//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//
//{
//	vector <int> v;	// std:: 에 속해있어서 적어야함 ㅇㅇ
//
//	cout << "[v[i], v. size(), v.capacity()]" << endl;
//	for (int i = 0; i <= 32; i++) {
//		v.push_back(i + 1);		// push_back은 값을 집어넣는다 
//		cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << " ]" << endl;
//		// capacity는 백터의 크기를 나타낸다 크기가 다차면 자동으로 할당해서 커진다
//	}
//	vector<int> v1;
//	v1.push_back(1);		// 순차적으로 원소를 삽입
//	v1.push_back(2);		
//	v1.push_back(3);
//	v1.insert(v1.begin(), 10);		// 처음에 삽입
//	v1.insert(find(v1.begin(), v1.end(), 3), 20);	// find 찾아라 begin부터 end까지 3원소를 찾아서 20넣기
//
//	v1.push_back(7);
//	v1.pop_back();	// 맨 마지막 원소 제거
//
//	for (auto i : v1) {
//		cout << i << endl;
//	}
//
//	return 0;
//}