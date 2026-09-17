#include <KrazyCatEngine.h>

class Sandbox : public KrazyCatEngine::Application
{
public: 
    Sandbox() {

    }

    ~Sandbox() {
        
    }
};
KrazyCatEngine::Application* KrazyCatEngine::CreateApplication()
{
    return new Sandbox();
}