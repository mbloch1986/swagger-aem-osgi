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
 * OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo_H_
#define OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo: public OAIObject {
public:
    OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo();
    OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo(QString json);
    ~OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties* getProperties();
    void setProperties(OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo_H_ */
