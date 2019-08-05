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


#include "OAIComDayCqWcmCoreImplServletsThumbnailServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::OAIComDayCqWcmCoreImplServletsThumbnailServletProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::OAIComDayCqWcmCoreImplServletsThumbnailServletProperties() {
    this->init();
}

OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::~OAIComDayCqWcmCoreImplServletsThumbnailServletProperties() {
    
}

void
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::init() {
    m_workspace_isSet = false;
    m_dimensions_isSet = false;
}

void
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(workspace, json[QString("workspace")]);
    
    ::OpenAPI::fromJsonValue(dimensions, json[QString("dimensions")]);
    
}

QString
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(workspace.isSet()){
        obj.insert(QString("workspace"), ::OpenAPI::toJsonValue(workspace));
    }
	if(dimensions.isSet()){
        obj.insert(QString("dimensions"), ::OpenAPI::toJsonValue(dimensions));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::getWorkspace() const {
    return workspace;
}
void
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::setWorkspace(const OAIConfigNodePropertyString &workspace) {
    this->workspace = workspace;
    this->m_workspace_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::getDimensions() const {
    return dimensions;
}
void
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::setDimensions(const OAIConfigNodePropertyArray &dimensions) {
    this->dimensions = dimensions;
    this->m_dimensions_isSet = true;
}


bool
OAIComDayCqWcmCoreImplServletsThumbnailServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(workspace.isSet()){ isObjectUpdated = true; break;}
    
        if(dimensions.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
