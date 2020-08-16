#include<iostream>
//without static variable
void Function(){
    int i2 = 0; 
    i2++;
    std::cout << i2 << std::endl; 
}
//with static variable have lifetime and limit to Function2 scope
void Function2(){
    static int i = 0;  
    i++;
    std::cout << i << std::endl; 
}
//if we define variable glonbally
int i3 = 0 ;
void Function3(){
    i3++;
    std::cout << i3 << std::endl; 
}
class Singleton{
private:
    static Singleton* s_Instance;
public:
    static Singleton& Get(){return *s_Instance;}
    void Hello(){}
  
};
//lot cleaner code
class Singleton2{
public:
    static Singleton2& Get(){
        static Singleton2 instance;
        return instance;
    }
};
Singleton* Singleton::s_Instance  = nullptr; 
int main(){
//if we call Function several times
Function();
Function();
Function();
Function();
Function(); 
//in output we gave five "1" because in every call , we make new i variable and increased it by one
//after we make
Function2();
Function2();
Function2();
Function2();
Function2();
//now if we call Function3 5 times:
Function3();
Function3();
Function3();
Function3();
Function3();
//we get 1 2 3 4 5 in output like "Function2()"
//but if we want use i3 have problem because we can access to it 
//every where
//STATIC LOCAL SCOPE : resolve Global variable problem(singleton Class)
//now with singleton have below code 
Singleton::Get().Hello();
//instead of codeing this way we can 
}