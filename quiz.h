#ifndef QUIZ_H
#define QUIZ_H


class Quiz
{
public:
    Quiz(const unsigned int &quizLevel);
    void play();
    void showResult();

private:
    unsigned int level;
    const char* dataFile;
    int result;

};

#endif // QUIZ_H
