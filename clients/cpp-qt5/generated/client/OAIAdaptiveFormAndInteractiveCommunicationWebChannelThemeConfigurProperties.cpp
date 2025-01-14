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
    init();
    this->fromJson(json);
}

OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties() {
    init();
}

OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::~OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties() {
    this->cleanup();
}

void
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::init() {
    font_list = new OAIConfigNodePropertyArray();
    m_font_list_isSet = false;
}

void
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::cleanup() {
    if(font_list != nullptr) { 
        delete font_list;
    }
}

OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties*
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&font_list, pJson["fontList"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::asJsonObject() {
    QJsonObject obj;
    if((font_list != nullptr) && (font_list->isSet())){
        toJsonValue(QString("fontList"), font_list, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::getFontList() {
    return font_list;
}
void
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::setFontList(OAIConfigNodePropertyArray* font_list) {
    this->font_list = font_list;
    this->m_font_list_isSet = true;
}


bool
OAIAdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(font_list != nullptr && font_list->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

