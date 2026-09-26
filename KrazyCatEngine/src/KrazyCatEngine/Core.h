#pragma once

#ifdef KCE_PLATFORM_WINDOWS
    #ifdef KCE_BUILD_DLL 
        #define KRAZYCATENGINE_API __declspec(dllexport)
    #else
        #define KRAZYCATENGINE_API __declspec(dllimport)
    #endif
#elif defined(KCE_PLATFORM_MACOS)
    #define KRAZYCATENGINE_API
#else
    #error KrazyCatEngine only supports Windows and macOS!
#endif

#define BIT(x) (1 << x)