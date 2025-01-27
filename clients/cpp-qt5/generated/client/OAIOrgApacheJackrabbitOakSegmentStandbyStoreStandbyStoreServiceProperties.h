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
 * OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties_H_
#define OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyDropDown.h"
#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties: public OAIObject {
public:
    OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties();
    OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties(QString json);
    ~OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getOrgApacheSlingInstallerConfigurationPersist();
    void setOrgApacheSlingInstallerConfigurationPersist(OAIConfigNodePropertyBoolean* org_apache_sling_installer_configuration_persist);

    OAIConfigNodePropertyDropDown* getMode();
    void setMode(OAIConfigNodePropertyDropDown* mode);

    OAIConfigNodePropertyInteger* getPort();
    void setPort(OAIConfigNodePropertyInteger* port);

    OAIConfigNodePropertyString* getPrimaryHost();
    void setPrimaryHost(OAIConfigNodePropertyString* primary_host);

    OAIConfigNodePropertyInteger* getInterval();
    void setInterval(OAIConfigNodePropertyInteger* interval);

    OAIConfigNodePropertyArray* getPrimaryAllowedClientIpRanges();
    void setPrimaryAllowedClientIpRanges(OAIConfigNodePropertyArray* primary_allowed_client_ip_ranges);

    OAIConfigNodePropertyBoolean* getSecure();
    void setSecure(OAIConfigNodePropertyBoolean* secure);

    OAIConfigNodePropertyInteger* getStandbyReadtimeout();
    void setStandbyReadtimeout(OAIConfigNodePropertyInteger* standby_readtimeout);

    OAIConfigNodePropertyBoolean* getStandbyAutoclean();
    void setStandbyAutoclean(OAIConfigNodePropertyBoolean* standby_autoclean);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* org_apache_sling_installer_configuration_persist;
    bool m_org_apache_sling_installer_configuration_persist_isSet;

    OAIConfigNodePropertyDropDown* mode;
    bool m_mode_isSet;

    OAIConfigNodePropertyInteger* port;
    bool m_port_isSet;

    OAIConfigNodePropertyString* primary_host;
    bool m_primary_host_isSet;

    OAIConfigNodePropertyInteger* interval;
    bool m_interval_isSet;

    OAIConfigNodePropertyArray* primary_allowed_client_ip_ranges;
    bool m_primary_allowed_client_ip_ranges_isSet;

    OAIConfigNodePropertyBoolean* secure;
    bool m_secure_isSet;

    OAIConfigNodePropertyInteger* standby_readtimeout;
    bool m_standby_readtimeout_isSet;

    OAIConfigNodePropertyBoolean* standby_autoclean;
    bool m_standby_autoclean_isSet;

};

}

#endif /* OAIOrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties_H_ */
