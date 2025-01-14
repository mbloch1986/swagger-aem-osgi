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
 * OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties_H_
#define OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties: public OAIObject {
public:
    OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties();
    OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties(QString json);
    ~OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getHcName();
    void setHcName(OAIConfigNodePropertyString* hc_name);

    OAIConfigNodePropertyArray* getHcTags();
    void setHcTags(OAIConfigNodePropertyArray* hc_tags);

    OAIConfigNodePropertyString* getHcMbeanName();
    void setHcMbeanName(OAIConfigNodePropertyString* hc_mbean_name);

    OAIConfigNodePropertyInteger* getNumberOfRetriesAllowed();
    void setNumberOfRetriesAllowed(OAIConfigNodePropertyInteger* number_of_retries_allowed);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* hc_name;
    bool m_hc_name_isSet;

    OAIConfigNodePropertyArray* hc_tags;
    bool m_hc_tags_isSet;

    OAIConfigNodePropertyString* hc_mbean_name;
    bool m_hc_mbean_name_isSet;

    OAIConfigNodePropertyInteger* number_of_retries_allowed;
    bool m_number_of_retries_allowed_isSet;

};

}

#endif /* OAIOrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties_H_ */
