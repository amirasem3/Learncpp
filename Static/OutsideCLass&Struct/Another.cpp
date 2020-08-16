#include <iostream>

//create global variable
// int s_Variable = 10;
//Resolve Error : add extern keyword to difination
extern int s_Variable = 10;

void Function(){

}
int main(){
    std::cout << s_Variable << std::endl;
     
}