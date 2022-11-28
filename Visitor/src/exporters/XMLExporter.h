#ifndef DESIGN_PATTERNS_XMLEXPORTER_H
#define DESIGN_PATTERNS_XMLEXPORTER_H


#include "Exporter.h"

#include <iostream>


class XMLExporter: public Exporter
{
    public:
        void visitDataProfile (DataProfileSection *dpSection) override;
        void visitDataProfile (DataProfileID *dpID) override;
        void visitDataProfile (DataProfileRating *dpRating) override;
};


#endif //DESIGN_PATTERNS_XMLEXPORTER_H
