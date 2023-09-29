#include <MatrixA3DCore/Application.hpp>
#include "MatrixA3DCore/Log.hpp"
#include "MatrixA3DCore/Window.hpp"



namespace MA {

    Application::Application()
    {
        LOG_INFO("Starting Application");
    }

    Application::~Application()
    {
        LOG_INFO("Closing Application");
    }

    int Application::start(unsigned int window_width, unsigned int window_height, const char* title)
    {
        m_pWindow = std::make_unique<Window>(title, window_width, window_height);

        while (true)
        {
            m_pWindow->on_update();
            on_update();
        }

        return 0;
    }

}