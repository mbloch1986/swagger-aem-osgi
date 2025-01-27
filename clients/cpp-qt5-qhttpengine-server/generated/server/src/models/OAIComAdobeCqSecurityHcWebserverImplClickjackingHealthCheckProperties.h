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
 * OAIComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties_H
#define OAIComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties: public OAIObject {
public:
    OAIComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties();
    OAIComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties(QString json);
    ~OAIComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getHcTags() const;
    void setHcTags(const OAIConfigNodePropertyArray &hc_tags);

    OAIConfigNodePropertyString getWebserverAddress() const;
    void setWebserverAddress(const OAIConfigNodePropertyString &webserver_address);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray hc_tags;
    bool m_hc_tags_isSet;

    OAIConfigNodePropertyString webserver_address;
    bool m_webserver_address_isSet;

};

}

#endif // OAIComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties_H
