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
 * OAIOrgApacheFelixEventadminImplEventAdminProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheFelixEventadminImplEventAdminProperties_H
#define OAIOrgApacheFelixEventadminImplEventAdminProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyFloat.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheFelixEventadminImplEventAdminProperties: public OAIObject {
public:
    OAIOrgApacheFelixEventadminImplEventAdminProperties();
    OAIOrgApacheFelixEventadminImplEventAdminProperties(QString json);
    ~OAIOrgApacheFelixEventadminImplEventAdminProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getOrgApacheFelixEventadminThreadPoolSize() const;
    void setOrgApacheFelixEventadminThreadPoolSize(const OAIConfigNodePropertyInteger &org_apache_felix_eventadmin_thread_pool_size);

    OAIConfigNodePropertyFloat getOrgApacheFelixEventadminAsyncToSyncThreadRatio() const;
    void setOrgApacheFelixEventadminAsyncToSyncThreadRatio(const OAIConfigNodePropertyFloat &org_apache_felix_eventadmin_async_to_sync_thread_ratio);

    OAIConfigNodePropertyInteger getOrgApacheFelixEventadminTimeout() const;
    void setOrgApacheFelixEventadminTimeout(const OAIConfigNodePropertyInteger &org_apache_felix_eventadmin_timeout);

    OAIConfigNodePropertyBoolean getOrgApacheFelixEventadminRequireTopic() const;
    void setOrgApacheFelixEventadminRequireTopic(const OAIConfigNodePropertyBoolean &org_apache_felix_eventadmin_require_topic);

    OAIConfigNodePropertyArray getOrgApacheFelixEventadminIgnoreTimeout() const;
    void setOrgApacheFelixEventadminIgnoreTimeout(const OAIConfigNodePropertyArray &org_apache_felix_eventadmin_ignore_timeout);

    OAIConfigNodePropertyArray getOrgApacheFelixEventadminIgnoreTopic() const;
    void setOrgApacheFelixEventadminIgnoreTopic(const OAIConfigNodePropertyArray &org_apache_felix_eventadmin_ignore_topic);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger org_apache_felix_eventadmin_thread_pool_size;
    bool m_org_apache_felix_eventadmin_thread_pool_size_isSet;

    OAIConfigNodePropertyFloat org_apache_felix_eventadmin_async_to_sync_thread_ratio;
    bool m_org_apache_felix_eventadmin_async_to_sync_thread_ratio_isSet;

    OAIConfigNodePropertyInteger org_apache_felix_eventadmin_timeout;
    bool m_org_apache_felix_eventadmin_timeout_isSet;

    OAIConfigNodePropertyBoolean org_apache_felix_eventadmin_require_topic;
    bool m_org_apache_felix_eventadmin_require_topic_isSet;

    OAIConfigNodePropertyArray org_apache_felix_eventadmin_ignore_timeout;
    bool m_org_apache_felix_eventadmin_ignore_timeout_isSet;

    OAIConfigNodePropertyArray org_apache_felix_eventadmin_ignore_topic;
    bool m_org_apache_felix_eventadmin_ignore_topic_isSet;

};

}

#endif // OAIOrgApacheFelixEventadminImplEventAdminProperties_H
