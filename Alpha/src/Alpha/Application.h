#pragma once

#include "Core.h"
#include "Window.h"
#include "Alpha/Event/ApplicationEvent.h"

namespace Alpha
{
    class DECLSPEC Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
        void OnEvent(Event &e);

    private:
        bool OnWindowClosed(WindowCloseEvent &e);
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    Application *CreateApplication();
}