#include "XMLExporter.h"

#include "../dataprofile/DataProfileSection.h"
#include "../dataprofile/DataProfileID.h"
#include "../dataprofile/DataProfileRating.h"


void XMLExporter::visitDataProfile (DataProfileSection *dpSection)
{
    // simulate generating XML export of visited element (in this case DataProfileSection)

    std::cout << "\t<" << dpSection->getName() << " itemCnt='" << dpSection->count() << "'>\n";

    for (const auto &section : dpSection->getChildren())
        section->accept(this);

    std::cout << "\t</" << dpSection->getName() << ">" << std::endl;

}

void XMLExporter::visitDataProfile (DataProfileID *dpID)
{
    // simulate generating XML export of visited element (in this case DataProfileID)

    std::cout << "\t<client_id itemCnt='" << dpID->count() << "'>\n"
              << "\t  <name>" << dpID->getName() << "</name>\n"
              << "\t  <surname>" << dpID->getSurname() << "</surname>\n"
              << "\t  <birthNumber>" << dpID->getRc() << "</birthNumber>\n"
              << "\t</client_id>"
              << std::endl;
}

void XMLExporter::visitDataProfile (DataProfileRating *dpRating)
{
    // simulate generating XML export of visited element (in this case DataProfileRating)
    std::cout << "\t  <rating>" << dpRating->getValue() << "</rating>" << std::endl;
}
