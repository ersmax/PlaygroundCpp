#include <iostream>
#include <limits>

int main( ) {
    int scores[5], scores2[5];
    std::cout << "Enter 5 scores:\n";
    int max = std::numeric_limits<int>::min();

    for (int idx = 0; idx < std::size(scores); ++idx) {
        std::cin >> scores[idx];
        if (scores[idx] > max)
            max = scores[idx];
    }
    std::cout << "Enter 5 scores:\n";
    // better readability
    for (auto& score : scores2) {
        std::cin >> score;
        if (score > max)
            max = score;
    }


    std::cout << "The highest score is " << max << "\n"
              << "The scores and their difference from the highest are:\n";

    for (size_t idx = 0; idx < std::size(scores); ++idx)
        std::cout << scores[idx] << " off by " << (max - scores[idx]) << "\n";

    std::cout << "The highest score is " << max << "\n"
              << "The scores and their difference from the highest are:\n";
    // better readability
    for (const int& score : scores2)
        std::cout << score << " off by " << (max - score) << "\n";

    return 0;
}