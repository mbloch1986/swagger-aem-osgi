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
 * OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties_H_
#define OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties_H_



#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties
{
public:
    OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties();
    virtual ~OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getLength() const;
    void setLength(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Length;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties_H_ */
