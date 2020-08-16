#include<iostream>

#define LOG(x) std::cout << x << std::endl;
//we can use struct as class 
#define struct class
//define class for player
class Player{
    //class variable
    //use public keyword to resolve visiblity exceptio
public:
    int x ,y = 0;
    int speed = 3 ;
    //write function for modify the player variable(Mathod2)
    void Move(int xa, int ya){
        x += xa * speed;
        y += ya * speed;
    }
};

//write function for modify the player variable(Mathod1)
void Move(Player& player , int xa , int ya){
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}
//Struct ply
struct Ply
{
//DONT NEED public:
//if we want private struct should use private:
private:
    int x ,y = 0;
    int speed = 3 ;
    //write function for modify the player variable(Mathod2)
    void Move(int xa, int ya){
        x += xa * speed;
        y += ya * speed;
        }
};
//use struct for creating satructure
//example : Struct hold 2 float together
//advice1 : NEVER USE STRUCT WITH INHERITANCE  
struct Vec2
{
    float x , y;
    void Add(const Vec2& other){
        x += other.x;
        y += other.y;
    }
};

int main(){
    Player player;
    //below line raise error for visibility 
    player.x = 5;
    LOG(player.x);
    //use function for MOVE player
    Move(player , 12, 18);
    LOG(player.x);
    LOG(player.y);
    player.Move(2 , 5);
    LOG(player.x);
    LOG(player.y);
    //Throw here : Class in C++
    //CLASSES vs STRUCTS in C++
    //actually does not have huge difference 
    //JUST DIFFERENT IN VISIBILITY
    //actually class is PRIVATE by default
    //but Struct is PUBLIC by default
    //struct exist in cpp for backward compatibility
    //*********************************************
    
    

}