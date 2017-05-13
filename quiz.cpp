#include "quiz.h"

#include "question.h"

#include <iostream>

Quiz::Quiz(const std::string& quizLevel)
    : level(quizLevel)
{
	dataFile = "quiz_" + level + ".txt";
}

//int Quiz::readFile()
//{

    //open
    //for (;;)
    //Question question;
    //line%6 == 0 question.SetQuestion(Stringline)
    //line%6 == 1 question.SetA(Stringline)
    //...
    //v.paush_back(question)
    // close a file :P
//operation on a vector :)
//}

void Quiz::play()
{
    std::cout << std::endl << "Playing! Level: " << level << std::endl;
    result = 0;

    for (unsigned int i = 1; i<=5; ++i)
    {
        Question question(i, dataFile);
        question.load();
        question.ask();
        result += question.getScore();
    }
}

void Quiz::showResult()
{
    std::cout << std::endl << "Result: " << result << "/5" << std::endl;
}
