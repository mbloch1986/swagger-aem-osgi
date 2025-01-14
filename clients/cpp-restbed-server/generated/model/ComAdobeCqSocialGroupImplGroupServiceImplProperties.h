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
 * ComAdobeCqSocialGroupImplGroupServiceImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialGroupImplGroupServiceImplProperties_H_
#define ComAdobeCqSocialGroupImplGroupServiceImplProperties_H_



#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialGroupImplGroupServiceImplProperties
{
public:
    ComAdobeCqSocialGroupImplGroupServiceImplProperties();
    virtual ~ComAdobeCqSocialGroupImplGroupServiceImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialGroupImplGroupServiceImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxWaitTime() const;
    void setMaxWaitTime(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMinWaitBetweenRetries() const;
    void setMinWaitBetweenRetries(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxWaitTime;
    std::shared_ptr<ConfigNodePropertyInteger> m_MinWaitBetweenRetries;
};

}
}
}
}

#endif /* ComAdobeCqSocialGroupImplGroupServiceImplProperties_H_ */
