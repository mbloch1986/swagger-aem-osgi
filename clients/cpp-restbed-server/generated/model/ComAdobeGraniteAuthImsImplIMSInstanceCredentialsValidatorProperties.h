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
 * ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties_H_
#define ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties
{
public:
    ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties();
    virtual ~ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderId() const;
    void setOauthProviderId(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_id;
};

}
}
}
}

#endif /* ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties_H_ */
