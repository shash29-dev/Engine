#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <iostream>
namespace Alpha
{
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_ClientLogger;
    Log::Log()
    {
    }
    Log::~Log()
    {
    }

    void Log::Init()
    {
        try
        {
            spdlog::set_pattern("%^[%T] %n: %v%$");
            s_CoreLogger = spdlog::stdout_color_mt("Alpha");
            s_CoreLogger->set_level(spdlog::level::trace);
            s_ClientLogger = spdlog::stdout_color_mt("App");
            s_ClientLogger->set_level(spdlog::level::trace);
            spdlog::info("WELCOME TO ALPHA");
        }
        catch (const std::exception &e)
        {
            spdlog::error("Catched... Failed to connect to API!");
            std::cout << e.what() << "\n";
        }
    }
}