#pragma once

#ifdef KCE_PLATFORM_WINDOWS
#include "Application.h"

extern Engine::Application* Engine::CreateApplication();


int main(int argc, char** argv)
{
    Engine::Log::Init();
    KCE_CORE_WARN("Initialized Core Logger");
    KCE_CLIENT_INFO("Hello Client");
    KCE_CORE_ERROR("Core ERROR");
    
    std::cout << "KrazyCatEngine is Starting" << std::endl;
    
    auto app = Engine::CreateApplication();
    app->Run();
    delete app;

    return 0;
}


#endif
