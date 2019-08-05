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


#include "OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties() {
    init();
}

OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::~OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::init() {
    references = new OAIConfigNodePropertyArray();
    m_references_isSet = false;
    scripts = new OAIConfigNodePropertyArray();
    m_scripts_isSet = false;
}

void
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::cleanup() {
    if(references != nullptr) { 
        delete references;
    }
    if(scripts != nullptr) { 
        delete scripts;
    }
}

OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties*
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&references, pJson["references"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&scripts, pJson["scripts"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::asJsonObject() {
    QJsonObject obj;
    if((references != nullptr) && (references->isSet())){
        toJsonValue(QString("references"), references, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((scripts != nullptr) && (scripts->isSet())){
        toJsonValue(QString("scripts"), scripts, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::getReferences() {
    return references;
}
void
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::setReferences(OAIConfigNodePropertyArray* references) {
    this->references = references;
    this->m_references_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::getScripts() {
    return scripts;
}
void
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::setScripts(OAIConfigNodePropertyArray* scripts) {
    this->scripts = scripts;
    this->m_scripts_isSet = true;
}


bool
OAIOrgApacheSlingJcrRepoinitRepositoryInitializerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(references != nullptr && references->isSet()){ isObjectUpdated = true; break;}
        if(scripts != nullptr && scripts->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
