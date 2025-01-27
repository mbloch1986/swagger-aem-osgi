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
 * ComDayCqMcmImplMCMConfigurationProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMcmImplMCMConfigurationProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMcmImplMCMConfigurationProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqMcmImplMCMConfigurationProperties
    : public ModelBase
{
public:
    ComDayCqMcmImplMCMConfigurationProperties();
    virtual ~ComDayCqMcmImplMCMConfigurationProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqMcmImplMCMConfigurationProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExperienceIndirection() const;
    bool experienceIndirectionIsSet() const;
    void unsetExperience_indirection();
    void setExperienceIndirection(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getTouchpointIndirection() const;
    bool touchpointIndirectionIsSet() const;
    void unsetTouchpoint_indirection();
    void setTouchpointIndirection(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Experience_indirection;
    bool m_Experience_indirectionIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Touchpoint_indirection;
    bool m_Touchpoint_indirectionIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMcmImplMCMConfigurationProperties_H_ */
