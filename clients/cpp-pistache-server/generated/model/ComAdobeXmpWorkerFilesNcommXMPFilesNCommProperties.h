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
 * ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties.h
 *
 * 
 */

#ifndef ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties_H_
#define ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties
    : public ModelBase
{
public:
    ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties();
    virtual ~ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getMaxConnections() const;
    void setMaxConnections(ConfigNodePropertyString const& value);
    bool maxConnectionsIsSet() const;
    void unsetMaxConnections();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getMaxRequests() const;
    void setMaxRequests(ConfigNodePropertyString const& value);
    bool maxRequestsIsSet() const;
    void unsetMaxRequests();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getRequestTimeout() const;
    void setRequestTimeout(ConfigNodePropertyString const& value);
    bool requestTimeoutIsSet() const;
    void unsetRequestTimeout();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getLogDir() const;
    void setLogDir(ConfigNodePropertyString const& value);
    bool logDirIsSet() const;
    void unsetLogDir();

protected:
    ConfigNodePropertyString m_MaxConnections;
    bool m_MaxConnectionsIsSet;
    ConfigNodePropertyString m_MaxRequests;
    bool m_MaxRequestsIsSet;
    ConfigNodePropertyString m_RequestTimeout;
    bool m_RequestTimeoutIsSet;
    ConfigNodePropertyString m_LogDir;
    bool m_LogDirIsSet;
};

}
}
}
}

#endif /* ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties_H_ */
