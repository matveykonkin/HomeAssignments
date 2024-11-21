#ifndef TRANSFORMERS5_H
#define TRANSFORMERS5_H
#include <iostream>

class Transformer {
public:
    virtual void transform() const;
    virtual void openFire() const;
    virtual void ultra() const;
    virtual ~Transformer() = default;
};

#endif