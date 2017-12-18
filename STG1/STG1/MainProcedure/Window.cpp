#include "Window.h"

#include<glad\glad.h>
#include<GLFW\/glfw3.h>

#include <iostream>
Window::Window(int width, int height, char* name)
{
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
#endif

	GLFWwindow* window = glfwCreateWindow(width, height, name, NULL, NULL);
	if (window == NULL) {
		std::cout << "Window error";
		glfwTerminate();
		return;
	}
	glfwMakeContextCurrent(window);
	this->window = window;
}


Window::~Window()
{
}
