#include "MatrixA3DCore/Window.hpp"
#include "MatrixA3DCore/Log.hpp"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace MA {

    static bool s_GLFW_initialized = false;

	Window::Window(std::string title, const unsigned int width, const unsigned int height)
		:m_title(std::move(title))
		, m_width(width)
		, m_height(height)
	{
		int resultCode = init();
	}
	Window::~Window()
	{
		shutdown();
	}

	int Window::init()
	{

        LOG_INFO("Creating window '{0}' widht size {1}x{2}", m_title, m_width, m_height);


        /* Initialize the library */
        if (!s_GLFW_initialized)
        {
            if (!glfwInit())
            {
                LOG_CRITICAL("Can't initialize GLFW!");
                return -1;
            }
            s_GLFW_initialized = true;
        };

        /* Create a windowed mode window and its OpenGL context */
        m_pWindow = glfwCreateWindow(m_width, m_height, m_title.c_str(), nullptr, nullptr);
        if (!m_pWindow)
        {
            LOG_CRITICAL("Can't create WINDOW '{0}' widht size {1}x{2}", m_title, m_width, m_height);
            glfwTerminate();
            return -2;
        }



        /* Make the window's context current */
        glfwMakeContextCurrent(m_pWindow);

        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
            LOG_CRITICAL("Failed to initialize GLAD ")
                return -3;
        }

        return 0;
	}
	void Window::shutdown()
	{
        glfwDestroyWindow(m_pWindow);
        glfwTerminate();
	}
	void Window::on_update()
	{
        glClearColor(1, 0, 0, 0);
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        /* Swap front and back buffers */
        glfwSwapBuffers(m_pWindow);
        /* Poll for and process events */
        glfwPollEvents();
	}
}
