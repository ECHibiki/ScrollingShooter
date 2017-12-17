#include<glad\glad.h>
#include<GLFW\/glfw3.h>
#include <iostream>

#include "Window.h"

const int width = 800;
const int height = 800;

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width-200, height-200);
}

void main() {
	glfwInit();
	Window window(width,height, "STG1.0");

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return;
	}

	glViewport(0,0,width,height);//

	glfwSetFramebufferSizeCallback(window.window, framebuffer_size_callback);

	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);

	while (!glfwWindowShouldClose(window.window))
	{
		glfwSwapBuffers(window.window);
		glfwPollEvents();
		glClear(GL_COLOR_BUFFER_BIT);
	}

	glfwTerminate();
	return;
}