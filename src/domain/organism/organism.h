#ifndef ORGANISM_H
#define ORGANISM_H

#include "infobundle.h"

#include <string>
#include "domain/body/body.h"
#include "domain/space/vicinity.h"

using namespace std;


class Organism : public Body {
public:
    Organism(unsigned mass) : Body(mass) {}
    virtual void onTick(Vicinity vicinity) = 0;
    virtual string getVisibleName();
    void onDecomposition();
    bool isAlive() { return alive; };
    virtual InfoBundle bundleInfo();

    const static char* BUNDLE_LABEL_SPECIES;
protected:
    void die();

private:
    bool alive = true;
};

#endif // ORGANISM_H
