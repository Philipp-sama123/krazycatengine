#pragma once

#include "Core.h"
#include <iostream>
#include "Events/Event.h"


namespace KrazyCatEngine
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
