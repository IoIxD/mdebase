project(
	mdm
)

find_package(PkgConfig)
pkg_check_modules(X11 REQUIRED x11)

file(
	GLOB
	mdm_SRC
	*.c
)

add_executable(
	mdm
	${mdm_SRC}
)

target_include_directories(
	mdm
	PRIVATE
	${X11_INCLUDE_DIRS}
)

target_link_directories(
	mdm
	PRIVATE
	${X11_LIBRARY_DIRS}
)

target_link_libraries(
	mdm
	PRIVATE
	${X11_LIBRARIES} MDELib Mw
)

include(GNUInstallDirs)
install(
	TARGETS mdm
	RUNTIME DESTINATION ${CMAKE_INSTALL_SBINDIR}
)
