#include "quiz.h"

#include "question.h"

#include <iostream>

Quiz::Quiz(const unsigned int& quizLevel)
    : level(quizLevel)
{
    switch(level)
    {
    case 1: dataFile = "quiz_1.txt" ;
        break;
    case 2: dataFile = "quiz_2.txt" ;
        break;
    case 3: dataFile = "quiz_3.txt" ;
        break;
    }
}

void Quiz::play()
{
    std::cout << std::endl << "Playing! Level: " << level << std::endl;
    result = 0;

    for (unsigned int i = 1; i<=5; ++i)
    {
        Question question(i, dataFile);
        result += question.getScore();
    }
}

void Quiz::showResult()
{
    std::cout << std::endl << "Result: " << result << "/5" << std::endl;
}

