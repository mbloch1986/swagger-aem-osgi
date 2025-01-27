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
 * ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties_H_
#define ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties_H_



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
class  ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties
{
public:
    ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties();
    virtual ~ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getFieldWhitelist() const;
    void setFieldWhitelist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getSitePathFilters() const;
    void setSitePathFilters(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSitePackageGroup() const;
    void setSitePackageGroup(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_FieldWhitelist;
    std::shared_ptr<ConfigNodePropertyArray> m_SitePathFilters;
    std::shared_ptr<ConfigNodePropertyString> m_SitePackageGroup;
};

}
}
}
}

#endif /* ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties_H_ */
