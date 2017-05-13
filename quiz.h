#ifndef QUIZ_H
#define QUIZ_H

#include <string>

class Quiz
{
public:
    Quiz(const std::string & quizLevel);
    void play();
    void showResult();

private:
    std::string level;
    std::string dataFile;
    int result;

};

#endif // QUIZ_H
