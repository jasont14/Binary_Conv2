#include <iostream>
#include <string>

int  main(){
    int num;
    std::cout<<"Enter a number between 0...1023: ";
    std::cin>>num;    
    std::string result;

    for (int i = 512; i >= 1; i /= 2){
        int test = num / i;
        if (test == 1)
        {            
            num %= i;
        }
        result += std::to_string(test);    
    }
    
    std::cout<<result;
}