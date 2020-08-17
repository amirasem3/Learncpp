#include<iostream>
#include<array>
class Entity
{
public:
//if size non staic then we gave an error because 
//make array in stack in specific size 
//size should be decleared in COMPILE TIME
    static const int size = 5;
    int* example = new int[size];
    Entity(){
         for(int i = 0 ; i < 5 ; i++){
        example[i] = 3;
    }
    }
};
int main(){
    //array of 5 integer
    //array is a pointer to mem contains 5 integer
    //example created in stack and destroyed when program terminated
    int example[5];
    int* ptr = example;
    std::cout<<"Size of example  :"<<sizeof(example) << std::endl;
    std::cout<<"Count of exmaple :"<<sizeof(example) / sizeof(int) << std::endl;

    
    example[0] = 2;
    example[4] = 4;
    //arithmetic dealing with pointers
    *(ptr+2) = 6;
    //another created in heap and destroyed when using "delete" keyworld 
    int* another = new int[5];
    for(int i = 0 ; i < 5 ; i++){
        example[i] = 5;
    }
    delete[] another;
    //using standard array 
    std::array < int , 5> another2;
    for (int i = 0 ;i<another2.size(); i++){
        another2[i] = 2;
    }
   

    std::cout << example[2] << std::endl;
    std::cout << example << std::endl;
}