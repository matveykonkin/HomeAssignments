#ifndef DECEPTICONS5_H
#define DECEPTICONS5_H
#include "Transformers5.h"

class Decepticon : public Transformer {
public:
    void transform() const override;
    void openFire() const override;
    void ultra() const override;
};

#endif