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

/*
 * ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagInfo_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagInfo
    : public ModelBase
{
public:
    ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagInfo();
    virtual ~ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagInfo members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPid() const;
    bool pidIsSet() const;
    void unsetPid();
    void setPid(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();
    void setTitle(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagProperties> getProperties() const;
    bool propertiesIsSet() const;
    void unsetProperties();
    void setProperties(std::shared_ptr<ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagProperties> value);

protected:
    utility::string_t m_Pid;
    bool m_PidIsSet;
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    std::shared_ptr<ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagProperties> m_Properties;
    bool m_PropertiesIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqScreensSegmentationImplSegmentationFeatureFlagInfo_H_ */