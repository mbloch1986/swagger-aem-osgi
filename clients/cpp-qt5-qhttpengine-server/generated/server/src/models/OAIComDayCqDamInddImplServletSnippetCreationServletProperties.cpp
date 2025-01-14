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


#include "OAIComDayCqDamInddImplServletSnippetCreationServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamInddImplServletSnippetCreationServletProperties::OAIComDayCqDamInddImplServletSnippetCreationServletProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamInddImplServletSnippetCreationServletProperties::OAIComDayCqDamInddImplServletSnippetCreationServletProperties() {
    this->init();
}

OAIComDayCqDamInddImplServletSnippetCreationServletProperties::~OAIComDayCqDamInddImplServletSnippetCreationServletProperties() {
    
}

void
OAIComDayCqDamInddImplServletSnippetCreationServletProperties::init() {
    m_snippetcreation_maxcollections_isSet = false;
}

void
OAIComDayCqDamInddImplServletSnippetCreationServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamInddImplServletSnippetCreationServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(snippetcreation_maxcollections, json[QString("snippetcreation.maxcollections")]);
    
}

QString
OAIComDayCqDamInddImplServletSnippetCreationServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamInddImplServletSnippetCreationServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(snippetcreation_maxcollections.isSet()){
        obj.insert(QString("snippetcreation.maxcollections"), ::OpenAPI::toJsonValue(snippetcreation_maxcollections));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComDayCqDamInddImplServletSnippetCreationServletProperties::getSnippetcreationMaxcollections() const {
    return snippetcreation_maxcollections;
}
void
OAIComDayCqDamInddImplServletSnippetCreationServletProperties::setSnippetcreationMaxcollections(const OAIConfigNodePropertyInteger &snippetcreation_maxcollections) {
    this->snippetcreation_maxcollections = snippetcreation_maxcollections;
    this->m_snippetcreation_maxcollections_isSet = true;
}


bool
OAIComDayCqDamInddImplServletSnippetCreationServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(snippetcreation_maxcollections.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

