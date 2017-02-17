#pragma warning(disable:4996)

#include <iostream>
#include <vector>

#include "Generation.h"

using namespace std;
using namespace Chromosome;

Generation::Generation() {
    species = new vector<ZChro>(100);
    for (int i = 0; i < 100; i++) species.push_back(ZChro());

    threshold = 100;
}

Generation::Generation(vector<ZChro> spec, int thresh) {
    if (thresh < 1) {
        cout << endl << "Theshold out of bounds!" << endl;
        throw 0;
    }

    if (spec.size() == 0) {
        cout << endl << "ZChro vector is too small!" << endl;
        throw 0;
    }

    species = new vector<ZChro>(thresh);
    for (int i = 0; i < thresh; i++) species.push_back(ZChro());

    threshold = 100;
}
