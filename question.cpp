#include "question.h"

#include <iostream>
#include <fstream>
#include <algorithm>

Question::Question(unsigned int questionNumber, const std::string& quizFile)
    : number(questionNumber)
    , filename(quizFile)
{

}

void Question::load()
{

   std::ifstream quiz(filename.c_str());

   if(quiz.good()==false)  // inaczej if(!quiz)
   {
      std::cout<<"Ups! Data file is missing!";
      exit(0);
   }

   unsigned int currentQuestionLine = ((number - 1) * 6 + 1);
   unsigned int readLine = 1;
   std::string line;

   while(getline(quiz, line))
   {
      if(readLine == currentQuestionLine)
          question = line;
      if(readLine == currentQuestionLine + 1)
          a = line;
      if(readLine == currentQuestionLine + 2)
          b = line;
      if(readLine == currentQuestionLine + 3)
          c = line;
      if(readLine == currentQuestionLine + 4)
          d = line;
      if(readLine == currentQuestionLine + 5)
          correctAnswer = line;

      readLine++;
   }

   quiz.close();
}

void Question::ask()
{
    std::cout << std::endl << question << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << std::endl << "Please, type your choice: ";
    std::cin >> userAnswer;
    std::transform(userAnswer.begin(), userAnswer.end(), userAnswer.begin(), tolower);

    std::cout << "Score: " << (userAnswer == correctAnswer) << "/1" << std::endl;

}

int Question::getScore()
{
    return (userAnswer == correctAnswer);
}

