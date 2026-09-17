#include "Application.h"

#include <string>

namespace KrazyCatEngine
{
    Application::Application()
    {
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        std::string name;
        std::cout << "Gimme your name: " << '\n';
        std::cin >> name; 
        std::cout << "KrazyCatEngine is Running for you " + name << '\n';
    }
}
