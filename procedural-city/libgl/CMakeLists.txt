

set ( HEADER_FILES House_Maker.h Shader_Loader.h Texture_Loader.h )
set ( SOURCE_FILES House_Maker.cpp Shader_Loader.cpp Texture_Loader.cpp )

add_library( libgl ${HEADER_FILES} ${SOURCE_FILES})
