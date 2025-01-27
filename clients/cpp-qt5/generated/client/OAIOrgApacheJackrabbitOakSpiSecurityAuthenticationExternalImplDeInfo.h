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
 * OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo.h
 *
 * 
 */

#ifndef OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo_H_
#define OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo_H_

#include <QJsonObject>


#include "OAIOAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo: public OAIObject {
public:
    OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo();
    OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo(QString json);
    ~OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties* getProperties();
    void setProperties(OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeInfo_H_ */
