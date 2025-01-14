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
 * OAIComAdobeCqProjectsPurgeSchedulerProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqProjectsPurgeSchedulerProperties_H_
#define OAIComAdobeCqProjectsPurgeSchedulerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqProjectsPurgeSchedulerProperties: public OAIObject {
public:
    OAIComAdobeCqProjectsPurgeSchedulerProperties();
    OAIComAdobeCqProjectsPurgeSchedulerProperties(QString json);
    ~OAIComAdobeCqProjectsPurgeSchedulerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqProjectsPurgeSchedulerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getScheduledpurgeName();
    void setScheduledpurgeName(OAIConfigNodePropertyString* scheduledpurge_name);

    OAIConfigNodePropertyBoolean* getScheduledpurgePurgeActive();
    void setScheduledpurgePurgeActive(OAIConfigNodePropertyBoolean* scheduledpurge_purge_active);

    OAIConfigNodePropertyArray* getScheduledpurgeTemplates();
    void setScheduledpurgeTemplates(OAIConfigNodePropertyArray* scheduledpurge_templates);

    OAIConfigNodePropertyBoolean* getScheduledpurgePurgeGroups();
    void setScheduledpurgePurgeGroups(OAIConfigNodePropertyBoolean* scheduledpurge_purge_groups);

    OAIConfigNodePropertyBoolean* getScheduledpurgePurgeAssets();
    void setScheduledpurgePurgeAssets(OAIConfigNodePropertyBoolean* scheduledpurge_purge_assets);

    OAIConfigNodePropertyBoolean* getScheduledpurgeTerminateRunningWorkflows();
    void setScheduledpurgeTerminateRunningWorkflows(OAIConfigNodePropertyBoolean* scheduledpurge_terminate_running_workflows);

    OAIConfigNodePropertyInteger* getScheduledpurgeDaysold();
    void setScheduledpurgeDaysold(OAIConfigNodePropertyInteger* scheduledpurge_daysold);

    OAIConfigNodePropertyInteger* getScheduledpurgeSaveThreshold();
    void setScheduledpurgeSaveThreshold(OAIConfigNodePropertyInteger* scheduledpurge_save_threshold);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* scheduledpurge_name;
    bool m_scheduledpurge_name_isSet;

    OAIConfigNodePropertyBoolean* scheduledpurge_purge_active;
    bool m_scheduledpurge_purge_active_isSet;

    OAIConfigNodePropertyArray* scheduledpurge_templates;
    bool m_scheduledpurge_templates_isSet;

    OAIConfigNodePropertyBoolean* scheduledpurge_purge_groups;
    bool m_scheduledpurge_purge_groups_isSet;

    OAIConfigNodePropertyBoolean* scheduledpurge_purge_assets;
    bool m_scheduledpurge_purge_assets_isSet;

    OAIConfigNodePropertyBoolean* scheduledpurge_terminate_running_workflows;
    bool m_scheduledpurge_terminate_running_workflows_isSet;

    OAIConfigNodePropertyInteger* scheduledpurge_daysold;
    bool m_scheduledpurge_daysold_isSet;

    OAIConfigNodePropertyInteger* scheduledpurge_save_threshold;
    bool m_scheduledpurge_save_threshold_isSet;

};

}

#endif /* OAIComAdobeCqProjectsPurgeSchedulerProperties_H_ */
