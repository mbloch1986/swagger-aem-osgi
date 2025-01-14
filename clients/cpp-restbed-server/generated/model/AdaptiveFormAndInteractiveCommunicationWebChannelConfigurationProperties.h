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
 * AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.h
 *
 * 
 */

#ifndef AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties_H_
#define AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties
{
public:
    AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties();
    virtual ~AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getShowPlaceholder() const;
    void setShowPlaceholder(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaximumCacheEntries() const;
    void setMaximumCacheEntries(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getAfScriptingCompatversion() const;
    void setAfScriptingCompatversion(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getMakeFileNameUnique() const;
    void setMakeFileNameUnique(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getGeneratingCompliantData() const;
    void setGeneratingCompliantData(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_ShowPlaceholder;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaximumCacheEntries;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Af_scripting_compatversion;
    std::shared_ptr<ConfigNodePropertyBoolean> m_MakeFileNameUnique;
    std::shared_ptr<ConfigNodePropertyBoolean> m_GeneratingCompliantData;
};

}
}
}
}

#endif /* AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties_H_ */
