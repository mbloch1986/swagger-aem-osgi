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
 * ComDayCqPollingImporterImplPollingImporterImplProperties.h
 *
 * 
 */

#ifndef ComDayCqPollingImporterImplPollingImporterImplProperties_H_
#define ComDayCqPollingImporterImplPollingImporterImplProperties_H_



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
class  ComDayCqPollingImporterImplPollingImporterImplProperties
{
public:
    ComDayCqPollingImporterImplPollingImporterImplProperties();
    virtual ~ComDayCqPollingImporterImplPollingImporterImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqPollingImporterImplPollingImporterImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getImporterMinInterval() const;
    void setImporterMinInterval(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getImporterUser() const;
    void setImporterUser(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExcludePaths() const;
    void setExcludePaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getIncludePaths() const;
    void setIncludePaths(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Importer_min_interval;
    std::shared_ptr<ConfigNodePropertyString> m_Importer_user;
    std::shared_ptr<ConfigNodePropertyArray> m_Exclude_paths;
    std::shared_ptr<ConfigNodePropertyArray> m_Include_paths;
};

}
}
}
}

#endif /* ComDayCqPollingImporterImplPollingImporterImplProperties_H_ */