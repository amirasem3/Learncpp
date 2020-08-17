#include<iostream>
#include<string>
class Printable
{
public:
    virtual std::string GetClassName() = 0;
};
class Entity : public Printable
{
public:
    virtual std::string GetName() {return "Entity";}
    //we want force subclass to implement method
    //create pure virtual function
    // virtual std::string GetName2() = 0;
    std::string GetClassName() override {return "Entity";}

};
class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name){ }
    std::string GetName() override {return m_Name;}
    // std::string GetName2() override {return m_Name;}
    std::string GetClassName() override {return "Player";}
};
void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}
//define function with input does not have type
void Print(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}

class A : public Printable
{   
public :
    std::string GetClassName() override {return "A";}
};
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
     Print(e);
     Print(p);
     Print(new A());
     
     
}
