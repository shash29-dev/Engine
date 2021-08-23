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

#define AL_CORE_ERROR(...) ::Alpha::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AL_CORE_WARN(...) ::Alpha::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AL_CORE_INFO(...) ::Alpha::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AL_CORE_TRACE(...) ::Alpha::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AL_CORE_FATAL(...) ::Alpha::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define AL_CLIENT_ERROR(...) ::Alpha::Log::GetClientLogger()->error(__VA_ARGS__)
#define AL_CLIENT_WARN(...) ::Alpha::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AL_CLIENT_INFO(...) ::Alpha::Log::GetClientLogger()->info(__VA_ARGS__)
#define AL_CLIENT_TRACE(...) ::Alpha::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AL_CLIENT_FATAL(...) ::Alpha::Log::GetClientLogger()->fatal(__VA_ARGS__)