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
 * ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties
    : public ModelBase
{
public:
    ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties();
    virtual ~ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getDiffPath() const;
    bool diffPathIsSet() const;
    void unsetDiffPath();
    void setDiffPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetServiceName();
    void setServiceName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getServiceUserTarget() const;
    bool serviceUserTargetIsSet() const;
    void unsetServiceUser_target();
    void setServiceUserTarget(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_DiffPath;
    bool m_DiffPathIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_ServiceName;
    bool m_ServiceNameIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_ServiceUser_target;
    bool m_ServiceUser_targetIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties_H_ */
