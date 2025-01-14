/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties_H_
#define ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties
    : public ModelBase
{
public:
    ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties();
    virtual ~ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPath() const;
    void setPath(ConfigNodePropertyString const& value);
    bool pathIsSet() const;
    void unsetPath();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getServiceRanking() const;
    void setServiceRanking(ConfigNodePropertyInteger const& value);
    bool serviceRankingIsSet() const;
    void unsetService_ranking();

protected:
    ConfigNodePropertyString m_Path;
    bool m_PathIsSet;
    ConfigNodePropertyInteger m_Service_ranking;
    bool m_Service_rankingIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties_H_ */
