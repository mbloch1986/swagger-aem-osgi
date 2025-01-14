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
 * OAIComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties_H
#define OAIComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties: public OAIObject {
public:
    OAIComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties();
    OAIComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties(QString json);
    ~OAIComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getJobTopics() const;
    void setJobTopics(const OAIConfigNodePropertyString &job_topics);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString job_topics;
    bool m_job_topics_isSet;

};

}

#endif // OAIComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties_H
