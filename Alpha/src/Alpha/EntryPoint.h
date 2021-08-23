#pragma once

extern Alpha::Application *Alpha::CreateApplication();

int main(int argc, const char **argv)
{
    auto app = Alpha::CreateApplication();
    app->Run();
    delete app;
}