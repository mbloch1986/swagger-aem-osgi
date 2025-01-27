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
 * ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties.h
 *
 * 
 */

#ifndef ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties_H_
#define ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties
    : public ModelBase
{
public:
    ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties();
    virtual ~ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getCqAnalyticsAdapterfactoryContextstores() const;
    void setCqAnalyticsAdapterfactoryContextstores(ConfigNodePropertyArray const& value);
    bool cqAnalyticsAdapterfactoryContextstoresIsSet() const;
    void unsetCq_analytics_adapterfactory_contextstores();

protected:
    ConfigNodePropertyArray m_Cq_analytics_adapterfactory_contextstores;
    bool m_Cq_analytics_adapterfactory_contextstoresIsSet;
};

}
}
}
}

#endif /* ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties_H_ */
