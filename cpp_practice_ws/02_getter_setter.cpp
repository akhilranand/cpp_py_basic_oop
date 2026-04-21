#include <iostream>
#include <string>
class Robot{
    public:
        void setRobotName(std::string name){
            this->name = name;
        }
        std::string getRobotName(){
            return this->name;
        }
    private:
        std::string name;
};

int main(){

    Robot r1;
    r1.setRobotName("r123");
    
    std::cout<< r1.getRobotName() <<std::endl;

    return 0;
}