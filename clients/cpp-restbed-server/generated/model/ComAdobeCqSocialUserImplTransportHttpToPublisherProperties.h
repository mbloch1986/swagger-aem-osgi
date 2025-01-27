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
 * ComAdobeCqSocialUserImplTransportHttpToPublisherProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialUserImplTransportHttpToPublisherProperties_H_
#define ComAdobeCqSocialUserImplTransportHttpToPublisherProperties_H_



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
class  ComAdobeCqSocialUserImplTransportHttpToPublisherProperties
{
public:
    ComAdobeCqSocialUserImplTransportHttpToPublisherProperties();
    virtual ~ComAdobeCqSocialUserImplTransportHttpToPublisherProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialUserImplTransportHttpToPublisherProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEnable() const;
    void setEnable(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAgentConfiguration() const;
    void setAgentConfiguration(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getContextPath() const;
    void setContextPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getDisabledCipherSuites() const;
    void setDisabledCipherSuites(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getEnabledCipherSuites() const;
    void setEnabledCipherSuites(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Enable;
    std::shared_ptr<ConfigNodePropertyArray> m_Agent_configuration;
    std::shared_ptr<ConfigNodePropertyString> m_Context_path;
    std::shared_ptr<ConfigNodePropertyArray> m_Disabled_cipher_suites;
    std::shared_ptr<ConfigNodePropertyArray> m_Enabled_cipher_suites;
};

}
}
}
}

#endif /* ComAdobeCqSocialUserImplTransportHttpToPublisherProperties_H_ */
