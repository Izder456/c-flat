
cmake_minimum_required(VERSION 2.8.9 FATAL_ERROR)
project(directory_test)
set(CMAKE_BUILD_TYPE Release)
SET(CMAKE_CXX_FLAGS "-std=c++2a")
# In the above line we declared a variable sampleName and assigned it a value MyApp. We will make use of the same later.project(PrjMyApp)
# here we define the project or solution (for visual studio) name
# In following lines we try to find out the packages of additional libraries, if reqd. Here we are trying to locate PCL and mrpt library.
# u may replace the names by yours. Each such package should have a Cmake file in them, if not then we may have to manually define the paths.
# we Show that later.

# here we specify the additional include directories for the project. These files come in additional include directories option of VC++
# project.
# either the variable values from package like ${PCL_INCLUDE_DIRS} or absolute paths as shown in second and third line may be used.
include_directories(include)
file(GLOB SOURCES "src/*.cpp")
# The following line is very important.
# It specifies the executable name. Here the executable is the first parameter i.e. MyApp and a file MyApp.exe will be created on
# compilation in windows platform.
# Followed by the executable name come all your source and header files.
# All cpp fles will be clubbed into source folder and all .h files will be added to header files folder of the project.
add_executable (C-Flat_DEMO ${SOURCES})

# There may be some additional dependencies which you may have to specify for the project, which you may do as in following lines.
# Note that first parameter is the executable name.
# Add the required libraries for linking:
# This is filled by FIND_PACKAGE(MRPT ...)
# End of CMakeLists.Txt file. Save it as a plain text file and the name should be exactly CMakeLists.Txt
