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
 * OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties_H_
#define OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties: public OAIObject {
public:
    OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties();
    OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties(QString json);
    ~OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getNumberOfRetriesAllowed();
    void setNumberOfRetriesAllowed(OAIConfigNodePropertyInteger* number_of_retries_allowed);

    OAIConfigNodePropertyArray* getHcTags();
    void setHcTags(OAIConfigNodePropertyArray* hc_tags);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* number_of_retries_allowed;
    bool m_number_of_retries_allowed_isSet;

    OAIConfigNodePropertyArray* hc_tags;
    bool m_hc_tags_isSet;

};

}

#endif /* OAIComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties_H_ */
