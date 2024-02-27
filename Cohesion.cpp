/*
    Cohesion.cpp

    Ordering and variable cohesion
*/

#include <vector>
#include <string>

struct GradeItem {
    std::vector<std::string> names;
    std::vector<int> scores;
    double average;
};

int main() {

    // @cohesion Coincidental
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

    // @cohesion Logical
    {
        std::vector<std::string> exerciseNames;
        std::vector<std::string> testNames;
        std::vector<std::string> quizNames;

        std::vector<int> exercises;
        std::vector<int> quizzes;
        std::vector<int> tests;

        double exerciseAverage;
        double quizAverage;
        double testAverage;
    }

    // @cohesion Logical
    {
        std::vector<std::string> exerciseNames, testNames, quizNames;
        std::vector<int> exercises, quizzes, tests;
        double exerciseAverage, quizAverage, testAverage;
    }

    // @cohesion Functional
    {
        // exercises
        std::vector<std::string> exerciseNames;
        std::vector<int> exercises;
        double exerciseAverage;

        // tests
        std::vector<std::string> testNames;
        std::vector<int> tests;
        double testAverage;

        // quizzes
        std::vector<std::string> quizNames;
        std::vector<int> quizzes;
        double quizAverage;
    }

    // @cohesion Informational
    {
        GradeItem exercises;
        GradeItem quizzes;
        GradeItem tests;
    }

    return 0;
}
