#include <gl/glew.h>
#include "shader.hpp"
#pragma once

class Renderer
{
    GLuint vertexArrayID;
    GLuint vertexBufferID;
    GLuint programID;
    
public:
    Renderer();
    ~Renderer();
    
    void Initialize();
    void Draw();
    void Cleanup();
};
