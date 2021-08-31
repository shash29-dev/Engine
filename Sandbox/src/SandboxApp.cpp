#include "Alpha.h"

class ExampleLayer : public Alpha::Layer
{
public:
    ExampleLayer() : Layer("Example") {}
    void OnUpdate() override
    {
        // AL_INFO("ExampleLayer::Update");
        if (Alpha::Input::IsKeyPressed(AL_KEY_TAB))
            AL_TRACE("Tab Key pressed!");
    }

    void OnEvent(Alpha::Event &event) override
    {
        // AL_TRACE("{0}", event);
    }
};

class Sandbox : public Alpha::Application
{
public:
    Sandbox()
    {
        PushLayer(new ExampleLayer());
        PushOverlay(new Alpha::ImGuiLayer());
    }

    ~Sandbox()
    {
    }
};

Alpha::Application *Alpha::CreateApplication()
{

    return new Sandbox();
}