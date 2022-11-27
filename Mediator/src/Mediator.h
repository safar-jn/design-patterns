#ifndef DESIGN_PATTERNS_MEDIATOR_H
#define DESIGN_PATTERNS_MEDIATOR_H


class Crawler; // just a forward declaration - to avoid circular dependency

class Mediator
{
    public:
        virtual void mediate (Crawler *source) const = 0;
};


#endif //DESIGN_PATTERNS_MEDIATOR_H
