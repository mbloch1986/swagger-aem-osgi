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
 * ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties_H_
#define ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
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
class  ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties
{
public:
    ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties();
    virtual ~ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCdnConfigDistributionDomain() const;
    void setCdnConfigDistributionDomain(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getCdnConfigEnableRewriting() const;
    void setCdnConfigEnableRewriting(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCdnConfigPathPrefixes() const;
    void setCdnConfigPathPrefixes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCdnConfigCdnttl() const;
    void setCdnConfigCdnttl(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCdnConfigApplicationProtocol() const;
    void setCdnConfigApplicationProtocol(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Cdn_config_distribution_domain;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Cdn_config_enable_rewriting;
    std::shared_ptr<ConfigNodePropertyArray> m_Cdn_config_path_prefixes;
    std::shared_ptr<ConfigNodePropertyInteger> m_Cdn_config_cdnttl;
    std::shared_ptr<ConfigNodePropertyString> m_Cdn_config_application_protocol;
};

}
}
}
}

#endif /* ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties_H_ */