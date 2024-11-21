#include "Autobots5.h"
#include "Decepticons5.h"
#include <vector>
#include <memory>

int main() {
    Autobot autobot;
    Decepticon decepticon;

    autobot.transform();
    autobot.openFire();
    autobot.ultra();

    decepticon.transform();
    decepticon.openFire();
    decepticon.ultra();

    Transformer* transformerPtr = &autobot;
    transformerPtr->transform();
    transformerPtr->openFire();
    transformerPtr->ultra();

    transformerPtr = &decepticon;
    transformerPtr->transform();
    transformerPtr->openFire();
    transformerPtr->ultra();

    std::vector<std::unique_ptr<Transformer>> transformers;
    for (int i = 0; i < 3; ++i) {
        transformers.push_back(std::make_unique<Autobot>());
        transformers.push_back(std::make_unique<Decepticon>());
    }

    for (const auto& t : transformers) {
        t->transform();
        t->openFire();
        t->ultra();
    }

    return 0;
}