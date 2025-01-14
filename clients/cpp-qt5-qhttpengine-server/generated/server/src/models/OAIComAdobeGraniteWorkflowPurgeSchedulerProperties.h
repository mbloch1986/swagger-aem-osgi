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
 * OAIComAdobeGraniteWorkflowPurgeSchedulerProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteWorkflowPurgeSchedulerProperties_H
#define OAIComAdobeGraniteWorkflowPurgeSchedulerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyDropDown.h"
#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteWorkflowPurgeSchedulerProperties: public OAIObject {
public:
    OAIComAdobeGraniteWorkflowPurgeSchedulerProperties();
    OAIComAdobeGraniteWorkflowPurgeSchedulerProperties(QString json);
    ~OAIComAdobeGraniteWorkflowPurgeSchedulerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getScheduledpurgeName() const;
    void setScheduledpurgeName(const OAIConfigNodePropertyString &scheduledpurge_name);

    OAIConfigNodePropertyDropDown getScheduledpurgeWorkflowStatus() const;
    void setScheduledpurgeWorkflowStatus(const OAIConfigNodePropertyDropDown &scheduledpurge_workflow_status);

    OAIConfigNodePropertyArray getScheduledpurgeModelIds() const;
    void setScheduledpurgeModelIds(const OAIConfigNodePropertyArray &scheduledpurge_model_ids);

    OAIConfigNodePropertyInteger getScheduledpurgeDaysold() const;
    void setScheduledpurgeDaysold(const OAIConfigNodePropertyInteger &scheduledpurge_daysold);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString scheduledpurge_name;
    bool m_scheduledpurge_name_isSet;

    OAIConfigNodePropertyDropDown scheduledpurge_workflow_status;
    bool m_scheduledpurge_workflow_status_isSet;

    OAIConfigNodePropertyArray scheduledpurge_model_ids;
    bool m_scheduledpurge_model_ids_isSet;

    OAIConfigNodePropertyInteger scheduledpurge_daysold;
    bool m_scheduledpurge_daysold_isSet;

};

}

#endif // OAIComAdobeGraniteWorkflowPurgeSchedulerProperties_H
