

#include "operating_functions.h"
#include "question.h"
#include "quiz.h"
#include <gtest/gtest.h>

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(App,selectLevel_OK)
{
	std::stringstream input("1");
	std::cin.rdbuf(input.rdbuf());

	std::string l = selectLevel();

	EXPECT_EQ("1", l);
}

TEST(App,selectLevel_FAIL)
{
	std::stringstream input("2");
	std::cin.rdbuf(input.rdbuf());

	std::string l = selectLevel();

	EXPECT_NE("1", l);
}

TEST(App,selectLevel_FAIL_STRING)
{
	std::stringstream input("ALAmaKOTA");
	std::cin.rdbuf(input.rdbuf());

	std::string l = selectLevel();

	EXPECT_NE("1", l);
}

