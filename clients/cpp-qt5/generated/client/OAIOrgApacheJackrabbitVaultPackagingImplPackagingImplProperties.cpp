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


#include "OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties() {
    init();
}

OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::~OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties() {
    this->cleanup();
}

void
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::init() {
    package_roots = new OAIConfigNodePropertyArray();
    m_package_roots_isSet = false;
}

void
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::cleanup() {
    if(package_roots != nullptr) { 
        delete package_roots;
    }
}

OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties*
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&package_roots, pJson["packageRoots"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::asJsonObject() {
    QJsonObject obj;
    if((package_roots != nullptr) && (package_roots->isSet())){
        toJsonValue(QString("packageRoots"), package_roots, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::getPackageRoots() {
    return package_roots;
}
void
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::setPackageRoots(OAIConfigNodePropertyArray* package_roots) {
    this->package_roots = package_roots;
    this->m_package_roots_isSet = true;
}


bool
OAIOrgApacheJackrabbitVaultPackagingImplPackagingImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(package_roots != nullptr && package_roots->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

