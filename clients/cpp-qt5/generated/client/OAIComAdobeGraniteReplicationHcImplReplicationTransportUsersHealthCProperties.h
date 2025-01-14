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
 * OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties_H_
#define OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties: public OAIObject {
public:
    OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties();
    OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties(QString json);
    ~OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getHcTags();
    void setHcTags(OAIConfigNodePropertyArray* hc_tags);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* hc_tags;
    bool m_hc_tags_isSet;

};

}

#endif /* OAIComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties_H_ */
