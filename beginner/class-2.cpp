#include <iostream>
using namespace std;

class train {
    public:
        void goForward(){
            cout << "This is the public go_forward function" << endl;
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

int main(int argc, char *argv[]){
    train trainObject;
    trainObject.setSpeed(150);
    trainObject.goForward();
}
