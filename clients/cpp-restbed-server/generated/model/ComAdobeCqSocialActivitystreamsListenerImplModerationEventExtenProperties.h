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
 * ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_
#define ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties
{
public:
    ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties();
    virtual ~ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getAccepted() const;
    void setAccepted(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getRanked() const;
    void setRanked(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Accepted;
    std::shared_ptr<ConfigNodePropertyInteger> m_Ranked;
};

}
}
}
}

#endif /* ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_ */
