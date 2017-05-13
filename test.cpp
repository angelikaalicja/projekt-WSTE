=================================================

std::streambuf* orig = std::cin.rdbuf();

std::stringstream input;
std::cin.rdbuf(input.rdbuf());

//

std::cin.rdbuf(orig);

=================================================


	enable_testing()
	find_package(GTest REQUIRED)
	add_executable(Quiz_test main_test.cpp operating_functions.cpp question.cpp quiz.cpp)
	target_link_libraries(Quiz_test ${GTEST_BOTH_LIBRARIES} pthread)
=================================================

