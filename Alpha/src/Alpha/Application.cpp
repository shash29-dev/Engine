#include "Application.h"
#include <iostream>
namespace Alpha
{
    Application::Application()
    {
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        while (true)
        {
            std::cout << "Hello from Alpha!!!" << std::endl;
        }
    }
} // namespace Alpha
