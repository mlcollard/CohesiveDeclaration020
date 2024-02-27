/*
    Cohesion.cpp

    Ordering and variable cohesion
*/

#include <vector>
#include <string>

int main() {

    // @cohesion
    {
        std::vector<std::string> testNames;
        double exerciseAverage;
        std::vector<std::string> quizNames;

        std::vector<int> exercises;
        std::vector<std::string> exerciseNames;
        double quizAverage;
        std::vector<int> quizzes;

        std::vector<int> tests;
        double testAverage;
    }

    return 0;
}
