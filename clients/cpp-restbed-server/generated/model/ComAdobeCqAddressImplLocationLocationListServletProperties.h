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
 * ComAdobeCqAddressImplLocationLocationListServletProperties.h
 *
 * 
 */

#ifndef ComAdobeCqAddressImplLocationLocationListServletProperties_H_
#define ComAdobeCqAddressImplLocationLocationListServletProperties_H_



#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqAddressImplLocationLocationListServletProperties
{
public:
    ComAdobeCqAddressImplLocationLocationListServletProperties();
    virtual ~ComAdobeCqAddressImplLocationLocationListServletProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqAddressImplLocationLocationListServletProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCqAddressLocationDefaultMaxResults() const;
    void setCqAddressLocationDefaultMaxResults(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Cq_address_location_default_maxResults;
};

}
}
}
}

#endif /* ComAdobeCqAddressImplLocationLocationListServletProperties_H_ */