#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i<=100; i++) {      // 1부터 100까지 출력
		if (i % 10 != 0) {                // 뒷자리가 1~9일 때는 탭('\t')으로 구분하고
			cout << i << '\t';
		}
		else
			cout << i << '\n';              // 뒷자리가 0일 때는 뉴라인('\n')으로 구분하여
	}                                   // 한 라인에 10개씩 10줄로 출력
	return 0;
}
