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
 * OAIComDayCqWcmFoundationImplPageImpressionsTrackerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmFoundationImplPageImpressionsTrackerProperties_H
#define OAIComDayCqWcmFoundationImplPageImpressionsTrackerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmFoundationImplPageImpressionsTrackerProperties: public OAIObject {
public:
    OAIComDayCqWcmFoundationImplPageImpressionsTrackerProperties();
    OAIComDayCqWcmFoundationImplPageImpressionsTrackerProperties(QString json);
    ~OAIComDayCqWcmFoundationImplPageImpressionsTrackerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getSlingAuthRequirements() const;
    void setSlingAuthRequirements(const OAIConfigNodePropertyString &sling_auth_requirements);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString sling_auth_requirements;
    bool m_sling_auth_requirements_isSet;

};

}

#endif // OAIComDayCqWcmFoundationImplPageImpressionsTrackerProperties_H
