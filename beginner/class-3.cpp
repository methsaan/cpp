//get user input for speed
#include <iostream>
using namespace std;

class train {
    public:
        void goForward(int speed_){
            cout << "This is the public go_forward function" << endl;
            cout << "Going forward at speed " << speed_ << endl;
            if( speed > 100 ) {
                 stopNow();
            }
        }
        int getSpeed() {
            return speed;
        }
        void setSpeed(int mainSpeed) {
            speed = mainSpeed;
        }

    private:
        int speed;
        void stopNow() {
            cout << "Stopping the train as it has reached the " << speed<< endl;
        }
};

class getUserInput {
    public:
        int getSpeed() {
            int speed;
            cout << "Enter forward speed: ";
            cin >> speed;
            return speed;
        }
};
int main(int argc, char *argv[]){
    train trainObject;
    getUserInput speedInput;
    trainObject.setSpeed(speedInput.getSpeed());
    trainObject.goForward(speedInput.getSpeed());
}
