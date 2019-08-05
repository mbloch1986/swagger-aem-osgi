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


#include "OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties() {
    this->init();
}

OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::~OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties() {
    
}

void
OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::init() {
    m_is_member_check_isSet = false;
}

void
OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(is_member_check, json[QString("isMemberCheck")]);
    
}

QString
OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::asJsonObject() const {
    QJsonObject obj;
	if(is_member_check.isSet()){
        obj.insert(QString("isMemberCheck"), ::OpenAPI::toJsonValue(is_member_check));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::getIsMemberCheck() const {
    return is_member_check;
}
void
OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::setIsMemberCheck(const OAIConfigNodePropertyBoolean &is_member_check) {
    this->is_member_check = is_member_check;
    this->m_is_member_check_isSet = true;
}


bool
OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(is_member_check.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
