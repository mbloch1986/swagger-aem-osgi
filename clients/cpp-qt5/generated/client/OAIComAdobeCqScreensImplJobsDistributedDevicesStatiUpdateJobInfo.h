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
 * OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo.h
 *
 * 
 */

#ifndef OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo_H_
#define OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo: public OAIObject {
public:
    OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo();
    OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo(QString json);
    ~OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobProperties* getProperties();
    void setProperties(OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo_H_ */