#include <iostream>
using namespace std;

int main() {
	int H, M;
	int time;
	cin >> H >> M;
	cin >> time;

	int x = (M + time) / 60;
	int y = (M + time) % 60;

	if (x > 0 && (H + x) < 24) {
		cout << H + x << " " << y << endl;
	}
	else if (x > 0 && (H + x) >= 24){
		cout << (H + x - 24) << " " << y << endl;
	}
	else if (x <= 0) {
		cout << H << " " << y << endl;
	}
	return 0;
}
