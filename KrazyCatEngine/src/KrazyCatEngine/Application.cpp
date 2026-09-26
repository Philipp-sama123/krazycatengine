#include "Application.h"

#include <string>
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace KrazyCatEngine
{
    Application::Application()
    {
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        WindowResizeEvent e(1500, 720);
        if (e.IsInCategory(EventCategoryApplication))
        {
            KCE_CORE_TRACE(e.ToString());
        }
        if (e.IsInCategory(EventCategoryInput))
        {
            KCE_CORE_TRACE(e.ToString());
        }
        while (true);
    }
}
