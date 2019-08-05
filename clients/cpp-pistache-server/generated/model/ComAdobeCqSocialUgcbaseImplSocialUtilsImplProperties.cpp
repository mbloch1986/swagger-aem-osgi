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


#include "ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties()
{
    m_LegacyCloudUGCPathMappingIsSet = false;
    
}

ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::~ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties()
{
}

void ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_LegacyCloudUGCPathMappingIsSet)
    {
        val["legacyCloudUGCPathMapping"] = ModelBase::toJson(m_LegacyCloudUGCPathMapping);
    }
    

    return val;
}

void ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("legacyCloudUGCPathMapping") != val.end())
    {
        if(!val["legacyCloudUGCPathMapping"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["legacyCloudUGCPathMapping"]);
            setLegacyCloudUGCPathMapping( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::getLegacyCloudUGCPathMapping() const
{
    return m_LegacyCloudUGCPathMapping;
}
void ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::setLegacyCloudUGCPathMapping(ConfigNodePropertyBoolean const& value)
{
    m_LegacyCloudUGCPathMapping = value;
    m_LegacyCloudUGCPathMappingIsSet = true;
}
bool ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::legacyCloudUGCPathMappingIsSet() const
{
    return m_LegacyCloudUGCPathMappingIsSet;
}
void ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties::unsetLegacyCloudUGCPathMapping()
{
    m_LegacyCloudUGCPathMappingIsSet = false;
}

}
}
}
}
