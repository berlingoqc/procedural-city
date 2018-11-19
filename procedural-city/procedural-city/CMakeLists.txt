

file( COPY ${CMAKE_CURRENT_SOURCE_DIR}/textures ${CMAKE_CURRENT_SOURCE_DIR}/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

include_directories("${PROJECT_SOURCE_DIR}/libgl")

add_executable(procedural-city main.cpp)

target_link_libraries(procedural-city
    libgl
    ${OPENGL_LIBRARY}
    ${GLEW_LIBS}
    ${FREEGLUT_LIBS}
    ${SOIL_LIBS}
)