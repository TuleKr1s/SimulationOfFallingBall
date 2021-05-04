#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int timeFallingBall() {
	static int time(0);
	return ++time;
}
void fallingBall() {
	cout << "From what height do we drop the ball? (In meters): ";
	double h;
	cin >> h;
	double v = 0, high = 0, s = 0, maxv = 0, g = 9.8;
	int t = 0;
	double hi = h;
	while (h) {
		t = timeFallingBall();
		v = static_cast<double>(t) * g;
		high = (v * static_cast<double>(t)) / 2;
		h = hi - high;
		if (h <= 0) {
			switch (t) {
			case 1:
				cout << "After " << t << " second the ball has reached the ground! Maximum speed: " << maxv << " m/s";
				break;
			default:
				cout << "After " << t << " seconds the ball has reached the ground! Maximum speed: " << maxv << " m/s";
			}
			break;
		}
		switch (t) {
		case 1:
			cout << "After " << t << " second, the ball is at a distance of " << h << " m from the ground at a speed: " << v << " m/s" << endl;
			break;
		default:
			cout << "After " << t << " seconds, the ball is at a distance of " << h << " m from the ground at a speed: " << v << " m/s" << endl;
			break;
		}
		if (v > maxv) {
			maxv = v;
		}
	}
}
int main() {
	system("chcp 1251>nul");
	fallingBall();
	return 0;
}