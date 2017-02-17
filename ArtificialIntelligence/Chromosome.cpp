#pragma warning(disable:4996)

#include <iostream>
#include "Chromosome.h"
using namespace std;

ZChro::ZChro() {
    reputation = 0;
    value = "";
}

// ##### FILL THIS FUNCTION IN #####
bool ZChro::test() {
    int iterations = 0;
    int wins = 0;

    // Iterate 100 times
    while (iterations != 100) {
        while (hasWon() == 0) {

        }

        // Update the iterations and wins
        iterations++;
        if (hasWon() == 0 || hasWon == 3) wins++;
    }
}

// ##### FILL THIS FUNCTION IN
int ZChro::hasWon() {

}