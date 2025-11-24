// The program reads data and display a bar graph showing productivity for each plant.
#include <iostream>
#include <cmath>

constexpr int NUMBER_OF_PLANTS = 4;

void inputData(int productionPlants[], int lastPlantNumber);
// Precondition: productionPlants is an array of integers representing the production facilities.
//   lastPlantNumber is the declared size of the array.
// Postcondition: The function reads production data for each plant from the user.
//   Since array starts with 0, the total production for plant number `n` is held in
//   productionPlants[n-1]. For plantNumber = 1 to lastPlantNumber:
//   productionsPlants[plantNumber - 1] equals th total production for plant number `plantNumber`.

void getTotal(int& sum);
// Postcondition: Reads nonnegative integers from the keyboard and places their total in sum

void scale(int productionPlant[], int size);
// Precondition: productionPlant[0] through productionPlant[size-1] each has a nonnegative value.
// Postcondition: productionPlant[index] has been scaled to the number of 1000s (rounded to an integer)
//   that were originally in productionPlant[index], for all `index` such that 0 <= index <= (size-1).

int rounding(double number);
// Precondition: number >= 0
// Postcondition: number rounded to the nearest integer;

void graph(const int asteriskCount[], int lastPlantNumber);
// Precondition: asteriskCount[0] through asteriskCount[lastPlantNumber-1] have nonnegative values.
// Postcondition: A bar graph is displayed saying that plant number `N`
//    has produced asteriskCount[N-1] number of units (in thousands), for each N s.t. 1 <= N <= lastPlantNumber.

void printAsterisks(int number);
// Postcondition: Prints `number` asterisks to the screen.

int main( ) {
    int production[NUMBER_OF_PLANTS];   // manufacturing plants
    std::cout << "This program displays a graph showing\n"
              << "production for each plant in the company.\n";
    inputData(production, NUMBER_OF_PLANTS);
    scale(production, NUMBER_OF_PLANTS);
    graph(production, NUMBER_OF_PLANTS);
    std::cout << "\n";
    return 0;
}

void inputData(int productionPlants[], const int lastPlantNumber) {
    for (size_t plantNumber = 1; plantNumber <= lastPlantNumber; ++plantNumber) {
        std::cout << "\n"
                  << "Enter production data for plant number "
                  << plantNumber << "\n";
        getTotal(productionPlants[plantNumber - 1]);
    }
}

void getTotal(int& sum) {
    std::cout << "Enter number of units produced by each department.\n"
              << "Append a negative number to the end to terminate.";
    sum = 0;
    int next;
    std::cin >> next;
    while (next >= 0) {
        sum += next;
        std::cin >> next;
    }
    std::cout << "Total = " << sum << "\n";
}

void scale(int productionPlant[], const int size) {
    for (int idx = 0; idx < size; ++idx)
        productionPlant[idx] = rounding(productionPlant[idx] / 1000.0);
}

int rounding(const double number) {
    return static_cast<int>(std::floor(number + 0.5));
}

void graph(const int asteriskCount[], const int lastPlantNumber) {
    std::cout << "\n"
              << "Units produced (in thousands of units):\n\n";
    for (size_t plantNumber = 1; plantNumber <= lastPlantNumber; ++plantNumber) {
        std::cout << "Plant n." << plantNumber << " ";
        printAsterisks(asteriskCount[plantNumber - 1]);
        std::cout << "\n";
    }
}

void printAsterisks(int number) {
    for (int count = 1; count <= number; ++count)
        std::cout << "*";
}
