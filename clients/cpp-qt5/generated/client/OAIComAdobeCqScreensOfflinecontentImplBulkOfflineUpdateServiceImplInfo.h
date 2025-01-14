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
 * OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo.h
 *
 * 
 */

#ifndef OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo_H_
#define OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo: public OAIObject {
public:
    OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo();
    OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo(QString json);
    ~OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplProperties* getProperties();
    void setProperties(OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplInfo_H_ */
