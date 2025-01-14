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
 * ComAdobeCqProjectsImplServletProjectImageServletProperties.h
 *
 * 
 */

#ifndef ComAdobeCqProjectsImplServletProjectImageServletProperties_H_
#define ComAdobeCqProjectsImplServletProjectImageServletProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqProjectsImplServletProjectImageServletProperties
    : public ModelBase
{
public:
    ComAdobeCqProjectsImplServletProjectImageServletProperties();
    virtual ~ComAdobeCqProjectsImplServletProjectImageServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqProjectsImplServletProjectImageServletProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getImageQuality() const;
    void setImageQuality(ConfigNodePropertyString const& value);
    bool imageQualityIsSet() const;
    void unsetImage_quality();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getImageSupportedResolutions() const;
    void setImageSupportedResolutions(ConfigNodePropertyString const& value);
    bool imageSupportedResolutionsIsSet() const;
    void unsetImage_supported_resolutions();

protected:
    ConfigNodePropertyString m_Image_quality;
    bool m_Image_qualityIsSet;
    ConfigNodePropertyString m_Image_supported_resolutions;
    bool m_Image_supported_resolutionsIsSet;
};

}
}
}
}

#endif /* ComAdobeCqProjectsImplServletProjectImageServletProperties_H_ */
