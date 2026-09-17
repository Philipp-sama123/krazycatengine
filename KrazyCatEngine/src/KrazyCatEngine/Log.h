#pragma once
#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace KrazyCatEngine
{
    class Log
    {
    public:
        static KRAZYCATENGINE_API void Init();

        static KRAZYCATENGINE_API std::shared_ptr<spdlog::logger>& GetCoreLogger();
        static KRAZYCATENGINE_API std::shared_ptr<spdlog::logger>& GetClientLogger();

    private:
        static std::shared_ptr<spdlog::logger> s_coreLogger;
        static std::shared_ptr<spdlog::logger> s_clientLogger;
    };
}
// Core Log Macros
#define KCE_CORE_FATAL(...)     ::KrazyCatEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define KCE_CORE_ERROR(...)     ::KrazyCatEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KCE_CORE_WARN(...)      ::KrazyCatEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KCE_CORE_INFO(...)      ::KrazyCatEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KCE_CORE_TRACE(...)     ::KrazyCatEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client Log Macros
#define KCE_CLIENT_FATAL(...)     ::KrazyCatEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define KCE_CLIENT_ERROR(...)     ::KrazyCatEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define KCE_CLIENT_WARN(...)      ::KrazyCatEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KCE_CLIENT_INFO(...)      ::KrazyCatEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define KCE_CLIENT_TRACE(...)     ::KrazyCatEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
