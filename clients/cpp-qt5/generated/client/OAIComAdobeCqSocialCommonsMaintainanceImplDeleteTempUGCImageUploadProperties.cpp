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


#include "OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties() {
    init();
}

OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::~OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::init() {
    number_of_days = new OAIConfigNodePropertyInteger();
    m_number_of_days_isSet = false;
    age_of_file = new OAIConfigNodePropertyInteger();
    m_age_of_file_isSet = false;
}

void
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::cleanup() {
    if(number_of_days != nullptr) { 
        delete number_of_days;
    }
    if(age_of_file != nullptr) { 
        delete age_of_file;
    }
}

OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties*
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&number_of_days, pJson["numberOfDays"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&age_of_file, pJson["ageOfFile"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::asJsonObject() {
    QJsonObject obj;
    if((number_of_days != nullptr) && (number_of_days->isSet())){
        toJsonValue(QString("numberOfDays"), number_of_days, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((age_of_file != nullptr) && (age_of_file->isSet())){
        toJsonValue(QString("ageOfFile"), age_of_file, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::getNumberOfDays() {
    return number_of_days;
}
void
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::setNumberOfDays(OAIConfigNodePropertyInteger* number_of_days) {
    this->number_of_days = number_of_days;
    this->m_number_of_days_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::getAgeOfFile() {
    return age_of_file;
}
void
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::setAgeOfFile(OAIConfigNodePropertyInteger* age_of_file) {
    this->age_of_file = age_of_file;
    this->m_age_of_file_isSet = true;
}


bool
OAIComAdobeCqSocialCommonsMaintainanceImplDeleteTempUGCImageUploadProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(number_of_days != nullptr && number_of_days->isSet()){ isObjectUpdated = true; break;}
        if(age_of_file != nullptr && age_of_file->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

