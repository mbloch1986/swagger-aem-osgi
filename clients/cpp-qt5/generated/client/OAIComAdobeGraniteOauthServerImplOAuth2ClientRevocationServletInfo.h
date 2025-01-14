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
 * OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo_H_
#define OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo: public OAIObject {
public:
    OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo();
    OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo(QString json);
    ~OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties* getProperties();
    void setProperties(OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo_H_ */
