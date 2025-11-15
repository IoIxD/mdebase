project(
	mdm
)

file(
	GLOB
	mdm_SRC
	*.c
)

add_executable(
	mdm
	${mdm_SRC}
)

target_link_libraries(
	mdm
	PRIVATE
	MDELib
)

include(GNUInstallDirs)
install(
	TARGETS mdm
	RUNTIME DESTINATION ${CMAKE_INSTALL_SBINDIR}
)
