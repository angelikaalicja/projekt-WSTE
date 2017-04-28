#ifndef QUESTION_H
#define QUESTION_H

#include<iostream>


class Question
{
public:
    Question(unsigned int questionNumber, const char *quizFile);
    int getScore();

private:
    unsigned int number;
    const char* filename;
    std::string question, a, b, c, d;
    std::string correctAnswer;
    std::string userAnswer;
    void load();
    void ask();
    int score;

};

#endif // QUESTION_H
