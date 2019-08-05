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
 * OrgApacheSlingEngineImplSlingMainServletProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingEngineImplSlingMainServletProperties_H_
#define OrgApacheSlingEngineImplSlingMainServletProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingEngineImplSlingMainServletProperties
{
public:
    OrgApacheSlingEngineImplSlingMainServletProperties();
    virtual ~OrgApacheSlingEngineImplSlingMainServletProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingEngineImplSlingMainServletProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSlingMaxCalls() const;
    void setSlingMaxCalls(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSlingMaxInclusions() const;
    void setSlingMaxInclusions(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSlingTraceAllow() const;
    void setSlingTraceAllow(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSlingMaxRecordRequests() const;
    void setSlingMaxRecordRequests(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getSlingStorePatternRequests() const;
    void setSlingStorePatternRequests(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSlingServerinfo() const;
    void setSlingServerinfo(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getSlingAdditionalResponseHeaders() const;
    void setSlingAdditionalResponseHeaders(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Sling_max_calls;
    std::shared_ptr<ConfigNodePropertyInteger> m_Sling_max_inclusions;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Sling_trace_allow;
    std::shared_ptr<ConfigNodePropertyInteger> m_Sling_max_record_requests;
    std::shared_ptr<ConfigNodePropertyArray> m_Sling_store_pattern_requests;
    std::shared_ptr<ConfigNodePropertyString> m_Sling_serverinfo;
    std::shared_ptr<ConfigNodePropertyArray> m_Sling_additional_response_headers;
};

}
}
}
}

#endif /* OrgApacheSlingEngineImplSlingMainServletProperties_H_ */