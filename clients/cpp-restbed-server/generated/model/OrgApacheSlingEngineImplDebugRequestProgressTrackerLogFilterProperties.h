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
 * OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties_H_
#define OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties
{
public:
    OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties();
    virtual ~OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExtensions() const;
    void setExtensions(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMinDurationMs() const;
    void setMinDurationMs(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxDurationMs() const;
    void setMaxDurationMs(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getCompactLogFormat() const;
    void setCompactLogFormat(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Extensions;
    std::shared_ptr<ConfigNodePropertyInteger> m_MinDurationMs;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxDurationMs;
    std::shared_ptr<ConfigNodePropertyBoolean> m_CompactLogFormat;
};

}
}
}
}

#endif /* OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties_H_ */