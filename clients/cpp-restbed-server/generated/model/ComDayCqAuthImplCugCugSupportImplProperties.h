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
 * ComDayCqAuthImplCugCugSupportImplProperties.h
 *
 * 
 */

#ifndef ComDayCqAuthImplCugCugSupportImplProperties_H_
#define ComDayCqAuthImplCugCugSupportImplProperties_H_



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
class  ComDayCqAuthImplCugCugSupportImplProperties
{
public:
    ComDayCqAuthImplCugCugSupportImplProperties();
    virtual ~ComDayCqAuthImplCugCugSupportImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqAuthImplCugCugSupportImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCugExemptedPrincipals() const;
    void setCugExemptedPrincipals(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getCugEnabled() const;
    void setCugEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCugPrincipalsRegex() const;
    void setCugPrincipalsRegex(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCugPrincipalsReplacement() const;
    void setCugPrincipalsReplacement(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Cug_exempted_principals;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Cug_enabled;
    std::shared_ptr<ConfigNodePropertyString> m_Cug_principals_regex;
    std::shared_ptr<ConfigNodePropertyString> m_Cug_principals_replacement;
};

}
}
}
}

#endif /* ComDayCqAuthImplCugCugSupportImplProperties_H_ */