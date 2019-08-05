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
 * ComDayCqDamIdsImplIDSPoolManagerImplProperties.h
 *
 * 
 */

#ifndef ComDayCqDamIdsImplIDSPoolManagerImplProperties_H_
#define ComDayCqDamIdsImplIDSPoolManagerImplProperties_H_



#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamIdsImplIDSPoolManagerImplProperties
{
public:
    ComDayCqDamIdsImplIDSPoolManagerImplProperties();
    virtual ~ComDayCqDamIdsImplIDSPoolManagerImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamIdsImplIDSPoolManagerImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxErrorsToBlacklist() const;
    void setMaxErrorsToBlacklist(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getRetryIntervalToWhitelist() const;
    void setRetryIntervalToWhitelist(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getConnectTimeout() const;
    void setConnectTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSocketTimeout() const;
    void setSocketTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getProcessLabel() const;
    void setProcessLabel(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getConnectionUseMax() const;
    void setConnectionUseMax(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Max_errors_to_blacklist;
    std::shared_ptr<ConfigNodePropertyInteger> m_Retry_interval_to_whitelist;
    std::shared_ptr<ConfigNodePropertyInteger> m_Connect_timeout;
    std::shared_ptr<ConfigNodePropertyInteger> m_Socket_timeout;
    std::shared_ptr<ConfigNodePropertyString> m_Process_label;
    std::shared_ptr<ConfigNodePropertyInteger> m_Connection_use_max;
};

}
}
}
}

#endif /* ComDayCqDamIdsImplIDSPoolManagerImplProperties_H_ */