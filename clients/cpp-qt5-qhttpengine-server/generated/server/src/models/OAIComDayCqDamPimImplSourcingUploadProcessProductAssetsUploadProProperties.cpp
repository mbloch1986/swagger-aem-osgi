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


#include "OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties() {
    this->init();
}

OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::~OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties() {
    
}

void
OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::init() {
    m_delete_zip_file_isSet = false;
}

void
OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(delete_zip_file, json[QString("delete.zip.file")]);
    
}

QString
OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::asJsonObject() const {
    QJsonObject obj;
	if(delete_zip_file.isSet()){
        obj.insert(QString("delete.zip.file"), ::OpenAPI::toJsonValue(delete_zip_file));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::getDeleteZipFile() const {
    return delete_zip_file;
}
void
OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::setDeleteZipFile(const OAIConfigNodePropertyBoolean &delete_zip_file) {
    this->delete_zip_file = delete_zip_file;
    this->m_delete_zip_file_isSet = true;
}


bool
OAIComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(delete_zip_file.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
