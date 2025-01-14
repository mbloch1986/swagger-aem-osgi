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


#include "OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties() {
    this->init();
}

OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::~OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties() {
    
}

void
OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::init() {
    m_ignore_path_isSet = false;
}

void
OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(ignore_path, json[QString("ignore_path")]);
    
}

QString
OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::asJsonObject() const {
    QJsonObject obj;
	if(ignore_path.isSet()){
        obj.insert(QString("ignore_path"), ::OpenAPI::toJsonValue(ignore_path));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::getIgnorePath() const {
    return ignore_path;
}
void
OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::setIgnorePath(const OAIConfigNodePropertyBoolean &ignore_path) {
    this->ignore_path = ignore_path;
    this->m_ignore_path_isSet = true;
}


bool
OAIComDayCqTaggingImplSearchTagPredicateEvaluatorProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(ignore_path.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

