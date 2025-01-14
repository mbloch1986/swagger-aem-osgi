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
 * ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties_H_
#define ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties();
    virtual ~ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getServiceRanking() const;
    void setServiceRanking(ConfigNodePropertyInteger const& value);
    bool serviceRankingIsSet() const;
    void unsetService_ranking();

protected:
    ConfigNodePropertyInteger m_Service_ranking;
    bool m_Service_rankingIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties_H_ */
