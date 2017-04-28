#include "operating_functions.h"
#include "question.h"
#include "quiz.h"

int main(int, char* [])
{
    bool keepPlaying = true;

    while(keepPlaying)
    {
        unsigned int level;
        level = selectLevel();

        Quiz newQuiz(level);
        newQuiz.play();
        newQuiz.showResult();

        keepPlaying = keepingPlaying();
    }

    return 0;
}

