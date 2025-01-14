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
 * OAIComDayCqImageInternalFontFontHelperProperties.h
 *
 * 
 */

#ifndef OAIComDayCqImageInternalFontFontHelperProperties_H
#define OAIComDayCqImageInternalFontFontHelperProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqImageInternalFontFontHelperProperties: public OAIObject {
public:
    OAIComDayCqImageInternalFontFontHelperProperties();
    OAIComDayCqImageInternalFontFontHelperProperties(QString json);
    ~OAIComDayCqImageInternalFontFontHelperProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getFontpath() const;
    void setFontpath(const OAIConfigNodePropertyArray &fontpath);

    OAIConfigNodePropertyInteger getOversamplingFactor() const;
    void setOversamplingFactor(const OAIConfigNodePropertyInteger &oversampling_factor);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray fontpath;
    bool m_fontpath_isSet;

    OAIConfigNodePropertyInteger oversampling_factor;
    bool m_oversampling_factor_isSet;

};

}

#endif // OAIComDayCqImageInternalFontFontHelperProperties_H
