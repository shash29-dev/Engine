#include "Alpha.h"

class ExampleLayer : public Alpha::Layer
{
public:
    ExampleLayer() : Layer("Example") {}
    void OnUpdate() override
    {
        AL_INFO("ExampleLayer::Update");
    }

    void OnEvent(Alpha::Event &event) override
    {
        AL_TRACE("{0}", event);
    }
};

class Sandbox : public Alpha::Application
{
public:
    Sandbox()
    {
        PushLayer(new ExampleLayer());
    }

    ~Sandbox()
    {
    }
};

Alpha::Application *Alpha::CreateApplication()
{

    return new Sandbox();
}