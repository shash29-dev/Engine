#include "Application.h"
#include "Alpha/Event/ApplicationEvent.h"
#include "Alpha/Log.h"

namespace Alpha
{
    Application::Application()
    {
        m_Window = std::unique_ptr<Window>(Window::Create());
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {

        while (m_Running)
        {
            m_Window->OnUpdate();
        }
    }
} // namespace Alpha
