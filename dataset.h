#ifndef DATASET_H
#define DATASET_H

#include <vector>

class Dataset {
public:
    Dataset();
    std::vector<std::vector<float>> loadDataset();
    std::vector<float> getSample();
};

#endif // DATASET_H
