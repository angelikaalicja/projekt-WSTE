#include "operating_functions.h"
#include "question.h"
#include "quiz.h"

int main(int, char*[])
{
	bool keepPlaying = true;

	while (keepPlaying)
	{
		std::string level;
		for (int i = 0; i < 10; ++i)
		{
			level = selectLevel();
			if (level == "1" || level == "2" || level == "3")
				break;
		}

		if (level == "1" || level == "2" || level == "3")
		{
			Quiz newQuiz(level);
			newQuiz.play();
			newQuiz.showResult();
		}

		keepPlaying = keepingPlaying();
	}

	return 0;
}

