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


#include "ComDayCqWcmFoundationImplPageRedirectServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmFoundationImplPageRedirectServletProperties::ComDayCqWcmFoundationImplPageRedirectServletProperties()
{
    m_Excluded_resource_typesIsSet = false;
    
}

ComDayCqWcmFoundationImplPageRedirectServletProperties::~ComDayCqWcmFoundationImplPageRedirectServletProperties()
{
}

void ComDayCqWcmFoundationImplPageRedirectServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmFoundationImplPageRedirectServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Excluded_resource_typesIsSet)
    {
        val["excluded.resource.types"] = ModelBase::toJson(m_Excluded_resource_types);
    }
    

    return val;
}

void ComDayCqWcmFoundationImplPageRedirectServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("excluded.resource.types") != val.end())
    {
        if(!val["excluded.resource.types"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["excluded.resource.types"]);
            setExcludedResourceTypes( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComDayCqWcmFoundationImplPageRedirectServletProperties::getExcludedResourceTypes() const
{
    return m_Excluded_resource_types;
}
void ComDayCqWcmFoundationImplPageRedirectServletProperties::setExcludedResourceTypes(ConfigNodePropertyArray const& value)
{
    m_Excluded_resource_types = value;
    m_Excluded_resource_typesIsSet = true;
}
bool ComDayCqWcmFoundationImplPageRedirectServletProperties::excludedResourceTypesIsSet() const
{
    return m_Excluded_resource_typesIsSet;
}
void ComDayCqWcmFoundationImplPageRedirectServletProperties::unsetExcluded_resource_types()
{
    m_Excluded_resource_typesIsSet = false;
}

}
}
}
}

