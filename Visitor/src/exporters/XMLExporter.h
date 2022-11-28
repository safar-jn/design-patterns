#ifndef DESIGN_PATTERNS_XMLEXPORTER_H
#define DESIGN_PATTERNS_XMLEXPORTER_H


#include "Exporter.h"

#include <iostream>


class XMLExporter: public Exporter
{
    public:
        void visitDataProfileSection (DataProfileSection *dpSection) override;
        void visitDataProfileID      (DataProfileID *dpID) override;
        void visitDataProfileRating  (DataProfileRating *dpRating) override;
};


#endif //DESIGN_PATTERNS_XMLEXPORTER_H
