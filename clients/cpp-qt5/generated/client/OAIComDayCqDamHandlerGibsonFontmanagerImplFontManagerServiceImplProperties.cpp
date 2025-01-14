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


#include "OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties() {
    init();
}

OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::~OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties() {
    this->cleanup();
}

void
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::init() {
    event_filter = new OAIConfigNodePropertyString();
    m_event_filter_isSet = false;
    fontmgr_system_font_dir = new OAIConfigNodePropertyArray();
    m_fontmgr_system_font_dir_isSet = false;
    fontmgr_adobe_font_dir = new OAIConfigNodePropertyString();
    m_fontmgr_adobe_font_dir_isSet = false;
    fontmgr_customer_font_dir = new OAIConfigNodePropertyString();
    m_fontmgr_customer_font_dir_isSet = false;
}

void
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::cleanup() {
    if(event_filter != nullptr) { 
        delete event_filter;
    }
    if(fontmgr_system_font_dir != nullptr) { 
        delete fontmgr_system_font_dir;
    }
    if(fontmgr_adobe_font_dir != nullptr) { 
        delete fontmgr_adobe_font_dir;
    }
    if(fontmgr_customer_font_dir != nullptr) { 
        delete fontmgr_customer_font_dir;
    }
}

OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties*
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&event_filter, pJson["event.filter"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&fontmgr_system_font_dir, pJson["fontmgr.system.font.dir"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&fontmgr_adobe_font_dir, pJson["fontmgr.adobe.font.dir"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&fontmgr_customer_font_dir, pJson["fontmgr.customer.font.dir"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::asJsonObject() {
    QJsonObject obj;
    if((event_filter != nullptr) && (event_filter->isSet())){
        toJsonValue(QString("event.filter"), event_filter, obj, QString("OAIConfigNodePropertyString"));
    }
    if((fontmgr_system_font_dir != nullptr) && (fontmgr_system_font_dir->isSet())){
        toJsonValue(QString("fontmgr.system.font.dir"), fontmgr_system_font_dir, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((fontmgr_adobe_font_dir != nullptr) && (fontmgr_adobe_font_dir->isSet())){
        toJsonValue(QString("fontmgr.adobe.font.dir"), fontmgr_adobe_font_dir, obj, QString("OAIConfigNodePropertyString"));
    }
    if((fontmgr_customer_font_dir != nullptr) && (fontmgr_customer_font_dir->isSet())){
        toJsonValue(QString("fontmgr.customer.font.dir"), fontmgr_customer_font_dir, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::getEventFilter() {
    return event_filter;
}
void
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::setEventFilter(OAIConfigNodePropertyString* event_filter) {
    this->event_filter = event_filter;
    this->m_event_filter_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::getFontmgrSystemFontDir() {
    return fontmgr_system_font_dir;
}
void
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::setFontmgrSystemFontDir(OAIConfigNodePropertyArray* fontmgr_system_font_dir) {
    this->fontmgr_system_font_dir = fontmgr_system_font_dir;
    this->m_fontmgr_system_font_dir_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::getFontmgrAdobeFontDir() {
    return fontmgr_adobe_font_dir;
}
void
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::setFontmgrAdobeFontDir(OAIConfigNodePropertyString* fontmgr_adobe_font_dir) {
    this->fontmgr_adobe_font_dir = fontmgr_adobe_font_dir;
    this->m_fontmgr_adobe_font_dir_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::getFontmgrCustomerFontDir() {
    return fontmgr_customer_font_dir;
}
void
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::setFontmgrCustomerFontDir(OAIConfigNodePropertyString* fontmgr_customer_font_dir) {
    this->fontmgr_customer_font_dir = fontmgr_customer_font_dir;
    this->m_fontmgr_customer_font_dir_isSet = true;
}


bool
OAIComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(event_filter != nullptr && event_filter->isSet()){ isObjectUpdated = true; break;}
        if(fontmgr_system_font_dir != nullptr && fontmgr_system_font_dir->isSet()){ isObjectUpdated = true; break;}
        if(fontmgr_adobe_font_dir != nullptr && fontmgr_adobe_font_dir->isSet()){ isObjectUpdated = true; break;}
        if(fontmgr_customer_font_dir != nullptr && fontmgr_customer_font_dir->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

