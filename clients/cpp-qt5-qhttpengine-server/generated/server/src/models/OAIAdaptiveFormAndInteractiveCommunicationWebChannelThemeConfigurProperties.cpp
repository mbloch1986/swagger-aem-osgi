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


#include "OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties(QString json) {
    this->fromJson(json);
}

OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties() {
    this->init();
}

OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::~OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties() {
    
}

void
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::init() {
    m_font_list_isSet = false;
}

void
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(font_list, json[QString("fontList")]);
    
}

QString
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::asJsonObject() const {
    QJsonObject obj;
	if(font_list.isSet()){
        obj.insert(QString("fontList"), ::OpenAPI::toJsonValue(font_list));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::getFontList() const {
    return font_list;
}
void
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::setFontList(const OAIConfigNodePropertyArray &font_list) {
    this->font_list = font_list;
    this->m_font_list_isSet = true;
}


bool
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(font_list.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
