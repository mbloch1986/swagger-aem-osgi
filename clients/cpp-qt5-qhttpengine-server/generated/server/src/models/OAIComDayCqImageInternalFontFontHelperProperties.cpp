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


#include "OAIComDayCqImageInternalFontFontHelperProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqImageInternalFontFontHelperProperties::OAIComDayCqImageInternalFontFontHelperProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqImageInternalFontFontHelperProperties::OAIComDayCqImageInternalFontFontHelperProperties() {
    this->init();
}

OAIComDayCqImageInternalFontFontHelperProperties::~OAIComDayCqImageInternalFontFontHelperProperties() {
    
}

void
OAIComDayCqImageInternalFontFontHelperProperties::init() {
    m_fontpath_isSet = false;
    m_oversampling_factor_isSet = false;
}

void
OAIComDayCqImageInternalFontFontHelperProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqImageInternalFontFontHelperProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(fontpath, json[QString("fontpath")]);
    
    ::OpenAPI::fromJsonValue(oversampling_factor, json[QString("oversamplingFactor")]);
    
}

QString
OAIComDayCqImageInternalFontFontHelperProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqImageInternalFontFontHelperProperties::asJsonObject() const {
    QJsonObject obj;
	if(fontpath.isSet()){
        obj.insert(QString("fontpath"), ::OpenAPI::toJsonValue(fontpath));
    }
	if(oversampling_factor.isSet()){
        obj.insert(QString("oversamplingFactor"), ::OpenAPI::toJsonValue(oversampling_factor));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqImageInternalFontFontHelperProperties::getFontpath() const {
    return fontpath;
}
void
OAIComDayCqImageInternalFontFontHelperProperties::setFontpath(const OAIConfigNodePropertyArray &fontpath) {
    this->fontpath = fontpath;
    this->m_fontpath_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqImageInternalFontFontHelperProperties::getOversamplingFactor() const {
    return oversampling_factor;
}
void
OAIComDayCqImageInternalFontFontHelperProperties::setOversamplingFactor(const OAIConfigNodePropertyInteger &oversampling_factor) {
    this->oversampling_factor = oversampling_factor;
    this->m_oversampling_factor_isSet = true;
}


bool
OAIComDayCqImageInternalFontFontHelperProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(fontpath.isSet()){ isObjectUpdated = true; break;}
    
        if(oversampling_factor.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

