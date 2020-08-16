#include<iostream>

#define LOG(x) std::cout << x << std::endl;
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
}