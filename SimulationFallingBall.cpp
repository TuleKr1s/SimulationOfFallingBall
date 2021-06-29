#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void fallingBall() {
    std::cout << "From what height do we drop the ball? (In meters): ";
    double h_start;
    std::cin >> h_start;

    if (h_start <= 0.0)
    {
        std::cout << "The ball is already on the ground!\n";
        return;
    }

    const double g = 9.81;

    double t = 0.0;

    while (true)
    {
        t += 1.0;

        const double h_current = h_start - 0.5 * g * t * t;
        const double v_current = g * t;

        if (h_current <= 0.0)
        {
            std::cout << "After second " << t << ", the ball has reached the ground! Maximum speed: " << v_current << " m/s\n";
            break;
        }

        std::cout << "After second " << t << ", the ball is at a distance of " << h_current << " m from the ground at a speed: " << v_current << " m/s\n";
    }
}
int main() {
	system("chcp 1251>nul");
	fallingBall();
	return 0;
}
