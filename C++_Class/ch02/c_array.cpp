#include <iostream>

using namespace std;

int main()
{
	int scores[5] = {50, 60, 70, 80, 90};

//	int sz = sizeof(scores) / sizeof(scores[0]);
//  ㄴ>	 sizeof(scores) => 20반환(4byte 가 5개이기때문),
//  	sizeof(int(배열이 정수타입으로 저장되었기때문) or scores[0](엘리먼트 하나의 크기로 나눔)) => 4반환;
	int sz = size(scores);

	int s = 0;
	for (int i = 0; i < sz; i++) {
		s += scores[i];
	}
 
	float m = (float) s / sz;

	cout << "Mean score: " << m << endl;
}