#pragma once

#if defined(KCE_PLATFORM_WINDOWS) || defined(KCE_PLATFORM_MACOS)
#include "Application.h"

extern KrazyCatEngine::Application* KrazyCatEngine::CreateApplication();


int main(int argc, char** argv)
{
    KrazyCatEngine::Log::Init();
    KCE_CORE_WARN("[EntryPoint] main Initialized Core Logger");
    KCE_CLIENT_INFO("[EntryPoint] main Hello Client");
    KCE_CORE_ERROR("[EntryPoint] main Core ERROR");
    
    auto app = KrazyCatEngine::CreateApplication();
    app->Run();
    delete app;

    return 0;
}


#endif
