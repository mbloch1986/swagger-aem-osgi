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
 * ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties_H_
#define ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties_H_



#include "ConfigNodePropertyBoolean.h"
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
class  ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties
{
public:
    ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties();
    virtual ~ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEnabled() const;
    void setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getAgentName() const;
    void setAgentName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getDiffPath() const;
    void setDiffPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getObservedPath() const;
    void setObservedPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getServiceName() const;
    void setServiceName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPropertyNames() const;
    void setPropertyNames(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getDistributionDelay() const;
    void setDistributionDelay(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getServiceUserTarget() const;
    void setServiceUserTarget(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Enabled;
    std::shared_ptr<ConfigNodePropertyString> m_AgentName;
    std::shared_ptr<ConfigNodePropertyString> m_DiffPath;
    std::shared_ptr<ConfigNodePropertyString> m_ObservedPath;
    std::shared_ptr<ConfigNodePropertyString> m_ServiceName;
    std::shared_ptr<ConfigNodePropertyString> m_PropertyNames;
    std::shared_ptr<ConfigNodePropertyInteger> m_DistributionDelay;
    std::shared_ptr<ConfigNodePropertyString> m_ServiceUser_target;
};

}
}
}
}

#endif /* ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties_H_ */
