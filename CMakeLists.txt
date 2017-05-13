cmake_minimum_required (VERSION 2.6)
project (Quiz)
configure_file(quiz_1.txt quiz_1.txt COPYONLY)
configure_file(quiz_2.txt quiz_2.txt COPYONLY)
configure_file(quiz_3.txt quiz_3.txt COPYONLY)
add_executable(Quiz main.cpp operating_functions.cpp question.cpp quiz.cpp)


	enable_testing()
	find_package(GTest REQUIRED)
	add_executable(Quiz_test main_test.cpp operating_functions.cpp question.cpp quiz.cpp)
	target_link_libraries(Quiz_test ${GTEST_BOTH_LIBRARIES} pthread)
