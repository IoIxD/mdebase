project(
	mpanel
)

file(
	GLOB
	mpanel_SRC
	*.c
)

add_executable(
	mpanel
	${mpanel_SRC}
)

target_link_libraries(
	mpanel
	PRIVATE
	MDELib
)
if(${CMAKE_SYSTEM_NAME} STREQUAL Linux)
	target_link_libraries(
		mpanel
		PRIVATE
		dl
	)
endif()

include(GNUInstallDirs)
install(
	TARGETS mpanel
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
