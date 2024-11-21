#ifndef AUTOBOTS5_H
#define AUTOBOTS5_H
#include "Transformers5.h"

class Autobot : public Transformer {
public:
    void transform() const override;
    void openFire() const override;
    void ultra() const override;
};

#endif