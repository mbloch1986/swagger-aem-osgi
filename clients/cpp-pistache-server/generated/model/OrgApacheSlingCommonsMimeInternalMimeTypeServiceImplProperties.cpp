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


#include "OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties()
{
    m_Mime_typesIsSet = false;
    
}

OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::~OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties()
{
}

void OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Mime_typesIsSet)
    {
        val["mime.types"] = ModelBase::toJson(m_Mime_types);
    }
    

    return val;
}

void OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("mime.types") != val.end())
    {
        if(!val["mime.types"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["mime.types"]);
            setMimeTypes( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::getMimeTypes() const
{
    return m_Mime_types;
}
void OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::setMimeTypes(ConfigNodePropertyArray const& value)
{
    m_Mime_types = value;
    m_Mime_typesIsSet = true;
}
bool OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::mimeTypesIsSet() const
{
    return m_Mime_typesIsSet;
}
void OrgApacheSlingCommonsMimeInternalMimeTypeServiceImplProperties::unsetMime_types()
{
    m_Mime_typesIsSet = false;
}

}
}
}
}

