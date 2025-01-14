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
 * OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties_H_
#define OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties: public OAIObject {
public:
    OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties();
    OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties(QString json);
    ~OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getOrgApacheSlingInstallerConfigurationPersist();
    void setOrgApacheSlingInstallerConfigurationPersist(OAIConfigNodePropertyBoolean* org_apache_sling_installer_configuration_persist);

    OAIConfigNodePropertyArray* getJobConsumermanagerWhitelist();
    void setJobConsumermanagerWhitelist(OAIConfigNodePropertyArray* job_consumermanager_whitelist);

    OAIConfigNodePropertyArray* getJobConsumermanagerBlacklist();
    void setJobConsumermanagerBlacklist(OAIConfigNodePropertyArray* job_consumermanager_blacklist);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* org_apache_sling_installer_configuration_persist;
    bool m_org_apache_sling_installer_configuration_persist_isSet;

    OAIConfigNodePropertyArray* job_consumermanager_whitelist;
    bool m_job_consumermanager_whitelist_isSet;

    OAIConfigNodePropertyArray* job_consumermanager_blacklist;
    bool m_job_consumermanager_blacklist_isSet;

};

}

#endif /* OAIOrgApacheSlingEventImplJobsJobConsumerManagerProperties_H_ */
