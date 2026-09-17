#pragma once

#ifdef KCE_PLATFORM_WINDOWS
#include "Application.h"

extern KrazyCatEngine::Application* KrazyCatEngine::CreateApplication();


int main()
{
    std::cout << "KrazyCatEngine is Starting" << std::endl;
    auto app = KrazyCatEngine::CreateApplication();
    app->Run();
    delete app;

    return 0;
}


#endif
