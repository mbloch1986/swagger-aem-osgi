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
 * ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties_H_
#define ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties_H_



#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties
{
public:
    ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties();
    virtual ~ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getPriorityOrder() const;
    void setPriorityOrder(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getReplyEmailPatterns() const;
    void setReplyEmailPatterns(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_PriorityOrder;
    std::shared_ptr<ConfigNodePropertyArray> m_ReplyEmailPatterns;
};

}
}
}
}

#endif /* ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties_H_ */
