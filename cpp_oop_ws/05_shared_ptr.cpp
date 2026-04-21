#include <iostream>
#include <memory>




int main(){
    std::shared_ptr<int>a = std::make_shared<int>(10);
    std::shared_ptr<int>b = a;
    std::cout<<*a;
    return 0;
}