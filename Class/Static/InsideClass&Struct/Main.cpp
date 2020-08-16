#include<iostream>
//we can use class does not matter
struct Entity{
    //int x , y ;
    //now we use static variable 
    static int x , y;
    void Print(){
        std::cout << x << "," << y << std::endl;

    }
};

int Entity::x;
int Entity::y;

int main(){
    Entity e ;
    e.x = 2;
    e.y = 3;
    //define entity with specific initial value
    //if we make x , y static get an error in initializer
    //because we should initialize them 
    Entity e1;
    e1.x = 8;
    e1.y = 5;

    // e.Print();
    // e1.Print();
    //if we want write code correctly 
    Entity e2;
    Entity::x = 2;
    Entity::y = 3;

    Entity e3;
    Entity::x = 5;
    Entity::y = 8;

    e2.Print();
    e3.Print(); 

}