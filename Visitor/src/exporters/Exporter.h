#ifndef DESIGN_PATTERNS_EXPORTER_H
#define DESIGN_PATTERNS_EXPORTER_H


// fwd declaration (to resolve circular dependencies DataProfile <-> Exporter)
class DataProfileSection;
class DataProfileID;
class DataProfileRating;


/// common interface for all visitors (i.e. Exporters) - prescribes methods for visiting indiv. elements
///  - different formats will require just implementing new exporters (no need to modify existing code of DataProfile elements)
class Exporter
{
    public:
        virtual void visitDataProfile (DataProfileSection *dpSection) = 0;
        virtual void visitDataProfile (DataProfileID *dpID) = 0;
        virtual void visitDataProfile (DataProfileRating *dpRating) = 0;
};


#endif //DESIGN_PATTERNS_EXPORTER_H
