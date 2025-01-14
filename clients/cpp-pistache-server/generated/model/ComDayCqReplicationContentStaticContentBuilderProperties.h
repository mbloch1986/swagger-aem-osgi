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
 * ComDayCqReplicationContentStaticContentBuilderProperties.h
 *
 * 
 */

#ifndef ComDayCqReplicationContentStaticContentBuilderProperties_H_
#define ComDayCqReplicationContentStaticContentBuilderProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqReplicationContentStaticContentBuilderProperties
    : public ModelBase
{
public:
    ComDayCqReplicationContentStaticContentBuilderProperties();
    virtual ~ComDayCqReplicationContentStaticContentBuilderProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqReplicationContentStaticContentBuilderProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getHost() const;
    void setHost(ConfigNodePropertyString const& value);
    bool hostIsSet() const;
    void unsetHost();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getPort() const;
    void setPort(ConfigNodePropertyInteger const& value);
    bool portIsSet() const;
    void unsetPort();

protected:
    ConfigNodePropertyString m_Host;
    bool m_HostIsSet;
    ConfigNodePropertyInteger m_Port;
    bool m_PortIsSet;
};

}
}
}
}

#endif /* ComDayCqReplicationContentStaticContentBuilderProperties_H_ */
