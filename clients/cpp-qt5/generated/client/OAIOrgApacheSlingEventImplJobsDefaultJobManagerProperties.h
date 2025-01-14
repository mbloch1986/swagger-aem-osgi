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
 * OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties_H_
#define OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyDropDown.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties: public OAIObject {
public:
    OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties();
    OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties(QString json);
    ~OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyDropDown* getQueuePriority();
    void setQueuePriority(OAIConfigNodePropertyDropDown* queue_priority);

    OAIConfigNodePropertyInteger* getQueueRetries();
    void setQueueRetries(OAIConfigNodePropertyInteger* queue_retries);

    OAIConfigNodePropertyInteger* getQueueRetrydelay();
    void setQueueRetrydelay(OAIConfigNodePropertyInteger* queue_retrydelay);

    OAIConfigNodePropertyInteger* getQueueMaxparallel();
    void setQueueMaxparallel(OAIConfigNodePropertyInteger* queue_maxparallel);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyDropDown* queue_priority;
    bool m_queue_priority_isSet;

    OAIConfigNodePropertyInteger* queue_retries;
    bool m_queue_retries_isSet;

    OAIConfigNodePropertyInteger* queue_retrydelay;
    bool m_queue_retrydelay_isSet;

    OAIConfigNodePropertyInteger* queue_maxparallel;
    bool m_queue_maxparallel_isSet;

};

}

#endif /* OAIOrgApacheSlingEventImplJobsDefaultJobManagerProperties_H_ */
