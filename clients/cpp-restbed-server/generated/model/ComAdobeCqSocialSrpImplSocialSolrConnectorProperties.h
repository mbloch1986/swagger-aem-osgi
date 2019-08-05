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
 * ComAdobeCqSocialSrpImplSocialSolrConnectorProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialSrpImplSocialSolrConnectorProperties_H_
#define ComAdobeCqSocialSrpImplSocialSolrConnectorProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialSrpImplSocialSolrConnectorProperties
{
public:
    ComAdobeCqSocialSrpImplSocialSolrConnectorProperties();
    virtual ~ComAdobeCqSocialSrpImplSocialSolrConnectorProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialSrpImplSocialSolrConnectorProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSrpType() const;
    void setSrpType(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Srp_type;
};

}
}
}
}

#endif /* ComAdobeCqSocialSrpImplSocialSolrConnectorProperties_H_ */