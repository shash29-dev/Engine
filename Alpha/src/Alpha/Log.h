#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
namespace Alpha
{
    class DECLSPEC Log
    {

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    public:
        Log();
        ~Log();

        static void Init();
        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }
    };
} // namespace Alpha
