#include <iostream>

class Robot{
    public:
        void robotName(){
            std::cout << "ro-301" << std::endl;
        }
    private:
};

int main(){

    Robot r1;
    r1.robotName();


    return 0;
}