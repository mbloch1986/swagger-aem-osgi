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
 * OAIComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties_H
#define OAIComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties: public OAIObject {
public:
    OAIComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties();
    OAIComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties(QString json);
    ~OAIComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getNonValidChars() const;
    void setNonValidChars(const OAIConfigNodePropertyString &non_valid_chars);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString non_valid_chars;
    bool m_non_valid_chars_isSet;

};

}

#endif // OAIComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties_H