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
 * OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo_H_
#define OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo: public OAIObject {
public:
    OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo();
    OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo(QString json);
    ~OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties* getProperties();
    void setProperties(OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo_H_ */
