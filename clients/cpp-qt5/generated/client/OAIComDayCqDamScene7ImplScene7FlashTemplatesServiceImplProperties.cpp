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


#include "OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties() {
    init();
}

OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::~OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties() {
    this->cleanup();
}

void
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::init() {
    scene7_flash_templates_rti = new OAIConfigNodePropertyString();
    m_scene7_flash_templates_rti_isSet = false;
    scene7_flash_templates_rsi = new OAIConfigNodePropertyString();
    m_scene7_flash_templates_rsi_isSet = false;
    scene7_flash_templates_rb = new OAIConfigNodePropertyString();
    m_scene7_flash_templates_rb_isSet = false;
    scene7_flash_templates_rurl = new OAIConfigNodePropertyString();
    m_scene7_flash_templates_rurl_isSet = false;
    scene7_flash_template_url_format_parameter = new OAIConfigNodePropertyString();
    m_scene7_flash_template_url_format_parameter_isSet = false;
}

void
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::cleanup() {
    if(scene7_flash_templates_rti != nullptr) { 
        delete scene7_flash_templates_rti;
    }
    if(scene7_flash_templates_rsi != nullptr) { 
        delete scene7_flash_templates_rsi;
    }
    if(scene7_flash_templates_rb != nullptr) { 
        delete scene7_flash_templates_rb;
    }
    if(scene7_flash_templates_rurl != nullptr) { 
        delete scene7_flash_templates_rurl;
    }
    if(scene7_flash_template_url_format_parameter != nullptr) { 
        delete scene7_flash_template_url_format_parameter;
    }
}

OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties*
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&scene7_flash_templates_rti, pJson["scene7FlashTemplates.rti"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&scene7_flash_templates_rsi, pJson["scene7FlashTemplates.rsi"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&scene7_flash_templates_rb, pJson["scene7FlashTemplates.rb"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&scene7_flash_templates_rurl, pJson["scene7FlashTemplates.rurl"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&scene7_flash_template_url_format_parameter, pJson["scene7FlashTemplate.urlFormatParameter"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::asJsonObject() {
    QJsonObject obj;
    if((scene7_flash_templates_rti != nullptr) && (scene7_flash_templates_rti->isSet())){
        toJsonValue(QString("scene7FlashTemplates.rti"), scene7_flash_templates_rti, obj, QString("OAIConfigNodePropertyString"));
    }
    if((scene7_flash_templates_rsi != nullptr) && (scene7_flash_templates_rsi->isSet())){
        toJsonValue(QString("scene7FlashTemplates.rsi"), scene7_flash_templates_rsi, obj, QString("OAIConfigNodePropertyString"));
    }
    if((scene7_flash_templates_rb != nullptr) && (scene7_flash_templates_rb->isSet())){
        toJsonValue(QString("scene7FlashTemplates.rb"), scene7_flash_templates_rb, obj, QString("OAIConfigNodePropertyString"));
    }
    if((scene7_flash_templates_rurl != nullptr) && (scene7_flash_templates_rurl->isSet())){
        toJsonValue(QString("scene7FlashTemplates.rurl"), scene7_flash_templates_rurl, obj, QString("OAIConfigNodePropertyString"));
    }
    if((scene7_flash_template_url_format_parameter != nullptr) && (scene7_flash_template_url_format_parameter->isSet())){
        toJsonValue(QString("scene7FlashTemplate.urlFormatParameter"), scene7_flash_template_url_format_parameter, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplatesRti() {
    return scene7_flash_templates_rti;
}
void
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplatesRti(OAIConfigNodePropertyString* scene7_flash_templates_rti) {
    this->scene7_flash_templates_rti = scene7_flash_templates_rti;
    this->m_scene7_flash_templates_rti_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplatesRsi() {
    return scene7_flash_templates_rsi;
}
void
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplatesRsi(OAIConfigNodePropertyString* scene7_flash_templates_rsi) {
    this->scene7_flash_templates_rsi = scene7_flash_templates_rsi;
    this->m_scene7_flash_templates_rsi_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplatesRb() {
    return scene7_flash_templates_rb;
}
void
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplatesRb(OAIConfigNodePropertyString* scene7_flash_templates_rb) {
    this->scene7_flash_templates_rb = scene7_flash_templates_rb;
    this->m_scene7_flash_templates_rb_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplatesRurl() {
    return scene7_flash_templates_rurl;
}
void
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplatesRurl(OAIConfigNodePropertyString* scene7_flash_templates_rurl) {
    this->scene7_flash_templates_rurl = scene7_flash_templates_rurl;
    this->m_scene7_flash_templates_rurl_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplateUrlFormatParameter() {
    return scene7_flash_template_url_format_parameter;
}
void
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplateUrlFormatParameter(OAIConfigNodePropertyString* scene7_flash_template_url_format_parameter) {
    this->scene7_flash_template_url_format_parameter = scene7_flash_template_url_format_parameter;
    this->m_scene7_flash_template_url_format_parameter_isSet = true;
}


bool
OAIComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(scene7_flash_templates_rti != nullptr && scene7_flash_templates_rti->isSet()){ isObjectUpdated = true; break;}
        if(scene7_flash_templates_rsi != nullptr && scene7_flash_templates_rsi->isSet()){ isObjectUpdated = true; break;}
        if(scene7_flash_templates_rb != nullptr && scene7_flash_templates_rb->isSet()){ isObjectUpdated = true; break;}
        if(scene7_flash_templates_rurl != nullptr && scene7_flash_templates_rurl->isSet()){ isObjectUpdated = true; break;}
        if(scene7_flash_template_url_format_parameter != nullptr && scene7_flash_template_url_format_parameter->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

