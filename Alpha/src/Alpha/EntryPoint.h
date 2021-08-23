#pragma once

extern Alpha::Application *Alpha::CreateApplication();

int main(int argc, const char **argv)
{
    Alpha::Log::Init();
    auto app = Alpha::CreateApplication();
    app->Run();
    delete app;
}