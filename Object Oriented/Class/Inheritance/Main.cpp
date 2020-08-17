#include<iostream>


class Entity{
public: 
    float X , Y;

    void Move(float xa , float ya){
        X += xa;
        Y == ya;
    }
};
//as we can see most of player class have same code to Entity
//so we can use INHERITANC
class Player : public Entity 
{
//now we can comment dublicated code
//all public variable and function in Entity class 
//accessable from Player
public:
    const char* Name;
    // float X , Y;

    // void Move(float xa , float ya){
    //     X += xa;
    //     Y += ya;
    // }

    void PrintName(){
        std::cout << Name << std::endl;
    }
};
class Player2
{
//now we can comment dublicated code
//all public variable and function in Entity class 
//accessable from Player
public:
    const char* Name;
    // float X , Y;

    // void Move(float xa , float ya){
    //     X += xa;
    //     Y += ya;
    // }

    void PrintName(){
        std::cout << Name << std::endl;
    }
};
int main(){
    Player p;
    p.Move(5 , 5);
    p.X = 2.0f;
    //if we print Entity size 
    std::cout << sizeof(Entity) << std::endl;
    //SIZEOF Player
    std::cout << sizeof(Player) << std::endl;
    //SIZEOF Player (without Inheritance)
    std::cout << sizeof(Player2) << std::endl;

}