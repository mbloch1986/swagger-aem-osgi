/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties()
{
    m_Sling_servlet_selectorsIsSet = false;
    m_EcmaSuportIsSet = false;
    
}

OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::~OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties()
{
}

void OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Sling_servlet_selectorsIsSet)
    {
        val["sling.servlet.selectors"] = ModelBase::toJson(m_Sling_servlet_selectors);
    }
    if(m_EcmaSuportIsSet)
    {
        val["ecmaSuport"] = ModelBase::toJson(m_EcmaSuport);
    }
    

    return val;
}

void OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("sling.servlet.selectors") != val.end())
    {
        if(!val["sling.servlet.selectors"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["sling.servlet.selectors"]);
            setSlingServletSelectors( newItem );
        }
        
    }
    if(val.find("ecmaSuport") != val.end())
    {
        if(!val["ecmaSuport"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["ecmaSuport"]);
            setEcmaSuport( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::getSlingServletSelectors() const
{
    return m_Sling_servlet_selectors;
}
void OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::setSlingServletSelectors(ConfigNodePropertyArray const& value)
{
    m_Sling_servlet_selectors = value;
    m_Sling_servlet_selectorsIsSet = true;
}
bool OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::slingServletSelectorsIsSet() const
{
    return m_Sling_servlet_selectorsIsSet;
}
void OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::unsetSling_servlet_selectors()
{
    m_Sling_servlet_selectorsIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::getEcmaSuport() const
{
    return m_EcmaSuport;
}
void OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::setEcmaSuport(ConfigNodePropertyBoolean const& value)
{
    m_EcmaSuport = value;
    m_EcmaSuportIsSet = true;
}
bool OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::ecmaSuportIsSet() const
{
    return m_EcmaSuportIsSet;
}
void OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::unsetEcmaSuport()
{
    m_EcmaSuportIsSet = false;
}

}
}
}
}
