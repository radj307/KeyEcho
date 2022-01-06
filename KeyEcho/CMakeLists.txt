# KeyEcho/KeyEcho
cmake_minimum_required (VERSION ${CMAKE_MINIMUM_VERSION})

set(HEADERS
	""
)

set(SRCS
	"main.cpp"
)

add_executable (KeyEcho ${SRCS})
set_property(
	TARGET KeyEcho
	PROPERTY CXX_STANDARD 20
)

target_link_libraries(KeyEcho PUBLIC shared strlib TermAPI optlib)

