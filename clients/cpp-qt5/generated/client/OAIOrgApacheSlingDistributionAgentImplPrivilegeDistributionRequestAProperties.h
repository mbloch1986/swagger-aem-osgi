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
 * OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties_H_
#define OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties: public OAIObject {
public:
    OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties();
    OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties(QString json);
    ~OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getName();
    void setName(OAIConfigNodePropertyString* name);

    OAIConfigNodePropertyString* getJcrPrivilege();
    void setJcrPrivilege(OAIConfigNodePropertyString* jcr_privilege);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* name;
    bool m_name_isSet;

    OAIConfigNodePropertyString* jcr_privilege;
    bool m_jcr_privilege_isSet;

};

}

#endif /* OAIOrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties_H_ */