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
 * OAIComDayCqSecurityACLSetupProperties.h
 *
 * 
 */

#ifndef OAIComDayCqSecurityACLSetupProperties_H
#define OAIComDayCqSecurityACLSetupProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqSecurityACLSetupProperties: public OAIObject {
public:
    OAIComDayCqSecurityACLSetupProperties();
    OAIComDayCqSecurityACLSetupProperties(QString json);
    ~OAIComDayCqSecurityACLSetupProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getCqAclsetupRules() const;
    void setCqAclsetupRules(const OAIConfigNodePropertyArray &cq_aclsetup_rules);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray cq_aclsetup_rules;
    bool m_cq_aclsetup_rules_isSet;

};

}

#endif // OAIComDayCqSecurityACLSetupProperties_H
