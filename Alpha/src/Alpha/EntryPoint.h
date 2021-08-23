#pragma once

extern Alpha::Application *Alpha::CreateApplication();

int main(int argc, const char **argv)
{
    Alpha::Log::Init();
    AL_CORE_WARN("Initialized Core Log");
    AL_CLIENT_INFO("Initialized Client log");
    int bb = 90;
    AL_CLIENT_TRACE("Hello, Var={0}", bb);
    auto app = Alpha::CreateApplication();
    app->Run();
    delete app;
}