#include "XMLExporter.h"

#include "../dataprofile/DataProfileSection.h"
#include "../dataprofile/DataProfileID.h"
#include "../dataprofile/DataProfileRating.h"


void XMLExporter::visitDataProfile (DataProfileSection *dpSection)
{
    std::cout << "<" << dpSection->getName() << " itemCnt='" << dpSection->count() << "'>\n";

    for (const auto &section : dpSection->getChildren())
        section->accept(this);

    std::cout << "</" << dpSection->getName() << ">" << std::endl;

}

void XMLExporter::visitDataProfile (DataProfileID *dpID)
{
    std::cout << "<client_id itemCnt='" << dpID->count() << "'>\n"
              << "  <name>" << dpID->getName() << "</name>\n"
              << "  <surname>" << dpID->getSurname() << "</surname>\n"
              << "  <birthNumber>" << dpID->getRc() << "</birthNumber>\n"
              << "</client_id>"
              << std::endl;
}

void XMLExporter::visitDataProfile (DataProfileRating *dpRating)
{
    std::cout << "  <rating>" << dpRating->getValue() << "</rating>" << std::endl;
}
