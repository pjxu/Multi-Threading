#pragma once
#include <thread>
#include <string>
using namespace std;
class Thread
{
public:
    Thread()
    {
        //
    }
    //Print Out Function 1
    void PrintOne()
    {
        printf_s("One\n");
    }
    //Print Out Function 2
    void PrintTwo()
    {
        printf_s("Two\n");
    }
    //Print Out Function 3
    void PrintThr()
    {
        printf_s("Three\n");
    }
};
