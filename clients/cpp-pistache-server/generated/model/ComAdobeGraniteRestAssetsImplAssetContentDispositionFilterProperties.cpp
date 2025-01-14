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


#include "ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties()
{
    m_Mime_allowEmptyIsSet = false;
    m_Mime_allowedIsSet = false;
    
}

ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::~ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties()
{
}

void ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Mime_allowEmptyIsSet)
    {
        val["mime.allowEmpty"] = ModelBase::toJson(m_Mime_allowEmpty);
    }
    if(m_Mime_allowedIsSet)
    {
        val["mime.allowed"] = ModelBase::toJson(m_Mime_allowed);
    }
    

    return val;
}

void ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::fromJson(nlohmann::json& val)
{
    if(val.find("mime.allowEmpty") != val.end())
    {
        if(!val["mime.allowEmpty"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["mime.allowEmpty"]);
            setMimeAllowEmpty( newItem );
        }
        
    }
    if(val.find("mime.allowed") != val.end())
    {
        if(!val["mime.allowed"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["mime.allowed"]);
            setMimeAllowed( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::getMimeAllowEmpty() const
{
    return m_Mime_allowEmpty;
}
void ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::setMimeAllowEmpty(ConfigNodePropertyBoolean const& value)
{
    m_Mime_allowEmpty = value;
    m_Mime_allowEmptyIsSet = true;
}
bool ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::mimeAllowEmptyIsSet() const
{
    return m_Mime_allowEmptyIsSet;
}
void ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::unsetMime_allowEmpty()
{
    m_Mime_allowEmptyIsSet = false;
}
ConfigNodePropertyArray ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::getMimeAllowed() const
{
    return m_Mime_allowed;
}
void ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::setMimeAllowed(ConfigNodePropertyArray const& value)
{
    m_Mime_allowed = value;
    m_Mime_allowedIsSet = true;
}
bool ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::mimeAllowedIsSet() const
{
    return m_Mime_allowedIsSet;
}
void ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties::unsetMime_allowed()
{
    m_Mime_allowedIsSet = false;
}

}
}
}
}

