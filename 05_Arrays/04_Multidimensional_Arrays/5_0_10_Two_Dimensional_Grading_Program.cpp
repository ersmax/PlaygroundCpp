// Reads quiz scores for each student into two-dimensional array grade
// Compute the average score for each input and the average score for each quiz.
// Display then the quiz scores and the averages.

#include <iostream>
#include <limits>
#include <iomanip>
#include <sstream>

constexpr int NUMBER_STUDENTS = 4;
constexpr int NUMBER_QUIZZES = 3;

void fillArray(int grade[][NUMBER_QUIZZES], std::size_t nStudents);
//   Precondition: nStudents is the declared size of the first dimension of grade.
//   Postcondition: grade[0] through grade[nStudents - 1] have been filled with
// quiz scores (0-10) read from the keyboard.

void display(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
             const double studentAverage[], std::size_t nStud,
             const double quizAverage[], std::size_t nQuiz);
//  Precondition: nStudents is the declared size of the first dimension of grade.
//  Postcondition: The function displays the quiz scores for each student,
// the average score for each student, and the average score for each quiz.

void computeQuizAverage(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
                        double quizAverage[], std::size_t nQuizzes);
//   Precondition: nStudents is the declared size of the first dimension of grade.
//   Postcondition: quizAverage[0] through quizAverage[nQuizzes - 1]
// contain the average score for each quiz.

void computeStudentAverage(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
                           double studentAverage[], std::size_t nStud);
//   Precondition: nStudents is the declared size of the first dimension of grade.
//   Postcondition: studentAverage[0] through studentAverage[nStud - 1]
// contain the average score for each student.

int main( ) {
    int grades[NUMBER_STUDENTS][NUMBER_QUIZZES];
    double studentAverage[NUMBER_STUDENTS];
    double quizAverage[NUMBER_QUIZZES];

    fillArray(grades, std::size(grades));
    computeQuizAverage(grades, std::size(grades), quizAverage, std::size(quizAverage));
    computeStudentAverage(grades, std::size(grades), studentAverage, std::size(studentAverage));
    display(grades, std::size(grades), studentAverage, std::size(studentAverage), quizAverage, std::size(quizAverage));

    std::cout << "\n";
    return 0;
}

void fillArray(int grade[][NUMBER_QUIZZES], const std::size_t nStudents) {
    for (std::size_t student = 1; student <= nStudents; ++student) {
        std::cout << "Enter result (0-10) for " << NUMBER_QUIZZES
                  << " quizzes for student " << (student) << ":";
        for (int quiz = 1; quiz <= NUMBER_QUIZZES; ++quiz) {
            int result;
            while (true) {

                if (!(std::cin >> result)) {
                    std::cout << "Invalid value for quiz " << quiz
                              << ". Retry.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }

                if (result >= 0 && result <= 10) {
                    grade[student - 1][quiz - 1] = result;
                    std::cout << "Quiz " << quiz << " score: " << result << "\n";
                    break;
                }
                std::cout << "Grade must be between 0-10 for quiz " << quiz
                          << " . Retry.\n";
            }
        }
    }
}

void display(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
             const double studentAverage[], std::size_t nStud,
             const double quizAverage[], std::size_t nQuiz)
{
    std::cout << std::fixed << std::showpoint << std::setprecision(1);
    std::cout << std::setw(10) << "Student"
              << std::setw(10)  << "Average"
              << std::setw(15) << "Quizzes\n";

    for (size_t idxStudent = 1; idxStudent <= nStudents; ++idxStudent) {
        std::cout << std::setw(10) << idxStudent
                  << std::setw(10)  << studentAverage[idxStudent - 1];

        for (int idxQuiz = 1; idxQuiz <= NUMBER_QUIZZES; ++idxQuiz)
            std::cout << std::setw(5) << grade[idxStudent - 1][idxQuiz - 1];

        std::cout << "\n";
    }

    std::cout << std::setw(20) << "Quiz average = ";
    for (int idxQuiz = 1; idxQuiz <= nQuiz; ++idxQuiz)
        std::cout << std::setw(5) << quizAverage[idxQuiz - 1];
    std::cout << "\n";
}

void computeQuizAverage(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
                        double quizAverage[], std::size_t nQuizzes) {

    for (size_t idxQuiz = 1; idxQuiz <= nQuizzes; ++idxQuiz) {
        double sum = 0;
        for (size_t idxStudent = 1; idxStudent <= nStudents; ++idxStudent)
            sum += grade[idxStudent - 1][idxQuiz - 1];

        quizAverage[idxQuiz - 1] = sum / static_cast<double>(nStudents);
    }
}

void computeStudentAverage(const int grade[][NUMBER_QUIZZES], std::size_t nStudents,
                           double studentAverage[], std::size_t nStud) {

    for (size_t idxStudent = 1; idxStudent <= nStud; ++idxStudent) {
        double sum = 0;
        for (int idxQuiz = 1; idxQuiz <= NUMBER_QUIZZES; ++idxQuiz)
            sum += grade[idxStudent - 1][idxQuiz - 1];

        studentAverage[idxStudent - 1] = sum / NUMBER_QUIZZES;
    }
}
