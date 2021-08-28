#include "Application.h"
#include "Alpha/Event/ApplicationEvent.h"
#include "Alpha/Log.h"

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
        WindowResizeEvent e(1280, 720);

        AL_TRACE(e);
        while (true)
        {
            /* code */
        }
    }
} // namespace Alpha
