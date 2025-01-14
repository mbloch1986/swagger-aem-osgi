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
 * ComAdobeGraniteCorsImplCORSPolicyImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteCorsImplCORSPolicyImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteCorsImplCORSPolicyImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteCorsImplCORSPolicyImplProperties
    : public ModelBase
{
public:
    ComAdobeGraniteCorsImplCORSPolicyImplProperties();
    virtual ~ComAdobeGraniteCorsImplCORSPolicyImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteCorsImplCORSPolicyImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAlloworigin() const;
    bool alloworiginIsSet() const;
    void unsetAlloworigin();
    void setAlloworigin(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAlloworiginregexp() const;
    bool alloworiginregexpIsSet() const;
    void unsetAlloworiginregexp();
    void setAlloworiginregexp(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAllowedpaths() const;
    bool allowedpathsIsSet() const;
    void unsetAllowedpaths();
    void setAllowedpaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExposedheaders() const;
    bool exposedheadersIsSet() const;
    void unsetExposedheaders();
    void setExposedheaders(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxage() const;
    bool maxageIsSet() const;
    void unsetMaxage();
    void setMaxage(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getSupportedheaders() const;
    bool supportedheadersIsSet() const;
    void unsetSupportedheaders();
    void setSupportedheaders(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getSupportedmethods() const;
    bool supportedmethodsIsSet() const;
    void unsetSupportedmethods();
    void setSupportedmethods(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSupportscredentials() const;
    bool supportscredentialsIsSet() const;
    void unsetSupportscredentials();
    void setSupportscredentials(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Alloworigin;
    bool m_AlloworiginIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Alloworiginregexp;
    bool m_AlloworiginregexpIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Allowedpaths;
    bool m_AllowedpathsIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Exposedheaders;
    bool m_ExposedheadersIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Maxage;
    bool m_MaxageIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Supportedheaders;
    bool m_SupportedheadersIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Supportedmethods;
    bool m_SupportedmethodsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Supportscredentials;
    bool m_SupportscredentialsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteCorsImplCORSPolicyImplProperties_H_ */
