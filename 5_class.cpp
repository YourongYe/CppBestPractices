// Example program
#include <iostream>
#include <string>

class Human{
private:
    int m_hand;
    int m_leg;
    std::string m_name;

public:
    void setHand(int hand){
        m_hand = hand;    
    }
    
    void printInfo(){
        std::cout<<"Hello, "<<m_name<<std::endl;
        std::cout<<"your hand num is :"<<m_hand<<std::endl; 
        std::cout<<"your leg num is  :"<<m_leg<<std::endl;
    }
    
    void setLeg(int leg){
        m_leg = leg;    
    }
    
    void setName(std::string name){
        m_name = name;
    }
    
    void eat(){
        std::cout<<m_name<<" is eating with "<<m_hand<<" hands!"<<std::endl;    
    }
    
    void play(){
        std::cout<<m_name<<" is playing with "<<m_leg<<" legs!"<<std::endl;
    }
    
    int brainCalculate(int a){
        return a+1;
    }
};

int main()
{
    Human a;
    a.setHand(2);
    a.setLeg(3);
    a.setName("yoyo");
    a.printInfo();
    a.play();
    a.eat();
    
    
    Human b;
    b.setHand(3);
    b.setLeg(0);
    b.setName("mincong");
    b.eat();
    b.play();
    int result = b.brainCalculate(3);
    std::cout<<result<<std::endl;
}


