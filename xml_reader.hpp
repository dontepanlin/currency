#include "rapidxml/rapidxml.hpp"


bool xml_read(char* text) {
    rapidxml::xml_document<> doc;    // character type defaults to char
    doc.parse<0>(text); 
    return true;
}