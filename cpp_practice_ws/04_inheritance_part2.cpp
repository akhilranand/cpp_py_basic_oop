#include<iostream>
#include <string>

class Robot {
    public:
        Robot(std::string name){
            this ->name = name;
        }
        std::string getName(){
            return this->name;
        }
    private:
    std::string name ;
};

class RobotDog : public Robot{
    public:
        RobotDog(std::string name , int count):Robot(name){
            this->count=count;
        }

        void getDetails(){
            std::cout << this->count << " and " << this->getName() <<std::endl;
        }

    private:
        int count ;

};

int main(){

    RobotDog r1("rb1435",10);
    r1.getDetails();

    return 0;
}