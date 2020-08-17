#include<iostream>

class Entity{
public:
    float X , Y;
    void Init(){
        X = 0.0f;
        Y = 0.0f;
    }
    void Print(){
        std::cout << X << ", " << Y << std::endl;
    }
};
class Entity2{
public:
    float X , Y;
    //define constructor:
    Entity2 (){
        X = 0.0f;
        Y = 0.0f;
    }
    //define constructor with parameter ;
    Entity2(float x , float y){
        X = x;
        Y = y;
    }
    void Init(){
        X = 0.0f;
        Y = 0.0f;
    }
    void Print(){
        std::cout << X << ", " << Y << std::endl;
    }
};

class Log{
private:
//if we want no body can  build an object from class 
//hide constructor by make it private 
    Log(){}
public:
    static void Write(){
        
    }
};
class Log2{
public:
//we want no one can build an object from Log2
//tell to compiler that we dont want default constructor 
Log2() = delete;
    static void Write(){
        
    }
};

int main(){
    Entity e; 
    e.Print();
    //if we run code throw here we see randon float in output
    //because when we create instance from Entity and
    //allocate mem for it 
    //WE DIDNT ACTUALLY INITIALIZE THAT MEMORY 
    //meaning we got what ever left over in that mem space
    //SHOULD INITIALIZE MEM and SET IT TO ZERO or ....
    //if we print X in e : 
    std::cout << e.X << std::endl;
    // we get an error 
    //to resolve : define Init function in Entity class
    //after create Init:
    Entity e2;
    e2.Init();
    e2.Print();
    //we can see 0,0 in output no random float
    //BUT NOT CLEAN APPROACH 
    //WE USE CONSTRUCTORS : 
    Entity2 e3;
    e3.Print();
    //we see same reult in output with lesser code and cleaner
    //after define constructor with parameter : 
    Entity2 e4(10.0f , 15.3f);
    e4.Print();
    //after create Log class: 
    Log::Write();
    // Log i ; 
    //in line 75 you get error because constructor is not accessable
    //after define LOg2 class
    //Log2 p;
    //in line 87 we get error because default constructor does not exist

     
}   