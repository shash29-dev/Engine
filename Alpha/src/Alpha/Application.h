#pragma once

#include "Core.h"
#include "Window.h"
namespace Alpha
{
    class DECLSPEC Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();

    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    Application *CreateApplication();
}