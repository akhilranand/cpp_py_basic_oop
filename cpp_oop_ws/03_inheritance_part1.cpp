#include <iostream>

class Robot{
    public:
        void robotSound(){
            std::cout<<"basic robot sound" <<std::endl;
        }
    private:
};

class RobotDog : public Robot{
    
};

int main(){
    RobotDog rd1;
    rd1.robotSound();
    return 0;
}