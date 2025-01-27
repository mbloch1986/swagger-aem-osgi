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
 * ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties
    : public ModelBase
{
public:
    ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties();
    virtual ~ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCqAnalyticsSitecatalystServiceDatacenterUrl() const;
    bool cqAnalyticsSitecatalystServiceDatacenterUrlIsSet() const;
    void unsetCq_analytics_sitecatalyst_service_datacenter_url();
    void setCqAnalyticsSitecatalystServiceDatacenterUrl(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getDevhostnamepatterns() const;
    bool devhostnamepatternsIsSet() const;
    void unsetDevhostnamepatterns();
    void setDevhostnamepatterns(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getConnectionTimeout() const;
    bool connectionTimeoutIsSet() const;
    void unsetConnection_timeout();
    void setConnectionTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSocketTimeout() const;
    bool socketTimeoutIsSet() const;
    void unsetSocket_timeout();
    void setSocketTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Cq_analytics_sitecatalyst_service_datacenter_url;
    bool m_Cq_analytics_sitecatalyst_service_datacenter_urlIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Devhostnamepatterns;
    bool m_DevhostnamepatternsIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Connection_timeout;
    bool m_Connection_timeoutIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Socket_timeout;
    bool m_Socket_timeoutIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties_H_ */
