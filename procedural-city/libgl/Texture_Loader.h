#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include <SOIL.h>
#include <vector>
#include <iostream>

namespace texCore
{
	class Texture_Loader
	{
	private:
		int width, height, canaux;

		unsigned char* ReadImage(char *filename);
	
	public:
		Texture_Loader(void);
		~Texture_Loader(void);

		GLuint CreateTexture2D(char* textureImageName, GLint wrapS, GLint wrapT, GLint minFilter, GLint magFilter, GLint imgFormat);
		//GLuint CreateTransparentTexture2D(char* textureImageName, GLint wrapS, GLint wrapT, GLint minFilter, GLint magFilter);
		GLuint CreateSkyboxTexture(std::vector<char*> faces);
	};
}


