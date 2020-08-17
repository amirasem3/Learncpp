#include<iostream>
#include<string>

class Entity
{
// private:
//     int X , Y;
protected:
    int X , Y;
public: 
    Entity(){
        X = 0;
    }
    
};
class Player : public Entity
{
public:
    Player()
    {
        X = 2;
    }
};

int main(){
    Entity e;
    // e.X = 2;
    //you get error because you cant access to X 
    //its private
}