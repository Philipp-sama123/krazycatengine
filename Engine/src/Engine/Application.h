#pragma once

#include "Core.h"
#include <iostream>


namespace Engine
{
    class KRAZYCATENGINE_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };
    
    Application* CreateApplication();
}
