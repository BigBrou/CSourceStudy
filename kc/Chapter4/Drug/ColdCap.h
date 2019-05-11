#ifndef CHAPTER4_COLDCAP_H
#define CHAPTER4_COLDCAP_H

#include "SinivalCap.h"
#include "SneezeCap.h"
#include "SnuffleCap.h"

class ColdCap {
private:
    SinivalCap Sinval;
    SneezeCap Sneeze;
    SnuffleCap Snuffle;

public:
    void Take() const;
};


#endif //CHAPTER4_COLDCAP_H
