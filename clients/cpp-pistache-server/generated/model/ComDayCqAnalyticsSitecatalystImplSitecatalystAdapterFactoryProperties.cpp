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


#include "ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties()
{
    m_Cq_analytics_adapterfactory_contextstoresIsSet = false;
    
}

ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::~ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties()
{
}

void ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_analytics_adapterfactory_contextstoresIsSet)
    {
        val["cq.analytics.adapterfactory.contextstores"] = ModelBase::toJson(m_Cq_analytics_adapterfactory_contextstores);
    }
    

    return val;
}

void ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.analytics.adapterfactory.contextstores") != val.end())
    {
        if(!val["cq.analytics.adapterfactory.contextstores"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["cq.analytics.adapterfactory.contextstores"]);
            setCqAnalyticsAdapterfactoryContextstores( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::getCqAnalyticsAdapterfactoryContextstores() const
{
    return m_Cq_analytics_adapterfactory_contextstores;
}
void ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::setCqAnalyticsAdapterfactoryContextstores(ConfigNodePropertyArray const& value)
{
    m_Cq_analytics_adapterfactory_contextstores = value;
    m_Cq_analytics_adapterfactory_contextstoresIsSet = true;
}
bool ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::cqAnalyticsAdapterfactoryContextstoresIsSet() const
{
    return m_Cq_analytics_adapterfactory_contextstoresIsSet;
}
void ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties::unsetCq_analytics_adapterfactory_contextstores()
{
    m_Cq_analytics_adapterfactory_contextstoresIsSet = false;
}

}
}
}
}

