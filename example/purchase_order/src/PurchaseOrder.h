/**
* @file
* @brief Automatically generated by the XML code generator to be used by XML parser.

* This header file is generated based on the XML schema.
* It contains *PurchaseOrder_t* strcuture based on the data structure of XML schema.
* This structure is useful to store the extracted content from the XML data by XML parser.

* For further details refer,
* https://github.com/kiishor/xml_code_generator
* https://github.com/kiishor/xml_parser_in_c
*/

#ifndef PurchaseOrder_H_INCLUDED
#define PurchaseOrder_H_INCLUDED

#include <stdint.h>
#include <stdbool.h>

#include "parse_xml.h"

typedef struct
{
    char* name;
    char* street;
    char* city;
    char* state;
    int32_t zip;
    char* country;
}BillTo_t;

typedef struct
{
    char* name;
    char* street;
    char* city;
    char* state;
    int32_t zip;
    char* country;
}ShipTo_t;

typedef struct
{
    ShipTo_t ShipTo[2];
    BillTo_t BillTo;
    xs_date_t OrderDate;
}PurchaseOrder_t;

extern const xs_element_t PurchaseOrder_root;

#endif