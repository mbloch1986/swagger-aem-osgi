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
 * OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties_H_
#define OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties: public OAIObject {
public:
    OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties();
    OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties(QString json);
    ~OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getScene7FlashTemplatesRti();
    void setScene7FlashTemplatesRti(OAIConfigNodePropertyString* scene7_flash_templates_rti);

    OAIConfigNodePropertyString* getScene7FlashTemplatesRsi();
    void setScene7FlashTemplatesRsi(OAIConfigNodePropertyString* scene7_flash_templates_rsi);

    OAIConfigNodePropertyString* getScene7FlashTemplatesRb();
    void setScene7FlashTemplatesRb(OAIConfigNodePropertyString* scene7_flash_templates_rb);

    OAIConfigNodePropertyString* getScene7FlashTemplatesRurl();
    void setScene7FlashTemplatesRurl(OAIConfigNodePropertyString* scene7_flash_templates_rurl);

    OAIConfigNodePropertyString* getScene7FlashTemplateUrlFormatParameter();
    void setScene7FlashTemplateUrlFormatParameter(OAIConfigNodePropertyString* scene7_flash_template_url_format_parameter);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* scene7_flash_templates_rti;
    bool m_scene7_flash_templates_rti_isSet;

    OAIConfigNodePropertyString* scene7_flash_templates_rsi;
    bool m_scene7_flash_templates_rsi_isSet;

    OAIConfigNodePropertyString* scene7_flash_templates_rb;
    bool m_scene7_flash_templates_rb_isSet;

    OAIConfigNodePropertyString* scene7_flash_templates_rurl;
    bool m_scene7_flash_templates_rurl_isSet;

    OAIConfigNodePropertyString* scene7_flash_template_url_format_parameter;
    bool m_scene7_flash_template_url_format_parameter_isSet;

};

}

#endif /* OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties_H_ */