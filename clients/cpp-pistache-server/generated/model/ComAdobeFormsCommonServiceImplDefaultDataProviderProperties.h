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
/*
 * ComAdobeFormsCommonServiceImplDefaultDataProviderProperties.h
 *
 * 
 */

#ifndef ComAdobeFormsCommonServiceImplDefaultDataProviderProperties_H_
#define ComAdobeFormsCommonServiceImplDefaultDataProviderProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeFormsCommonServiceImplDefaultDataProviderProperties
    : public ModelBase
{
public:
    ComAdobeFormsCommonServiceImplDefaultDataProviderProperties();
    virtual ~ComAdobeFormsCommonServiceImplDefaultDataProviderProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeFormsCommonServiceImplDefaultDataProviderProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getAlloweddataFileLocations() const;
    void setAlloweddataFileLocations(ConfigNodePropertyArray const& value);
    bool alloweddataFileLocationsIsSet() const;
    void unsetAlloweddataFileLocations();

protected:
    ConfigNodePropertyArray m_AlloweddataFileLocations;
    bool m_AlloweddataFileLocationsIsSet;
};

}
}
}
}

#endif /* ComAdobeFormsCommonServiceImplDefaultDataProviderProperties_H_ */
