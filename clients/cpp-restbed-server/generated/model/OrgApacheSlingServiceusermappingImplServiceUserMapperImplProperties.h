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
 * OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties_H_
#define OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties
{
public:
    OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties();
    virtual ~OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getUserMapping() const;
    void setUserMapping(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getUserDefault() const;
    void setUserDefault(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getUserEnableDefaultMapping() const;
    void setUserEnableDefaultMapping(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getRequireValidation() const;
    void setRequireValidation(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_User_mapping;
    std::shared_ptr<ConfigNodePropertyString> m_User_default;
    std::shared_ptr<ConfigNodePropertyBoolean> m_User_enable_default_mapping;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Require_validation;
};

}
}
}
}

#endif /* OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties_H_ */
