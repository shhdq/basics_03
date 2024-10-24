#include <iostream>
using namespace std;

class ElectricSkateboard {

    public:
    string name;
    int speed = 0;

    void speedUp() {
        speed = speed + 5;

        if (speed > 20 || speed < 0) {
            speed = 20;
        }


        cout << name << " paatrinas. Atrums tagad: " << speed << endl;

    }

    void slowDown() {
        speed = speed - 5;

        if (speed < 0) {
            speed = 0;
        }

        cout << name << " palelinas. Atrums tagad: " << speed << endl;
    }

    int currentSpeed() {
        return speed;
    }
};


int sum(int x, int y) {
    return x + y;
}




int main()
{

   cout << sum(1, 1) << endl;


    return 0;
}
