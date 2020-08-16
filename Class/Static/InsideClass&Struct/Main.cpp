#include<iostream>
//we can use class does not matter
struct Entity{
    int x , y ;

    void Print(){
        std::cout << x << "," << y << std::endl;

    }
};

int main(){
    Entity e ;
    e.x = 2;
    e.y = 3;
    //define entity with specific initial value
    Entity e1 = {5 , 8 };
    e.Print();
    e1.Print();
}