#ifndef DESIGN_PATTERNS_EXPORTER_H
#define DESIGN_PATTERNS_EXPORTER_H


// fwd declaration (to resolve circular dependencies DataProfile <-> Exporter)
class DataProfileSection;
class DataProfileID;
class DataProfileRating;

class Exporter
{
    public:
        virtual void visitDataProfileSection (DataProfileSection *dpSection) = 0;
        virtual void visitDataProfileID      (DataProfileID *dpID) = 0;
        virtual void visitDataProfileRating  (DataProfileRating *dpRating) = 0;
};


#endif //DESIGN_PATTERNS_EXPORTER_H
