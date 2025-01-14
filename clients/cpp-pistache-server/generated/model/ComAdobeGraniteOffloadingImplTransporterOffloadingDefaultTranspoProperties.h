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
 * ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties_H_
#define ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties
    : public ModelBase
{
public:
    ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties();
    virtual ~ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getDefaultTransportAgentToWorkerPrefix() const;
    void setDefaultTransportAgentToWorkerPrefix(ConfigNodePropertyString const& value);
    bool defaultTransportAgentToWorkerPrefixIsSet() const;
    void unsetDefault_transport_agent_to_worker_prefix();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getDefaultTransportAgentToMasterPrefix() const;
    void setDefaultTransportAgentToMasterPrefix(ConfigNodePropertyString const& value);
    bool defaultTransportAgentToMasterPrefixIsSet() const;
    void unsetDefault_transport_agent_to_master_prefix();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getDefaultTransportInputPackage() const;
    void setDefaultTransportInputPackage(ConfigNodePropertyString const& value);
    bool defaultTransportInputPackageIsSet() const;
    void unsetDefault_transport_input_package();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getDefaultTransportOutputPackage() const;
    void setDefaultTransportOutputPackage(ConfigNodePropertyString const& value);
    bool defaultTransportOutputPackageIsSet() const;
    void unsetDefault_transport_output_package();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDefaultTransportReplicationSynchronous() const;
    void setDefaultTransportReplicationSynchronous(ConfigNodePropertyBoolean const& value);
    bool defaultTransportReplicationSynchronousIsSet() const;
    void unsetDefault_transport_replication_synchronous();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDefaultTransportContentpackage() const;
    void setDefaultTransportContentpackage(ConfigNodePropertyBoolean const& value);
    bool defaultTransportContentpackageIsSet() const;
    void unsetDefault_transport_contentpackage();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getOffloadingTransporterDefaultEnabled() const;
    void setOffloadingTransporterDefaultEnabled(ConfigNodePropertyBoolean const& value);
    bool offloadingTransporterDefaultEnabledIsSet() const;
    void unsetOffloading_transporter_default_enabled();

protected:
    ConfigNodePropertyString m_Default_transport_agent_to_worker_prefix;
    bool m_Default_transport_agent_to_worker_prefixIsSet;
    ConfigNodePropertyString m_Default_transport_agent_to_master_prefix;
    bool m_Default_transport_agent_to_master_prefixIsSet;
    ConfigNodePropertyString m_Default_transport_input_package;
    bool m_Default_transport_input_packageIsSet;
    ConfigNodePropertyString m_Default_transport_output_package;
    bool m_Default_transport_output_packageIsSet;
    ConfigNodePropertyBoolean m_Default_transport_replication_synchronous;
    bool m_Default_transport_replication_synchronousIsSet;
    ConfigNodePropertyBoolean m_Default_transport_contentpackage;
    bool m_Default_transport_contentpackageIsSet;
    ConfigNodePropertyBoolean m_Offloading_transporter_default_enabled;
    bool m_Offloading_transporter_default_enabledIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties_H_ */
