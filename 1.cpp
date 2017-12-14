// Example program
#include <iostream>
#include <string>

int main()
{
    //int practice
    int a=1;
    std::cout<<a<<std::endl;
    int b=2;
    std::cout<<a+b<<std::endl;
    
    //double and calculate circle
    double pi=3.14;
    double r=2;
    double L=pi*r*2.0;
    std::cout<<"L="<<L<<std::endl;
    
    //print name and if statement
    std::cout<< "what's your name?"<<std::endl;
    std::string n;
    std::cin>> n;
    std::cout<< "hello, "<<n<<std::endl;
    

    std::string trump = "stupid";
    std::cout<<"trump is "<<trump<<std::endl;
    std::string apple;
    std::cin >>apple;
    std::cout<<"apple is "<< apple <<std::endl;
    
    if (apple=="apple") {
        std::cout<<"pinapple"<<std::endl;
    } else {
        std::cout<<"banana"<<std::endl;
    }
}

。

int main()
{
    int b = 2;
    double premium = 0.05;
    double rf = 0.02;
    double r = rf + ( b*premium );
    std::cout << "the CAPM result is "<< r << std::endl;
    
    std::cout << "Welcome to your home, Yoyo" << std::endl;
    std::cout << "Can I help you?" << std::endl;
    std::string answer;
    std::cin >> answer;
    if ( answer=="yes" ) {
        std::cout << "What can I help?" <<std::endl;
    } else {
        std::cout << "ok then, wish you a lovely day!" <<std::endl;
    }
    
    std::cout << "Do you feel bored?" <<std::endl;
    std::string o;
    std::cin >> o;
    if ( o=="yes" ) {
        std::cout << "I feel sorry for that" << std::endl;
    }
    if ( o=="no") {
        std::cout << "that's great" << std::endl;
    }
}

#include <iostream>
#include <string>

int main () {
    std::cout << "Hi Yoyo, glad to see you here!" << std::endl;
    std::cout << "How was your day today?" << std::endl;
    std::string answer_1;
    std::cin >> answer_1;
    if (answer_1=="good"||"it's good"||"It's nice"||"fantastic"||"amazing"||"it's so happy") {
        std::cout << "Oh, then that's great!" << std::endl;
        std::cout << "Anything you wanna share with me?"<< std::endl;
        std::string answer_2;
        std::cin >> answer_2;
        std::cout << "Hmmmm it sounds like you will have a sweet dream tonight!" << std::endl;
    } else if (answer_1=="bad"||"it's bad"||"it's so bad"||"horrible"||"i wanna cry") {
        std::cout << "Hey, I'm really sorry to hear that" << std::endl;
        std::cout << "But what happened?" << " Do you mind tell me more?" << std::endl;
        std::string answer_3;
        std::cin >> answer_3;
        std::cout << "Oh, I see. That's really not good." << std::endl;
        std::cout << "But dont's worry. I'll stay with you all the time." << std::endl;
    } else {
        std::cout << "Really?? Then how do you feel now?" << std::endl;
    }
    
}

#include <iostream>
#include <string>

int main () {
    std::cout << "Hi Yoyo, glad to see you here!" << std::endl;
    std::cout << "How was your day today?" << std::endl;
    std::string answer_1;
    std::cin >> answer_1;
    if (answer_1=="good" || "fantastic"||"amazing") {
        std::cout << "Oh, then that's great!" << std::endl;
    } else if (answer_1=="bad") {
        std::cout << "Oh, I'm really sorry to hear that" << std::endl;
    } else {
        std::cout << "Really?? Then how do you feel now?" << std::endl;
    }
    
}
