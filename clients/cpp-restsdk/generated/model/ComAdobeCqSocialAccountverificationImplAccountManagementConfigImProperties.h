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
 * ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties();
    virtual ~ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEnable() const;
    bool enableIsSet() const;
    void unsetEnable();
    void setEnable(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getTtl1() const;
    bool ttl1IsSet() const;
    void unsetTtl1();
    void setTtl1(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getTtl2() const;
    bool ttl2IsSet() const;
    void unsetTtl2();
    void setTtl2(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Enable;
    bool m_EnableIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Ttl1;
    bool m_Ttl1IsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Ttl2;
    bool m_Ttl2IsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties_H_ */
