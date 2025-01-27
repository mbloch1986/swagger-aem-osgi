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
 * OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties_H_
#define OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties: public OAIObject {
public:
    OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties();
    OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties(QString json);
    ~OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getEnable();
    void setEnable(OAIConfigNodePropertyBoolean* enable);

    OAIConfigNodePropertyArray* getAgentConfiguration();
    void setAgentConfiguration(OAIConfigNodePropertyArray* agent_configuration);

    OAIConfigNodePropertyString* getContextPath();
    void setContextPath(OAIConfigNodePropertyString* context_path);

    OAIConfigNodePropertyArray* getDisabledCipherSuites();
    void setDisabledCipherSuites(OAIConfigNodePropertyArray* disabled_cipher_suites);

    OAIConfigNodePropertyArray* getEnabledCipherSuites();
    void setEnabledCipherSuites(OAIConfigNodePropertyArray* enabled_cipher_suites);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* enable;
    bool m_enable_isSet;

    OAIConfigNodePropertyArray* agent_configuration;
    bool m_agent_configuration_isSet;

    OAIConfigNodePropertyString* context_path;
    bool m_context_path_isSet;

    OAIConfigNodePropertyArray* disabled_cipher_suites;
    bool m_disabled_cipher_suites_isSet;

    OAIConfigNodePropertyArray* enabled_cipher_suites;
    bool m_enabled_cipher_suites_isSet;

};

}

#endif /* OAIComAdobeCqSocialUserImplTransportHttpToPublisherProperties_H_ */
