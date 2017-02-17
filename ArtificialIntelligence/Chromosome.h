#ifndef CHROMOSOME_H
#define CHROMOSOME_H

#include <iostream>
#include <vector>

using namespace std;

namespace Chromosome
{
    class ZChro
    {
    public:
        ZChro();
        // Postcondition: a ZChro object intialized with a reputation of 0 and a value of ""
        void test();
        // Precondition: a valid ZChro object that can be tested
        // Postcondition: saves the
        int hasWon();
        // Postcondition: returns 0 by default, 1 if won, 2 if lost, and 3 if tied (if applicable)

    private:
        // Reputation of the AChro
        int reputation;
        // The value ZChro holds
        string value;
    };
}
#endif