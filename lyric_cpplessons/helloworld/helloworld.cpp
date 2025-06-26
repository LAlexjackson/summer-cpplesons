// helloworld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct Lee
{
    Lee() = default;
    ~Lee() = default;
    Lee(const Lee& Other) = delete;
    Lee(Lee&& Other) = delete;

    const char* Name = "Lyric";
    int Age = 9;
    float Weight = 30.f;
    float Height = 40.f;   
    double gpa=3.4;
    uint32_t Grade = 5;
    uint64_t yearborn = 2015;
    const  char* favoriteteachersname = "Mrs.amato";
        
    uint16_t howmanydaysofschoolleft = 183 * (12 - Grade);




    void print()
    {
        std::cout << "My Name:" << Name << std::endl;
        std::cout << "My Age:" << Age << std::endl;
        std::cout << "My Weight:" << Weight << std::endl;
        std::cout<<"My Height;" <<Height<<std::endl;
         
        std::cout << "I'm in Grade" << Grade << std::endl;
        std::cout << "I was born in" << yearborn << std::endl;
        std::cout << "My gpa is" << gpa << std::endl;
        std::cout << "My favorite teachers name is" << favoriteteachersname << std::endl;
        std::cout << "I have" << howmanydaysofschoolleft << "days of school left"<< std::endl;


    }
};

int main()
{
    std::cout << "have a nice day!\n";
    std::cout << "this is lee world!\n";
    Lee myinfo;



    
    myinfo.print();
}   





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
