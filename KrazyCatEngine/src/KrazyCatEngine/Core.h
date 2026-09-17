#pragma once

#ifdef KCE_PLATFORM_WINDOWS
    #ifdef KCE_BUILD_DLL 
        #define KRAZYCATENGINE_API __declspec(dllexport)
    #else
        #define KRAZYCATENGINE_API __declspec(dllimport)
    #endif
#else
    #error KrazyCatEngine only supports the Windows platform!
#endif
