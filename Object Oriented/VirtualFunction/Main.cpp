#include<iostream>
#include<string>

class Entity
{
public:
    virtual std::string GetName() {return "Entity";}
};
class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name){ }
    std::string GetName() override {return m_Name;}
};
void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}
int main()
{
     Entity* e = new Entity();
     std::cout << e->GetName() << std::endl;

     Player* p = new Player("AmirHossein");
     std::cout << p->GetName() << std::endl;

     //if use PrintName function
     PrintName(p);
     PrintName(e);
     // we see Entity in output twice
     // to resolve this problem add virtual before method definition
     //IN ENTITY CLASS
     // the other way is using override keyword
     //IN PLAYER CLASS
     
}
