cmake_minimum_required (VERSION 3.8)

project ("procedural-city")


find_package(OpenGL REQUIRED)

set(GLEW_INCLUDE_PATH "" CACHE PATH "The directory that contains GL/glew.h" )
set(GLEW_LIBRARY "" CACHE FILEPATH "libglew.a or glew.lib" )

set(GLM_INCLUDE_PATH "" CACHE PATH "The directory that contains glm/glm.hpp" )

set(FREEGLUT_INCLUDE_PATH "" CACHE PATH "The directory that contains GL/freeglut.h" )
set(FREEGLUT_LIBRARY "" CACHE PATH "The directory that contains freeglut.lib" )

set(SOIL_INCLUDE_PATH "" CACHE PATH "The directory that contains SOIL.h" )
set(SOIL_LIBRARY "" CACHE PATH "The directory that contains SOIL.lib" )

set(SOIL_LIBS "SOIL")
set(FREEGLUT_LIBS "freeglut")
set(GLEW_LIBS "glew32")


link_directories(
    ${SOIL_LIBRARY}
    ${FREEGLUT_LIBRARY}
    ${GLEW_LIBRARY}
	${SOIL_LIBRARY}
)

include_directories(
	${GLEW_INCLUDE_PATH}
	${FREEGLUT_INCLUDE_PATH}
	${GLM_INCLUDE_PATH}
	${SOIL_INCLUDE_PATH}
)


# Incluez les sous-projets.
add_subdirectory ("libgl")
add_subdirectory ("procedural-city")

