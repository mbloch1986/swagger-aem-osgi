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
 * OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties
    : public ModelBase
{
public:
    OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties();
    virtual ~OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getHcName() const;
    bool hcNameIsSet() const;
    void unsetHc_name();
    void setHcName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getHcTags() const;
    bool hcTagsIsSet() const;
    void unsetHc_tags();
    void setHcTags(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getHcMbeanName() const;
    bool hcMbeanNameIsSet() const;
    void unsetHc_mbean_name();
    void setHcMbeanName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getMbeanName() const;
    bool mbeanNameIsSet() const;
    void unsetMbean_name();
    void setMbeanName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getAttributeName() const;
    bool attributeNameIsSet() const;
    void unsetAttribute_name();
    void setAttributeName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getAttributeValueConstraint() const;
    bool attributeValueConstraintIsSet() const;
    void unsetAttribute_value_constraint();
    void setAttributeValueConstraint(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Hc_name;
    bool m_Hc_nameIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Hc_tags;
    bool m_Hc_tagsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Hc_mbean_name;
    bool m_Hc_mbean_nameIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Mbean_name;
    bool m_Mbean_nameIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Attribute_name;
    bool m_Attribute_nameIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Attribute_value_constraint;
    bool m_Attribute_value_constraintIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties_H_ */
