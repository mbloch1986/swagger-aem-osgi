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
 * OAIOrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties_H
#define OAIOrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyDropDown.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties: public OAIObject {
public:
    OAIOrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties();
    OAIOrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties(QString json);
    ~OAIOrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getName() const;
    void setName(const OAIConfigNodePropertyString &name);

    OAIConfigNodePropertyString getTitle() const;
    void setTitle(const OAIConfigNodePropertyString &title);

    OAIConfigNodePropertyString getDetails() const;
    void setDetails(const OAIConfigNodePropertyString &details);

    OAIConfigNodePropertyBoolean getEnabled() const;
    void setEnabled(const OAIConfigNodePropertyBoolean &enabled);

    OAIConfigNodePropertyString getServiceName() const;
    void setServiceName(const OAIConfigNodePropertyString &service_name);

    OAIConfigNodePropertyDropDown getLogLevel() const;
    void setLogLevel(const OAIConfigNodePropertyDropDown &log_level);

    OAIConfigNodePropertyArray getAllowedRoots() const;
    void setAllowedRoots(const OAIConfigNodePropertyArray &allowed_roots);

    OAIConfigNodePropertyString getRequestAuthorizationStrategyTarget() const;
    void setRequestAuthorizationStrategyTarget(const OAIConfigNodePropertyString &request_authorization_strategy_target);

    OAIConfigNodePropertyString getQueueProviderFactoryTarget() const;
    void setQueueProviderFactoryTarget(const OAIConfigNodePropertyString &queue_provider_factory_target);

    OAIConfigNodePropertyString getPackageBuilderTarget() const;
    void setPackageBuilderTarget(const OAIConfigNodePropertyString &package_builder_target);

    OAIConfigNodePropertyString getTriggersTarget() const;
    void setTriggersTarget(const OAIConfigNodePropertyString &triggers_target);

    OAIConfigNodePropertyArray getPriorityQueues() const;
    void setPriorityQueues(const OAIConfigNodePropertyArray &priority_queues);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString name;
    bool m_name_isSet;

    OAIConfigNodePropertyString title;
    bool m_title_isSet;

    OAIConfigNodePropertyString details;
    bool m_details_isSet;

    OAIConfigNodePropertyBoolean enabled;
    bool m_enabled_isSet;

    OAIConfigNodePropertyString service_name;
    bool m_service_name_isSet;

    OAIConfigNodePropertyDropDown log_level;
    bool m_log_level_isSet;

    OAIConfigNodePropertyArray allowed_roots;
    bool m_allowed_roots_isSet;

    OAIConfigNodePropertyString request_authorization_strategy_target;
    bool m_request_authorization_strategy_target_isSet;

    OAIConfigNodePropertyString queue_provider_factory_target;
    bool m_queue_provider_factory_target_isSet;

    OAIConfigNodePropertyString package_builder_target;
    bool m_package_builder_target_isSet;

    OAIConfigNodePropertyString triggers_target;
    bool m_triggers_target_isSet;

    OAIConfigNodePropertyArray priority_queues;
    bool m_priority_queues_isSet;

};

}

#endif // OAIOrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties_H
