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
 * OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties_H_
#define OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyDropDown.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties: public OAIObject {
public:
    OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties();
    OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties(QString json);
    ~OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getRequiredServicePids();
    void setRequiredServicePids(OAIConfigNodePropertyArray* required_service_pids);

    OAIConfigNodePropertyDropDown* getAuthorizationCompositionType();
    void setAuthorizationCompositionType(OAIConfigNodePropertyDropDown* authorization_composition_type);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* required_service_pids;
    bool m_required_service_pids_isSet;

    OAIConfigNodePropertyDropDown* authorization_composition_type;
    bool m_authorization_composition_type_isSet;

};

}

#endif /* OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties_H_ */
