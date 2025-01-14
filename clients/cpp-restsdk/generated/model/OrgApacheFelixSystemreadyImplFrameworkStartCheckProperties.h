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
 * OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties
    : public ModelBase
{
public:
    OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties();
    virtual ~OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getTimeout() const;
    bool timeoutIsSet() const;
    void unsetTimeout();
    void setTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getTargetStartLevel() const;
    bool targetStartLevelIsSet() const;
    void unsetTarget_start_level();
    void setTargetStartLevel(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTargetStartLevelPropName() const;
    bool targetStartLevelPropNameIsSet() const;
    void unsetTarget_start_level_prop_name();
    void setTargetStartLevelPropName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(std::shared_ptr<ConfigNodePropertyDropDown> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Timeout;
    bool m_TimeoutIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Target_start_level;
    bool m_Target_start_levelIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Target_start_level_prop_name;
    bool m_Target_start_level_prop_nameIsSet;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Type;
    bool m_TypeIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties_H_ */
