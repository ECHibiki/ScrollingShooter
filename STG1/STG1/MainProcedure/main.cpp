#include<glad\glad.h>
#include<GLFW\/glfw3.h>
#include <iostream>
#include <string>

using namespace std;

#include "Window.h"
#include "GameInitializer.h"

const int width = 800;
const int height = 800;

const string map1 = "Externals/Maps/Map1.txt";

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width-200, height-200);
}

void processInput(GLFWwindow *window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}


void main() {
	glfwInit();
	Window window(width,height, "STG1.0");

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return;
	}
	GameInitializer game_initializer(map1);

	glViewport(0,0,width,height);//

	glfwSetFramebufferSizeCallback(window.window, framebuffer_size_callback);

	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	while (!glfwWindowShouldClose(window.window))
	{
		processInput(window.window);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window.window);
		glfwPollEvents();

	}

	glfwTerminate();
	return;
}