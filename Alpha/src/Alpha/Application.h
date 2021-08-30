#pragma once

#include "Core.h"
#include "Window.h"
#include "Alpha/Event/ApplicationEvent.h"
#include "Alpha/LayerStack.h"
#include "Alpha/Event/Event.h"

namespace Alpha
{
    class DECLSPEC Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
        void OnEvent(Event &e);
        void PushLayer(Layer *layer);
        void PushOverlay(Layer *layer);
        inline Window &GetWindow() { return *m_Window; }
        static inline Application &Get() { return *s_Instance; }

    private:
        bool OnWindowClosed(WindowCloseEvent &e);
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
        LayerStack m_LayerStack;
        static Application *s_Instance;
    };

    Application *CreateApplication();
}