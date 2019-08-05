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
 * OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties.h
 *
 * 
 */

#ifndef OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties_H_
#define OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties: public OAIObject {
public:
    OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties();
    OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties(QString json);
    ~OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getFormportalInterval();
    void setFormportalInterval(OAIConfigNodePropertyString* formportal_interval);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* formportal_interval;
    bool m_formportal_interval_isSet;

};

}

#endif /* OAIComAdobeFdFpConfigFormsPortalSchedulerServiceProperties_H_ */