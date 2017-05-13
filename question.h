#ifndef QUESTION_H
#define QUESTION_H

#include<iostream>


class Question
{
public:
    Question(unsigned int questionNumber, const std::string& quizFile);
    int getScore();
    void load();
    void ask();

private:
    unsigned int number;
    std::string filename;
    std::string question, a, b, c, d;
    std::string correctAnswer;
    std::string userAnswer;

};

#endif // QUESTION_H
