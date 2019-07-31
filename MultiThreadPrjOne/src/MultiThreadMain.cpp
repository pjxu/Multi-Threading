#include "Print.h"
Thread m_thread;
void Run1()
{
    m_thread.PrintOne();
}
void Run2()
{
    m_thread.PrintTwo();
}
void Run3()
{
    m_thread.PrintThr();
}

//main Function
int main()
{
    thread th2(Run2);
    thread th1(Run1);
    thread th3(Run3);
    if (th1.joinable())
    {
        th1.join();
    }
    if (th2.joinable())
    {
        th2.join();
    }
    if (th3.joinable())
    {
        th3.join();
    }
    system("pause");
    try
    {
        th1.detach();
        th2.detach();
        th3.detach();
    }
    catch (const std::exception&)
    {
        printf_s("Detaching Error\n");
    }
    system("pause");
}