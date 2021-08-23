#pragma once

extern Alpha::Application *Alpha::CreateApplication();

int main(int argc, const char **argv)
{
    Alpha::Log::Init();
    Alpha::Log::GetCoreLogger()->warn("Initialized Core Log");
    Alpha::Log::GetClientLogger()->info("Initialized Client log");
    auto app = Alpha::CreateApplication();
    app->Run();
    delete app;
}