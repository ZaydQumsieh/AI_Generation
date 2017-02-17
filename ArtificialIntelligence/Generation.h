#ifndef GENERATION_H
#define GENERATION_H

#include <iostream>
#include <vector>

#include "Chromosome.h"

using namespace std;
using namespace Chromosome;

namespace Gen
{
    class Generation
    {
    public:
        Generation();
        // Postcondition: a Generation object initialized with an empty species and a default threshold of 100
        Generation(vector<ZChro> spec, int thresh)
        // Postcondition: a Generation object initialized with an the given parameters
    private:
        // A group of Chromosomes
        vector<ZChro> species;
        // Size Max of the species
        int threshold;
    };
}
#endif