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
 * OAIComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties_H
#define OAIComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties: public OAIObject {
public:
    OAIComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties();
    OAIComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties(QString json);
    ~OAIComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getFormsFormparagraphpostprocessorEnabled() const;
    void setFormsFormparagraphpostprocessorEnabled(const OAIConfigNodePropertyBoolean &forms_formparagraphpostprocessor_enabled);

    OAIConfigNodePropertyArray getFormsFormparagraphpostprocessorFormresourcetypes() const;
    void setFormsFormparagraphpostprocessorFormresourcetypes(const OAIConfigNodePropertyArray &forms_formparagraphpostprocessor_formresourcetypes);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean forms_formparagraphpostprocessor_enabled;
    bool m_forms_formparagraphpostprocessor_enabled_isSet;

    OAIConfigNodePropertyArray forms_formparagraphpostprocessor_formresourcetypes;
    bool m_forms_formparagraphpostprocessor_formresourcetypes_isSet;

};

}

#endif // OAIComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties_H
