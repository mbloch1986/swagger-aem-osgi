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
 * OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationInfo.h
 *
 * 
 */

#ifndef OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationInfo_H
#define OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationInfo_H

#include <QJsonObject>


#include "OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationInfo: public OAIObject {
public:
    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationInfo();
    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationInfo(QString json);
    ~OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationInfo() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPid() const;
    void setPid(const QString &pid);

    QString getTitle() const;
    void setTitle(const QString &title);

    QString getDescription() const;
    void setDescription(const QString &description);

    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties getProperties() const;
    void setProperties(const OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties &properties);

    virtual bool isSet() const override;

private:
    QString pid;
    bool m_pid_isSet;

    QString title;
    bool m_title_isSet;

    QString description;
    bool m_description_isSet;

    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties properties;
    bool m_properties_isSet;

};

}

#endif // OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationInfo_H
