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
 * OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H
#define OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties: public OAIObject {
public:
    OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties();
    OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties(QString json);
    ~OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getPoolName() const;
    void setPoolName(const OAIConfigNodePropertyString &pool_name);

    OAIConfigNodePropertyArray getAllowedPoolNames() const;
    void setAllowedPoolNames(const OAIConfigNodePropertyArray &allowed_pool_names);

    OAIConfigNodePropertyBoolean getSchedulerUseleaderforsingle() const;
    void setSchedulerUseleaderforsingle(const OAIConfigNodePropertyBoolean &scheduler_useleaderforsingle);

    OAIConfigNodePropertyArray getMetricsFilters() const;
    void setMetricsFilters(const OAIConfigNodePropertyArray &metrics_filters);

    OAIConfigNodePropertyInteger getSlowThresholdMillis() const;
    void setSlowThresholdMillis(const OAIConfigNodePropertyInteger &slow_threshold_millis);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString pool_name;
    bool m_pool_name_isSet;

    OAIConfigNodePropertyArray allowed_pool_names;
    bool m_allowed_pool_names_isSet;

    OAIConfigNodePropertyBoolean scheduler_useleaderforsingle;
    bool m_scheduler_useleaderforsingle_isSet;

    OAIConfigNodePropertyArray metrics_filters;
    bool m_metrics_filters_isSet;

    OAIConfigNodePropertyInteger slow_threshold_millis;
    bool m_slow_threshold_millis_isSet;

};

}

#endif // OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H
