#include <iostream>

//int add(int a, int b)		// 다중정의보다는 템플릿을 사용해라 함수 다형성을이용해서 나타냄
//{
//	return a + b;
//}
//
//double add(double a, double b)
//{
//	return a + b;
//}

template <typename T>	// 함수 템릿-함수다중정의보다는 템플릿으로
T add(T a, T b)
{
	return a + b;
}
int main()
{
	std::cout << add(3, 4) << std::endl;
	std::cout << add(3.3, 4.4) << std::endl;
	return 0;
}