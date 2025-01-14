/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties()
{
    
}

OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::~OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties()
{
}

std::string OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::getFelixInventoryPrinterName() const
{
    return m_Felix_inventory_printer_name;
}
void OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::setFelixInventoryPrinterName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Felix_inventory_printer_name = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::getFelixInventoryPrinterTitle() const
{
    return m_Felix_inventory_printer_title;
}
void OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::setFelixInventoryPrinterTitle(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Felix_inventory_printer_title = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::getPath() const
{
    return m_Path;
}
void OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties::setPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Path = value;
}

}
}
}
}

