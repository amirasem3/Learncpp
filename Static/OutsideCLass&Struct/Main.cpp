//this variable is only going to be linked internally inside this transation unit
//static just like an private variable or function in class
//NO ONE can see this variable from outside
static int s_Variable = 5;
//if we remove the static from up definition
//you get an error 
//we dont have global variables with same name 
int s_Variable = 5;
//same thing for functions
//Function is only visible for Another.cpp
static void Function(){

}
