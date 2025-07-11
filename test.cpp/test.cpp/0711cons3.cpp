// 이동생성자: 우측값 레퍼런스를 파라미터로 갖는 이동생성자(T&&)
#include <iostream>

int main()
{
	int n = 10;
	int& rn = n;

	const int& rrn = 10;

	return 0;
}