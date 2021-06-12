# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES )
set(COMPONENT_PRIV_REQUIRES )

set(COMPONENT_SRCS "main.c" "hub75e/HUB75ELib.c" "hub75e/HUB75E_Hal.c")
set(COMPONENT_ADD_INCLUDEDIRS "hub75e")

register_component()
