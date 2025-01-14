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
 * OAIComAdobeFormsCommonServletTempCleanUpTaskProperties.h
 *
 * 
 */

#ifndef OAIComAdobeFormsCommonServletTempCleanUpTaskProperties_H
#define OAIComAdobeFormsCommonServletTempCleanUpTaskProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeFormsCommonServletTempCleanUpTaskProperties: public OAIObject {
public:
    OAIComAdobeFormsCommonServletTempCleanUpTaskProperties();
    OAIComAdobeFormsCommonServletTempCleanUpTaskProperties(QString json);
    ~OAIComAdobeFormsCommonServletTempCleanUpTaskProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getSchedulerExpression() const;
    void setSchedulerExpression(const OAIConfigNodePropertyString &scheduler_expression);

    OAIConfigNodePropertyString getDurationForTemporaryStorage() const;
    void setDurationForTemporaryStorage(const OAIConfigNodePropertyString &duration_for_temporary_storage);

    OAIConfigNodePropertyString getDurationForAnonymousStorage() const;
    void setDurationForAnonymousStorage(const OAIConfigNodePropertyString &duration_for_anonymous_storage);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString scheduler_expression;
    bool m_scheduler_expression_isSet;

    OAIConfigNodePropertyString duration_for_temporary_storage;
    bool m_duration_for_temporary_storage_isSet;

    OAIConfigNodePropertyString duration_for_anonymous_storage;
    bool m_duration_for_anonymous_storage_isSet;

};

}

#endif // OAIComAdobeFormsCommonServletTempCleanUpTaskProperties_H
