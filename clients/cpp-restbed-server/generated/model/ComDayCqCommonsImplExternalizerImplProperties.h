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
 * ComDayCqCommonsImplExternalizerImplProperties.h
 *
 * 
 */

#ifndef ComDayCqCommonsImplExternalizerImplProperties_H_
#define ComDayCqCommonsImplExternalizerImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
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
class  ComDayCqCommonsImplExternalizerImplProperties
{
public:
    ComDayCqCommonsImplExternalizerImplProperties();
    virtual ~ComDayCqCommonsImplExternalizerImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqCommonsImplExternalizerImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExternalizerDomains() const;
    void setExternalizerDomains(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getExternalizerHost() const;
    void setExternalizerHost(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getExternalizerContextpath() const;
    void setExternalizerContextpath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getExternalizerEncodedpath() const;
    void setExternalizerEncodedpath(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Externalizer_domains;
    std::shared_ptr<ConfigNodePropertyString> m_Externalizer_host;
    std::shared_ptr<ConfigNodePropertyString> m_Externalizer_contextpath;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Externalizer_encodedpath;
};

}
}
}
}

#endif /* ComDayCqCommonsImplExternalizerImplProperties_H_ */
